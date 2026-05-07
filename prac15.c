// Determine if a given year is a leap year. A year is a leap year if it is divisible by 4, but not by 100, unless it is also divisible by 400.

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year = ");
    scanf("%d",&year);
    year%4==0 || year%100==0 && year%400==0 ? printf("%d is a leap year ",year):printf("%d is a not leap year ",year);
    return 0;
}
