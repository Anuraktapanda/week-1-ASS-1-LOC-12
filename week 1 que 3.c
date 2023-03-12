#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;
    clrscr();
    printf("enter a number");
    scanf("%d",&n);
    do
    {
        sum=sum+n%10;
        n=n/10;
    } 
    while ({n>0});
    getch();
}