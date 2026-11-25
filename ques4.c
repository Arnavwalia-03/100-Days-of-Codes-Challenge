// to calculate the area and circumference of a circle
#include<stdio.h>
int main()
{
    int r;
    float area ,circ ;
    printf("enter radius :",r);
    scanf("%d",&r);
    area = 3.14*r*r;
    printf ("area is :%.2f\n",area);
    circ = 2*3.14*r;
    printf("circumfrance :%.2f\n",circ);
    return(0);

}