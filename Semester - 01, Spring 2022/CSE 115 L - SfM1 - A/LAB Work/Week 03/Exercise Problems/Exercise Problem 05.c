/*5.	Find the angle of a segment in a circle; read the arc length and radius from user.*/

#include <stdio.h>
#define PI 3.1416

int main()
{
    double angle, arc, radius;

    printf("Enter the radius of circle: ");
    scanf("%lf", &radius);
    printf("Enter the arc length of circle: ");
    scanf("%lf", &arc);

    angle = (arc * 360) / (2.0 * PI * radius);

    printf("The angle of the segment is: %0.2lf", angle);

    return 0;
}
