# Projectile Motion With Air Resistance
This project was created to simulate the path of a tennis ball launched obliquely by a medium-sized catapult.

# Introduction

Without air resistance, calculating the range of an obliquely launched projectile is simple with knowledge of the launch velocity and angle.  However, equations for an obliquely launched projectile while taking into account air resistance is much more complicated and can not be solved analytically.  This program uses a numerical solution to "solve" these equations.


# Background
Air resistance is determined by the the speed of the object and always opposite to the direction of motion.  There are 2 different "types" of air resistance each having a different relationship to the speed of the object.  The times that these types of drag occur is determined by the Reynold's number which is dependment of the speed, size, and viscosity of the air.  The most typical type of air resistance is Newtonian drag which occurs at Reynold's numbers of 1000+.  In the case of a tennis ball, drag will typically be Newtonian.

# Force analysis
In the situation detailed here, the force of drag is proportional to the square of the tennis ball’s velocity and always acts in the opposite direction to the velocity.  We can denote this as:
```math
D=Cv^{2}=C\hat{v}\left\| v \right\|
```

C, the coefficient of drag, is found by multiplying the density of the air, the surface area of the ball in contact with the air (what it looks like from the front), and a constant called drag coefficient which comes from the shape of the object (for a ball, it is around 0.47) and dividing by 2.


By decomposing the drag force into x and y components, net force equations for x and y look like this: 
```math
F_{x}=D_{x}=-Cvv_{x}
```
```math
F_{y}=F_{g}+D_{y}=mg-Cvv_{y}
```

We can simply divide by mass to get the acceleration of the object:  
```math
a_{x}=\frac{Cvv_{x}}{m}
```
```math
a_{y}=g-\frac{Cvv_{y}}{m}
```

# Kinematics

While these acceleration vectors are constantly changing, if we use a small time interval, t, we can treat acceleration as constant and use the constant acceleration kinematic equations to calculate the aforementioned values at a later time.  We can use the average velocity in the time interval t for another kinematic equation: 
```math
x=\frac{(v_{i}+v_{f})t}{2}
```
```math
x=\frac{(v_{i}+v_{i}+at)t}{2}
```
```math
x=\frac{(2v_{i}+at)t}{2}
```
```math
x=v_{i}t+1/2*at^2
```

