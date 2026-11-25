//input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()

{
int a,b,sum,diff,prod,quot,rem;
printf("enter first number :",a);
scanf("%d",&a);
printf("enter second number:",b);
scanf("%d",&b);
sum=a+b;
printf("sum of the numbers:%d\n",sum);
diff= a-b;
printf("diff of the numbers is :%d\n",diff);
prod = a*b;
printf(" product is :%d\n",prod);
quot = a/b;
printf("quotient is :%d\n",quot);
rem = a%b;
printf("remainder is :%d\n",rem);
return(0);
}