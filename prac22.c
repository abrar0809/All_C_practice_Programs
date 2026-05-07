//Calculate both Simple Interest and Compound Interest for a given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main(){
    int principal,time,sim_interest,com_interest,amount;
    float rate;
    printf("Enter the Principal = ");
    scanf("%d",&principal);
    printf("Enter the Rate = ");
    scanf("%f",&rate);
    printf("Enter the Time = ");
    scanf("%d",&time);
    sim_interest=(principal*rate*time)/100;
    amount=principal*pow((1+rate/100),time);
    com_interest=amount-principal;
    printf("The simple interest is = %d\tThe compound interest is = %d\nTotal amount = %d\t\tTotal amount = %d"
        ,sim_interest,com_interest,(principal+sim_interest),(principal+com_interest));
    return 0;
}