#include<stdio.h>
int main()
{
    int a ,b ,c,choice;
    printf("the values of a and b\n");
    scanf("%d%d",&a,&b);
    printf("enter 1 for addition,2 for sub, 3 for multiple, 4 for modulus\n");
    printf("enter a choice from above\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    c=a+b;
    printf("%d",c);
    break;
    case 2:
    c=a-b;
    printf("%d",c);
    break;
    case 3:
    c=a*b;
    printf("%d",c);
    break;
    case 4:
    c=a/b;
    printf("%d",c);
    break;
    default:
    printf("invalid choice");
    }
}