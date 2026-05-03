//celcius to fahrenheit 

#include <stdio.h>
int main(){
float temp;
printf("Enter the temperature in celcius=");
scanf("%f",&temp);
printf("Tempreture converted into celcius to fahrenheit =%f",(temp*9/5)+32);
return 0;
}