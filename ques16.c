//input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(){
int a,b,c;
printf("enter first number:",a);
scanf("%d",&a);
printf("enter second number :",b);
scanf("%d",&b);
printf("enter third numkber :",c);
scanf("%d",&c);
if(a>b && a>c){
    printf("%d is the largest among all\n",a);}
else{
 if ( b>c && b>a){
    printf("%d is the largest number among all\n",b);
 }
else
{
    printf("%d is the largest among all\n",c);
 }}
return(0);}
