// program to find the sum of series of 1 – x^2/2! + x^4/4! -…. upto nth term.
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,num,x,n;
    float sum,fact;
    printf("Enter the value of last term of series = ");
    scanf("%d",&num);
    printf("Enter the value of x in series = ");
    scanf("%d",&x);
    sum=1;
    for(i=0;i<=n;i++)
    {
        fact=1;
        for(j=2*i;j>=1;j--)
        {
            fact=fact*j;
        }
            if(i%2==0)
                sum=sum+pow(x,2*i)/fact;
            else
                sum=sum-pow(x,2*i)/fact;
        
    }
    printf("The sum of series is given by : %4f \n",sum);
    return 0;
    
}
