// a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    int a,b;
    char opt ;
    int result ;
    printf(" enter the desired numbers :");
    scanf ("%d,%d",&a,&b);
    printf(" the desired operator :");
    scanf(" %c", &opt);
     switch(opt){
    case'+':
    result= a+b;
    printf(" the sum is %d\n",result);
    break;
    case'-':
    result = a-b;
   printf(" the difference is %d\n", result);
    break;
    case'*':
    result = a*b;
    printf("the product is %d\n",result);
    break;
    case'/':
    result = a/b;
    printf("the quotient is %d\n",result);
    break;
    case'%':
    result = a%b;
    printf("the remainder is %d\n",result);
    break;
}
return(0);
}
