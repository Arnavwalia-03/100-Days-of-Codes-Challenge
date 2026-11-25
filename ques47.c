/*Write a program to print the following pattern:
*
**
***
****
******/
#include<stdio.h>
int main()
{
    int i, j, rows = 5;

    // Loop through each row
    for(i = 1; i <= rows; i++)
    {
        // Loop through each column
        for(j = 1; j <= i; j++)
        {
            printf("*"); // Print asterisk
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}