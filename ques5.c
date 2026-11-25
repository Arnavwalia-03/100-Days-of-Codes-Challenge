//to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    float c,f;
    printf("enter temperature in celcius :",c);
    scanf("%f",&c);
    f = (c*1.8)+32;
    printf("temperature in farenheit :%.2f\n",f);
    return(0);

}

