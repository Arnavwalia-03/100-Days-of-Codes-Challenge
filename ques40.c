/*Write a program to find the 1’s complement of a binary number and print it*/
#include<stdio.h>
int main()
{
    int n, binary[32], i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    
    // Store the binary number in an array
    while(n > 0)
    {
        binary[i] = n % 10; // Get the last digit
        n /= 10;            // Remove the last digit
        i++;
    }

    printf("1's complement is: ");
    for(int j = i - 1; j >= 0; j--)
    {
        // Print the complement of each bit
        if(binary[j] == 0)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0;
}