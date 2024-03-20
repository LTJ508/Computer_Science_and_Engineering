/*3.	Find the volume of a (a) cube and (b) cylinder
Note: Read necessary inputs from user e.g. height and diameter of the cylinder for (a)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double cube_a, cylinder_r, cylinder_h, cube_v, cylinder_v;

    printf("Enter the value of Edge of Cube, a: ");
    scanf("%lf", &cube_a);

    cube_v = pow(cube_a,3);

    printf("\nVolume of Cube is: %0.2lf\n", cube_v);

    printf("Please Enter the value of cylinder radius, r: ");
    scanf("%lf", &cylinder_r);
    printf("Please Enter the value of cylinder height, h: ");
    scanf("%lf", &cylinder_h);

    cylinder_v = 3.1416 * cylinder_r * cylinder_r * cylinder_h;

    printf("\nVolume of Cylinder is: %0.2lf\n", cylinder_v);

    return 0;
}
