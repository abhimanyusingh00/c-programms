// program to find the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,real_root,imaginary_root;
    double D,r1,r2;
    printf("Enter the value of a,b,c from the quadratic equation: \n");
    scanf("%lf%lf%lf",&a,&b,&c);
    D=(b*b)-(4*a*c);
    printf("The determinant of the quadratic equation is: \n");
       if(D>=0){
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
           printf("The first root of quadraric equation is:%lf \n",r1);
           printf("The second root of quadratic equation is:%lf \n",r2);
        }
    else if(D==0)
    {
        r1=r2=(-b/2*a);
        printf("The roots of quadratic equation is:%f \n",r1);
    }
    else(D<0);
    {
        printf("The roots are not real \n");
        real_root=(-b)/(2*a);
        imaginary_root=sqrt(-D)/(2*a);
        printf("The real root of quadratic equation is:%lf \n",real_root);
        printf("The imaginary root of quadratic equation is:%lf \n",imaginary_root);
    }
    return 0;
}
