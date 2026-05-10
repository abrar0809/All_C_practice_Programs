// Write program to check if the given number is a natural number .

#include<stdio.h>
int main(){
    int number;
    printf("Enter the number to check it is natural or not = ");
    scanf("%d",&number);
    if(number>=1){
        printf("Yes, it a natural number.");
    } else{
        printf("No, it is not a natural number.");
    }
    return 0;
}