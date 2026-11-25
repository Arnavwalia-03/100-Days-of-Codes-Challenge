/*Write a program to take a number as input and print its equivalent binary representation.*/
#include<stdio.h>
int main()
{
    int n, binary[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("Binary representation is: ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}