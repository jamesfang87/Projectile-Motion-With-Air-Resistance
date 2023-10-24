# Projectile-Motion-With-Air-Resistance
Tracking the motion of a projectile with both gravity and air resistance cannot be done analytically most of the time.  A numerical solution requiring massive computation is instead required.  This program does that.  Given initial parameters like air density, initial velocity, and launch angle, this program will output the range of the projectile.


Without air resistance, the only force acting on a projectile is gravity.  Therefore, its acceleration in the x-direction is 0 and the acceleration in the y-direction is g.  
With air resistance, there is a force Fd = Dv^2.  This force acts opposite of the direction of the object's velocity so that fx = -Dvvx and fy=-Dvvy.  Writing net force equations tells us that

Fx = -Dvvx=max and Fy = mg-Dvvy-may

Dividing by mass then gives us acceleration.
