// program to find the sum of series 1!+2!+3!++.........
#include<stdio.h>
int main()
{
int num,i,j,fact,sum=0;
printf("Enter the last number of series:\n");
    scanf("%d",&num);
    //loop for printing left hand side of the series.
for(i=1;i<=num;i++)
{
fact=1;
if(i!=num)
    printf("%d!+ ",i);
else
printf("%d!= ",i);
    // loop for the printing of result of the summation of factorial.
    for(j=1;j<=i;j++)
fact=fact*j;
    sum=sum+fact;
}
    printf("%d \n ",sum);
    return 0;
}
