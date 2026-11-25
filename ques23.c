/* to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
int main(){
int day;
int fine;
printf ("enter the number of days: ");
scanf("%d",&day);
if(day<=5){
fine = (day*2);
printf("the fine for %d days is %d",day,fine);
}
else if (day<=10){
    fine= ((5*2)+(day-5)*4);
    printf("the total fine for %d days is %d",day,fine);
}
else if ( day<=30){
    fine = (5*2) + (5*4) + (day - 10) * 6;
    printf("fine for %d days is %d",day,fine);
}
else {
    printf("membership cancelled");
}
return(0);
}
