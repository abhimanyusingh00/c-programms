// program to check wether the number is armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int num,original_num,remainder,n=0;
    float result=0.0;
    printf("Enter the integer \n");
    scanf("%d",&num);
    original_num=num;
    // storing the number of digits of num in n .
    for(original_num=num;original_num!=0;n++)
    {
        original_num/=10;
    }
    // storing the sum of the power of individual digits in result.
    for(original_num=num;original_num!=0;original_num/=10)
    {
        remainder=original_num%10;
        result += pow(remainder,n);
    }
    if((int)result==num)
        printf("%d is an armstrong number \n",num);
    else
        printf("%d is not an armstrong number \n",num);
}

// program to check armstrong number for three digit number.
