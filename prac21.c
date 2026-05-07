//Ask the user for a number. Check if the number is within the range [10, 100] and is also an even number.

#include<stdio.h>
int main(){
    int number;
    printf("Enter the even number between 10 to 100 = ");
    scanf("%d",&number);
    number>10 && number<100 && number%2==0?
    printf("Number is Valid"):printf("Number is Invalid");
    return 0;
}