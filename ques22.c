//to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
#include <math.h>
int main(){
int ci,si,l,p;
float pp,lp;
printf("enter the cost price :");
scanf("%d",&ci);
printf("enter the selling price :");
scanf("%d",&si);
if (si>ci)
{   p = si-ci;
    printf("profit is %d\n",p);
   pp = (p*100)/ci;
   printf("profit percentage is %.2lf %%",pp);}
else if(si<ci)
{ l = ci-si;
    printf("loss is %d\n",l);
    lp = (l*100)/ci;
    printf("loss percentage is %.2lf %%",lp);}

else {printf(" neither profit nor loss");}
return(0);
}
