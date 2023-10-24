#include <cmath>
#include <limits>
#include <iostream>

const double PI = std::atan(1.0) * 4;


struct Object {
    // kinematic descriptions
    double vel, Vx, Vy, x_pos, y_pos;
    // physics traits
    double mass, Cd, surface_area;
    // initial parameters
    double v_launch, angle;


    Object(double v, double theta, double m, double area, double drag_force, double x, double y) {
        v_launch = v;
        angle = theta;

        vel = v_launch;
        Vx = vel * std::cos(angle * (PI / 180.0));
        Vy = vel * std::sin(angle * (PI / 180.0));
        x_pos = x;
        y_pos = y;

        mass = m;
        surface_area = area;
        Cd = drag_force;
    }
};


struct World {
    const double g, rho;
};


int main() {
    Object ball = Object(30, 45, 0.145, (pow(0.075, 2) / 4) * PI, 0.47, 0, 0);
    auto world = World(9.81, 1.225);

    const double drag = (world.rho * ball.Cd * ball.surface_area) / 2;
    const double beta = drag / ball.mass;
    double dt = 0.01;


    for (int j = 0; j < std::numeric_limits<double>::infinity(); j++) {
        ball.vel = sqrt(pow(ball.Vx, 2) + pow(ball.Vy, 2));

        double ax = -1 * beta * ball.Vx * ball.vel;
        double ay = -1 * world.g - (beta * ball.Vy * ball.vel);

        ball.x_pos += (ball.Vx * dt) + (0.5 * ax * pow(dt, 2));
        ball.y_pos += (ball.Vy * dt) + (0.5 * ay * pow(dt, 2));
        ball.Vx += (ax * dt);
        ball.Vy += (ay * dt);


        if (ball.y_pos <= 0.0) {
            std::cout << ball.x_pos;
            break;
        }
    }
}