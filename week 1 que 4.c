#include<stdio.h>
#include<conio.h>
void maim()
{
    int a,b,z;
    clrscr();
    ptintf("enter the values of a and b");
    scanf("%d %d",&a,&b);
    printf("enter choices");
    scanf("%d",&z);
    switch(z)
    {
    case 1:
        printf("addition of %d %d is %d",a,b,a+b);
        break;
    case 2:
        printf("substraction of %d %d is %d",a,b,a-b);
        break;
    case 3:
        printf("multiplication of %d %d is %d",a,b,a*b);
        break;
    case 4:
        printf("division of %d %d is %d",a,b,a/b);
        break;
    default:
        printf("error");
        break;
        }
    getch();
}