// program for calculating the area of triangle using herones formula.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float S,area;
    printf("Enter the sides of triangle: \n");
    scanf("%f%f%f",&a,&b,&c);
    S=(a+b+c)/2;
    printf("The semi perimeter of triangle is:%lf \n ",S);
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("The area of required triangle is:%f \n",area);
    return 0;
}
