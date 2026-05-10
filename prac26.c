//Design a program for an ATM that only dispenses $500, $200, and $100 notes.

#include<stdio.h>
int main(){
    int amount;
    printf("Enter the amount for withdraw = ");
    scanf("%d",&amount);
    if(amount%100==0){
        printf("Your withdrawal\n");
        if(amount/500==0){
            printf("");
        }else{
            printf("%dx500",amount/500);
        }
    }
    if(amount%100==0){
        if((amount%500)/200==0){
            printf("");
        }else{
            printf("  %dx200",(amount%500)/200);
        }
    }
    if(amount%100==0){
        if(((amount%500)%200)/100==0){
            printf("");
        }else{
            printf("  %dx100",((amount%500)%200)/100);
        }
    }
    else {
        printf("Amount is Invalid.");
    }
    return 0;
}