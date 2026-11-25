// to calculate the area and perimeter of a rectangle
#include <stdio.h>
int main(){
int l,b,area,per;
printf("enter  length:",l);
scanf("%d",&l);
printf("enter breadth:",b);
scanf("%d",&b);
area= l*b;
printf("area:%d\n",area);
per=2*(l+b);
printf("perimeter : %d\n",per);
return(0);
}