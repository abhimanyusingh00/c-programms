// program to check eligibility of particular course based on marks
#include<stdio.h>
int main()
{
    int M,P,C,MP,total;
    printf("Enter the marks of physics: \n");
    scanf("%d",&P);
    printf("Enter the marks of chemistry: \n ");
    scanf("%d",&C);
    printf("Enter the marks of mathematics: \n");
    scanf("%d",&M);
    MP= M + P;
    printf("The total marks of maths and physics are = %d",MP);
    total=M+P+C;
    printf(" \n The total marks of all the three subjects is : \n %d",total);
    if (M>=60)
             if(P>=40)
                 if(C>=50)
                if((total)>=200||(MP)>=150)
                   printf(" \n The  candidate is eligible for admission.\n");
                else
                  printf(" \n The candidate is not eligible.\n");
                 else
            printf(" \n The candidate is not eligible.\n");
             else
           printf(" \n The candidate is not eligible.\n");
        else
         printf(" \n The candidate is not eligible.\n");
    }
