/*area of circle = 3.14 * r^2
circumference of circle = 2*3.14*r */
#include <stdio.h>
void main()
{
    int r;
    float area, cf;
    printf("enter the r of circle\n");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("the area of of circle is %f \n", area);
    cf = 2 * 3.14 * r;
    printf("the circumference of circle is %f\n", cf);
}