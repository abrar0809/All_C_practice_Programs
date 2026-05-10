/*Calculate the total electricity bill based on units consumed using a "slab" or "tiered" rate system:
First 50 units: $0.50/unit
Next 100 units (51-150): $0.75/unit
Next 100 units (151-250): $1.20/unit
Above 250 units: $1.50/unit
The Penalty: An additional 20% surcharge is added to the entire bill if units exceed 250.*/

#include<stdio.h>
int main(){
    float unit,bill=0,bill1=0,bill2=0,bill3=0,bill4=0;
    printf("Enter the units used = ");
    scanf("%f",&unit);
    if(unit<=50){
        bill1=unit*0.50;
    }else{
        bill1=50*0.50;
    }
    if(unit>50){
        if(unit-50>=100){
            bill2=100*0.75;
        }else if(unit-50<=100){
            bill2=(unit-50)*0.75;
        }else{
            bill2=0;
        }
    }
    if(unit>150){
        if(unit-150>=100){
            bill3=100*1.20;
        }else if(unit-150<=100){
            bill3=(unit-150)*1.20;
        }else{
            bill3=0;
        }
    }
    if(unit>250){
        bill4=(unit-250)*1.50;
    }else{
        bill4=0;
    }
    bill=bill1+bill2+bill3+bill4;
    if(unit>250){
        bill = bill * 1.20;
        printf("Your Electricity bill = $%.2f",bill);
    }else{
        printf("Your Electricity bill = $%.2f",bill);
    }
    return 0;
}