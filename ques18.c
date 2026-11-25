/* a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include <stdio.h>
int main (){
int m ;
printf("enter percentage till 2 decimal: ");
scanf("%d",&m);
if ( m<=100 && m>=90)
{
    printf(" GRADE A");
}    
else if (m>=80 && m<=89)
{
    printf("GRADE B");
}
else if (m>=70 && m<=79)
{
    printf("GRADE C");
}
else if( m>=60 && m<= 69)
{
    printf("GRADE D");
}
else 
{
    printf("GRADE F");
}
return(0);
}