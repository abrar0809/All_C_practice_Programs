//Write a program that takes an integer representing a number of seconds and converts it into hours, minutes, and seconds.

#include<stdio.h>
int main(){
    int hour,minute,second;
    printf("Enter the seconds = ");
    scanf("%d",&second);
    minute=(second/60)%60;
    hour=(second/60)/60;
    second=(second%60);
    printf("%d hours %d minutes %d seconds",hour,minute,second);
    return 0;
}