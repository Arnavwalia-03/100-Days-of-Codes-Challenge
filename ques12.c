//check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main(){
int a;
printf("enter number: ");
scanf("%d",&a);
if (a>0){
    printf("the number is positive\n");
}else{
    if (a<0){
        printf("the number is negative\n");
    }else{
        printf("the number is zero\n");
    }
}
return (0);
}