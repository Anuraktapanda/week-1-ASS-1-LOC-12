#include<stdio.h>
#include<conio.h>
void main()
{
    float r,a,d,c;
    clrscr();
    printf("enter value of r");
    scanf("%f",&r);
    a=3.14*r*r;
    ptintf("area is %f",a);
    d=2*r;
    printf("diameter is %f",d);
    c=2*3.14*r;
    printf("circumference is %f",c);
    getch();
}