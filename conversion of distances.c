/*feet=km*3280.8
m=Km*100
cm=m*10
in=feet*12*/
#include<stdio.h>
int main()
{
    float cm,m,km,feet,in;
    printf("enter the distance in kilometer\n");
    scanf("%f",&km);
    m=km*100;
    cm=m*10;
    feet=km*3280.8;
    in=feet*12;
    printf("%f kilometer is equal to %f m , %f cm , %f feet, %f in\n",km,m,cm,feet,in);
}