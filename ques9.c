// to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main(){
int p;
float r,t,ci,si ;
printf("enter the principal amt :",p);
scanf("%d",&p);
printf("enter the rate of interest :",r);
scanf("%f",&r);
printf("enter time in seconds :",t);
scanf("%f",&t);
si= (p*r*t)/100 ;
printf("simple interest :%.2f\n",si);
ci= p+si ;
printf("compound interest : %.2f\n",ci);

}