//Write a program to convert Fahrenheit to Celsius.

#include<stdio.h>
int main(){
    float temp,c;
    printf("Enter the temprature in Fahrenheit = ");
    scanf("%f",&temp);
    c=(temp-32)*5/9;
    printf("Temprature in fahrenheit = %.2f F \nConverted into Celsius = %.2f C",temp,c);
    return 0;
}