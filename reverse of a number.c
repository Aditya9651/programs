#include<stdio.h>
int main()
{
    int n,rev,a,b,c;
    printf("enter the 3 digit number");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    rev=a*100+b*10+c;
    printf("reverse of three digit number is %d",rev);
}