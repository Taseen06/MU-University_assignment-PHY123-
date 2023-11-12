//The Wavelength Calculator
#include <stdio.h>
#include<math.h>
int main()
{
    int m;
    double d,theta,wavelength;

    printf("Enter the order of interference (m): ");
    scanf("%d", &m);

    printf("Enter the angle (theta in degree): ");
    scanf("%lf", &theta);

    printf("Enter the distance between slits (d) in micrometer: ");
    scanf("%lf", &d);

    d=d*1000; // 1 micrometer =1000nm

    wavelength = ((d*sin(theta))/m ); // d*sin(theta)= m*lambda

    printf("\n\nvalue of the wavelength: %.2f nm\n", wavelength);


    if (wavelength >= 380 && wavelength < 450)
        {
         printf("Color of light: Violet\n");
        }
    else if (wavelength >= 450 && wavelength < 485)
        {
         printf("Color of light: Blue\n");
        }
    else if (wavelength >= 485 && wavelength < 500)
        {
         printf("Color of light: Cyan\n");
        }
    else if (wavelength >= 500 && wavelength < 565)
        {
         printf("Color of light: Green\n");
        }
    else if (wavelength >= 565 && wavelength < 590)
        {
         printf("Color of light: Yellow\n");
        }
    else if (wavelength >= 590 && wavelength < 625)
        {
        printf("Color of light: Orange\n");
        }
    else if (wavelength >= 625 && wavelength <= 750)
        {
        printf("Color of light: Red\n");
        }
    else
        {
        printf("Color not within visible light range\n");
        }

    return 0;
}

