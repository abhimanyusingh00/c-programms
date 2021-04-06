//program to determine the largest numbers between three numbers using nested if statement.
#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number: \n");
    scanf("%d",&b);
    printf("Enter the third number: \n");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The largest number is = %d \n",a);
        }
        else;
        printf("The largest number is = %d \n",c);
    }
    if(b>c)
    {
            printf("The largest number is = %d \n",b);
        }
        else;
        {
            printf("The largest number is = %d \n",c);
        }
    return 0;
}

