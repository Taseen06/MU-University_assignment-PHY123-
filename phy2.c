#include <stdio.h>
#include<math.h>
int main()
{
    int m_1 =3, m_2=2;
    double d, theta_1 = 65.0, theta_2, wavelength_green =530, wavelength_red =700,x;
    const double PI = 3.1415926;

    printf("If a diffraction produces a third-order bright spot for green light at 65.0 degree from central maximum.\n\nThen,");

    printf("\nThe order (m) = %d",m_1);

    printf("\nThe angle (theta) = %.2lf degree",theta_1);

    printf("\nThe wavelength for green light (lambda)= %.2lf nm \n",wavelength_green);


    d=((m_1*wavelength_green)/sin(theta_1));    /*  `    d*sin(theta)= m*lambda
                                                   thus, d= m*lambda/sin(theta)  */

    /*we got value of d. Now,we have find out the angle of 2nd order bright spot for red light*/


    x=((m_2*wavelength_red)/d);/*  again,   d*sin(theta)= m*lambda
                                    thus,   theta= sin^-1{(m*lambda)/d}

                                  assume,   x=(m*lambda)/d
                                    thus,   theta= sin^-1(x)             */

    theta_2 = asin(x); // angle in radians

    theta_2 = theta_2*(180.0/PI); // Convert radians to degree

    printf("\n\nThe Second order Maxima for Red light (of wavelength %.2lf nm) will be spotted at %.2lf Degree\n\n",wavelength_red,theta_2);




    return 0;
}

