// Write program to check given number is Armstrong number or not.

#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("Enter number to check = ");
    scanf("%d",&number);
    if(number>=0 && number<=9){
        printf("It is an Armstrong number");
    }
    else if(number<0){
        printf("Enter positive number");
    }
    else if (number>=10 && number<=99){
            printf("It is not an Armstrong number");
    }
    else if(number>=100 && number<1000){
         if(pow((number/100),3)+pow(((number/10)%10),3)+pow((number%10),3)==number){
            printf("It is an Armstrong number");
        }else{
            printf("It is not an Armstrong number");
        }
    }
    else if(number>=1000 && number<=9999){
         if(pow((number/1000),4)+pow(((number/100)%10),4)+pow(((number/10)%10),4)+pow((number%10),4)==number){
            printf("It is an Armstrong number");
        }else{
            printf("It is not an Armstrong number");
        }
    }
    else if(number>=10000 && number<=99999){
         if(pow((number/10000),5)+pow(((number/1000)%10),5)+pow(((number/100)%10),5)+pow(((number/10)%10),5)+pow((number%10),5)==number){
            printf("It is an Armstrong number");
        }else{
            printf("It is not an Armstrong number");
        }
    } 
    else{
        printf("Enter the number 1 to 5 digits only !!!");
    }
    return 0;
}