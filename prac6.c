//calculate simple interest 

#include <stdio.h>
int main(){
int p,r,t;
printf("Enter Principal =");
scanf("%d",&p);
printf("Enter rate of interest =");
scanf("%d",&r);
printf("Enter time =");
scanf("%d",&t);
printf("The simple interest is = %d",(p*r*t)/100);
return 0;
}