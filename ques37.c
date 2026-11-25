/*Write a program to find the LCM of two numbers.*/
#include<stdio.h>
int main()
{
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    int gcd = 1;
    for(int i = 1; i <= (num1 < num2 ? num1 : num2); i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i; // Update GCD if both numbers are divisible by i
        }
    }

    lcm = (num1 * num2) / gcd;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}