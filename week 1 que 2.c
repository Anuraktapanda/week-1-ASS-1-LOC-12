#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    printf("enter a number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("the given number is positive");
    }
    elseif(a<0)
    {
        printf("the given number is negetive");
    }
    else(a=0)
    {
        printf("the given number is zero");
    }
    getch();
}