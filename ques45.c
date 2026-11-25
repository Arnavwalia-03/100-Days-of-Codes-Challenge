/*Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/
#include<stdio.h>
int main()
{
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for(i = 1; i <= n; i++)
    {
        sum += (float)(2 * i) / (4 * i - 1); // Add the term to the sum
    }

    printf("Sum of the series is: %.2f\n", sum);
    return 0;
}