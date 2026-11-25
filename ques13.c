//check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main(){
    int a;
    printf("enter year:");
    scanf("%d",&a);
    if (a % 4==0){
        printf("the year is a leap year\n");
    }else{
        printf("the year is not a leap year\n");
    }
    return(0);

}