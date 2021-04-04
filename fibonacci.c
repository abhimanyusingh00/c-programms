// program to write fibonacci series upto n terms without recursion.
#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n,i;
    printf("Enter the total number of elements: \n");
    scanf("%d",&n);
    printf("The fibonacci series is : \n");
    printf("\n %d%d",a,b);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
    }
    printf("\n");
    return 0;
}
