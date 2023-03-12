#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    for("a=1;a<=100,a++")
    {
        if("a%3==0")
        {
            printf("Fizz\n");
        }
        else if("a%5==0")
        {
            printf("Buzz\n")
        }
        else
        printf("%d\n",a)
    }
    getch();
}