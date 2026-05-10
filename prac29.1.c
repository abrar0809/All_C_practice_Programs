/*Calculate the total electricity bill based on units consumed using a "slab" or "tiered" rate system:
First 50 units: $0.50/unit
Next 100 units (51-150): $0.75/unit
Next 100 units (151-250): $1.20/unit
Above 250 units: $1.50/unit
The Penalty: An additional 20% surcharge is added to the entire bill if units exceed 250.*/

#include<stdio.h>
int main(){
    float unit,bill=0;
    printf("Enter the units used = ");
    scanf("%f",&unit);
    if(unit<=50){
        bill=unit*0.50;
    }
    else if(unit<=150){
        bill=50*0.50+(unit-50)*0.75;
    }
    else if(unit<=250){
        bill=50*0.50+100*0.75+(unit-150)*1.20;
    }
    else if(unit>250){
        bill=(50*0.50+100*0.75+100*1.20+(unit-250)*1.50)*1.20;
    }else{
        printf("Please enter valid unit !!!");
    }
    printf("Your Final electricity bill = $%.2f",bill);
    return 0;
}