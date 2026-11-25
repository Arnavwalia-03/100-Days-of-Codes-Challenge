// check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character
#include <stdio.h>
int main()
{
    char c;
    printf("enter a character :");
    scanf("%c", &c);
 if (c>='A'&& c<='Z'){
 printf("%c is an uppercase alphabet",c);}

 else if (c>='a'&& c<='z'){
 printf("%c is a lowercase alphabet ",c);}
 else if ( c>= '0' && c<= '9'){
 printf(" %c is a digit ",c);}
 else {
 printf(" %c is a special character ",c);}
 return(0);
}