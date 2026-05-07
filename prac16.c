//Take a 3-digit integer from the user and calculate the sum of its digits without using loops.

#include<stdio.h>
int main(){
    int number;
    printf("Enter three digit number =");
    scanf("%d",&number);
    printf("The sum of digits = %d",(number%10)+((number/10)%10)+((number/10)/10));
    return 0;
}