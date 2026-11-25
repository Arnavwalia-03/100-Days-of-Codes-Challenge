/*Write a program to find the sum of digits of a number.*/
#include<stdio.h>
int main()
{
    int n, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Calculate the sum of digits
    while(n != 0)
    {
        remainder = n % 10; // Get the last digit
        sum += remainder;   // Add it to the sum
        n /= 10;            // Remove the last digit
    }

    printf("Sum of digits is: %d\n", sum);
    return 0;
}