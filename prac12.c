// check given character is digit or not
#include<stdio.h>
int main(){
char c;
printf("Enter the any word= ");
scanf("%c",&c);
printf("%d",c>='0'&& c<='9');
return 0;
}