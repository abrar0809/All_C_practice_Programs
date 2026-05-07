//Calculate the roots of a quadratic equation $ax^2 + bx + c = 0$ using the discriminant formula.
//Formula: $D = b^2 - 4ac$

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,x;
    printf("Enter the value of a = ");
    scanf("%f",&a);
    printf("Enter the value of b = ");
    scanf("%f",&b);
    printf("Enter the value of c = ");
    scanf("%f",&c);
    d=(b*b)-(4*a*c);
    d<0?printf("Square Root is imaginary"):d==0;
    d==0?printf("Square Root is %f",(-b + sqrt(d)) / (2 * a)):d>0;
    d>0?printf("Square Root are %f\t%f",(-b + sqrt(d)) / (2 * a),(-b - sqrt(d)) / (2 * a)):d<0;
    return 0;
}