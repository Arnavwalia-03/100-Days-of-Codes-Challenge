/*Write a program to find the product of odd digits of a number*/
#include<stdio.h>
int main()
{
    int n, product = 1, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Calculate the product of odd digits
    while(n != 0)
    {
        remainder = n % 10; // Get the last digit
        if(remainder % 2 != 0) // Check if the digit is odd
        {
            product *= remainder; // Multiply it to the product
        }
        n /= 10; // Remove the last digit
    }

    printf("Product of odd digits is: %d\n", product);
    return 0;
}