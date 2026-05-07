//Swap the values of two variables without using a temporary third variable.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("Value after swapping : \n a = %d \t b = %d ",a,b);
    return 0;
}