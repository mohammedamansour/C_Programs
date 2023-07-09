#include <stdio.h>
#include <math.h>
main()
{
    printf("RADIUS/AREA OF A CIRCLE \n");
    int choice; float s, r, pi=3.14;
    printf("Would you like to calculate : (1) Area ?   (2) Radius ?\nYour Answer : "); scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        {
            printf("\n\nType the radius of the circle : ");scanf("%f", &r);
            s=r*r*pi;
            printf("The area of this circle is : %f", s);
            break;
        }
    case 2:
        {
            printf("\n\nType the area of the circle : ");scanf("%f", &s);
            r=sqrt(s/pi);
            printf("The radius of this circle is : %f", r);
            break;
        }
    }
}
