//Accept three side lengths from the user. Use logical operators to determine if they can form a valid triangle (the sum of any two sides must be greater than the third side).

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a one side of triangle = ");
    scanf("%d",&a);
    printf("Enter a second side of triangle = ");
    scanf("%d",&b);
    printf("Enter a third side of triangle = ");
    scanf("%d",&c);
    (a+b)>c || (b+c)>a || (c+a)>b?
     printf("a = %d , b = %d , c = %d\nThese sides can form a valid triangle ",a,b,c):
     printf("a = %d , b = %d , c = %d\nThese sides cannot form a valid triangle",a,b,c);
    return 0;
}
