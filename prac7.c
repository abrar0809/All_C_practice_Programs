//value swapping 

#include <stdio.h>
int main(){
int a,b,c;
printf("Enter the value of a =");
scanf("%d",&a);
printf("Enter the value of b =");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("Values are swapped\na = %d\tb=%d",a,b);
return 0;
}