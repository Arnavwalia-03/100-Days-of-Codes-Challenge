/* to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */
#include <stdio.h>
int main(){
    int units,rates;
    printf("enter units used :");
    scanf("%d",&units);
if(units<=100){
    rates = units*5;
    printf("the bill for %d units is %d", units, rates);
}
else if ( units <=200){
    rates = (100*5)+(units-100)*7;
    printf("the bill for %d units is %d", units , rates);
}
else if( units <=300){
    rates = (100*5) + (100*7 ) + (units-200)*10;
    printf("the bill for %d units is %d", units,rates);
}
else {
    rates = (100*5)+(100*7)+(100*10)+(units-300)*12;
    printf("the bill for %d units is %d", units,rates);
}
return(0);
}
