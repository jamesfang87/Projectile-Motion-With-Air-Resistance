# Projectile-Motion-With-Air-Resistance

Without air resistance, calculating the range of an obliquely launched projectile is simple with knowledge of the launch velocity and angle.  However, equations for an obliquely launched projectile while taking into account air resistance is much more complicated and can not be solved analytically.  This program uses Euler's method of approxiamation in order to numerically solve these equations.

# Euler's Method of Approximation
When we have a function f(x), the tangent line at that a point will touch the function.  This also means that we can use the tangent line to approxiamate values of f(x) close to the point that the two functions touch.  We can do this multiple times when given initial values to a function.  In one dimension, Euler's method is represented like this:

$$
x_{i+1}=x_{i}+\Delta x
y_{i+1}=y_{i}+f'(x_i)\Delta x
$$

Where $$\Delta x$$ is some small interval.



# Force analysis
Note that when ignoring air resistance, ax=0 and ay=g.  In the situation detailed here, the force of drag is proportional to the square of the tennis ball’s velocity and always acts in the opposite direction to the velocity.  We can denote this as D=-Cv2 or D=-Cvv ←the last v is a vector I just can’t type on Google Docs.  C is found by multiplying the density of the air, the surface area of the ball in contact with the air (what it looks like from the front), and a constant called drag coefficient which comes from the shape of the object (for a ball, it is around 0.47) and dividing by 2.   

We can decompose this into x and y components: Dx=-Cvvx and Dy=-Cvvy.  With this, net force equations for x and y look like this: 

Fx=Dx=-Cvvx=ma             

Fy=Fg+Dy=mg-Cvy.  

We can simply divide by mass to get the acceleration of the object:  ax=-Cvvx/m, ay=g-Cvvy/m.  


# Kinematics

While these acceleration vectors are constantly changing, if we use a small time interval, t, and know x, y, vx, vy, ax, ay at a time t, we can treat acceleration as constant and use the constant acceleration kinematic equations to calculate the aforementioned values at t + t.  Since a=v/t, v=at.  Using vf=vi+v, we can update the velocity.  We use the average velocity in the time interval t for another kinematic equation: x=1/2 * (vi+vf) * t.
x=(vi+vi+v)t/2
x=((2vi+v)/2)t
x=(vi+v/2)t
We can also change this to a different form by distributing t and replacing v with the definition we derived above:
x=vit+1/2*v*t
x=vit+1/2*at*t
x=vit+1/2*a(t)2
