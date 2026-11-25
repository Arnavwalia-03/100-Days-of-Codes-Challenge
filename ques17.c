// to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main(){
int a,b,c,d,r1,r2;
printf("enter a number :");
scanf("%d",&a);
printf("enter another number:");
scanf("%d",&b);
printf("enter a last number :");
scanf("%d",&c);
d = sqrt((b*b)-4*a*c) ;
r1= ((-b)+(d))/(2*a);
r2= ((-b)-(d))/(2*a);
if (d>0) {
    printf(" the roots are real and different %d,%d\n",r1,r2);
}
else if ( d==0){
    printf("the roots are real and same %d,%d\n",r1,r2);
}
else
{
    printf(" the roots are complex");
}

return(0);
}