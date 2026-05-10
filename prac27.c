//check the triangle is Right-Angled Triangle,Equilateral, Isosceles, or Scalene.

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the first side = ");
    scanf("%d",&a);
    printf("Enter the second side = ");
    scanf("%d",&b);
    printf("Enter the third side = ");
    scanf("%d",&c);
    if(a==b && a==c && b==c){
        printf("This triangle is an Equilateral triangle. \n");
    }
    else if(a==b && a!=c || b==c && b!=a || a==c && a!=b){
        printf("This triangle is an Isosceles triangle. \n");
    }
    else if(a!=b && a!=c && b!=c){
        printf("This triangle is an Scalene triangle. \n");
    }
    if(pow(a,2)+pow(b,2)==pow(c,2) || pow(b,2)+pow(c,2)==pow(a,2) || pow(c,2)+pow(a,2)==pow(b,2)){
        printf("This is also Right-Angled Triangle. \n");
    }
    return 0;
}