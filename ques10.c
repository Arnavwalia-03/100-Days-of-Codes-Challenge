// to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
int t,h ,m,s;
printf("enter time in seconds :",t);
scanf("%d",&t);
h = t/3600;
m = h%60 ;
s= m %60 ;
printf("format h:m:s is :%d:%d:%d", h,m,s);
return(0);
}