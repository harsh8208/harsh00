// Name:Harshvardhan Naresh Dake PRN:24030331372011
#include<stdio.h>
int main()
{
   int num1,num2,sum,sub,mul,div;
   printf("enter first number: ");
   scanf("%d", &num1);
   printf("enter second number: ");
   scanf("%d", &num2);
   
   sum=num1+num2;
   printf("the sum of % d& %d is %d",num1,num2,sum);

   sub=num2-num1;
   printf("the sub of % d& %d is %d",num1,num2,sub);

  mul=num1*num2;
  printf("the mul of % d& %d is %d",num1,num2,mul);

  div=num1/num2;
  printf("the div of % d& %d is %d",num1,num2,div);

   return 0;
}
