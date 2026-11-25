/*Merge two arrays*/
#include<stdio.h>
int main(){
    int a[100],b[100],c[200],i,j,n1,n2;
    printf("Enter the size of first array: ");  
    scanf("%d", &n1);
    printf("Enter the elements of first array: ");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of second array: ");
    for(j=0;j<n2;j++)
     scanf("%d",&b[j]);
      for(i = 0; i < n1; i++) {
        c[i] = a[i];
    }
      for(j = 0; j < n2; j++) {
        c[n1 + j] = b[j];
    }
      printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}