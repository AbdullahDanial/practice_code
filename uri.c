#include<stdio.h>
int main()
{
 int number,work_hour;
 float salary,dollar;
 scanf("%d",&number);
 scanf("%d",&work_hour);
 scanf("%f",&dollar);
 salary=work_hour*dollar;
 printf("NUMBER = %d\n",number);
 printf("SALARY = U$ %.2f",salary);
 return 0;
}


