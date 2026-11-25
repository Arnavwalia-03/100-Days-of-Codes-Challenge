/*Write a program to check if a number is an Armstrong number.*/
#include<stdio.h>
int main()
{
    int n, original, remainder, result = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    // Count the number of digits
    while (original != 0)
    {
        original /= 10;
        digits++;
    }

    original = n;

    // Calculate the sum of the cubes of its digits
    while (original != 0)
    {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == n)
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}