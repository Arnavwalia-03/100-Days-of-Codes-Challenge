/*Write a program to swap the first and last digit of a number.*/
#include<stdio.h>
int main()
{
    int num, first_digit, last_digit, temp, swapped_num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Get the last digit
    last_digit = num % 10;
    
    // Get the first digit
    temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    first_digit = temp;
    
    // Swap the first and last digit
    swapped_num = (num - first_digit * (int)pow(10, (int)log10(num)) - last_digit) + last_digit * (int)pow(10, (int)log10(num)) + first_digit;
    
    printf("Number after swapping first and last digit: %d\n", swapped_num);
    
    return 0;
}