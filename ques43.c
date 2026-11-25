/*Write a program to check if a number is a strong number.*/
#include<stdio.h>
int main()
{
    int num, original_num, sum = 0, digit, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original_num = num;

    // Calculate the sum of the factorial of digits
    while(num > 0)
    {
        digit = num % 10;
        factorial = 1;

        // Calculate factorial of the digit
        for(int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }

        sum += factorial; // Add factorial to sum
        num /= 10; // Remove the last digit
    }

    // Check if the number is a strong number
    if(sum == original_num)
    {
        printf("%d is a strong number.\n", original_num);
    }
    else
    {
        printf("%d is not a strong number.\n", original_num);
    }

    return 0;
}