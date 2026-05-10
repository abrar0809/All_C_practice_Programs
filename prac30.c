/*Ask the user to enter a date in the format DD, MM, YYYY. You must determine if that date is valid.
The Logic:
Months 1, 3, 5, 7, 8, 10, 12 have 31 days.
Months 4, 6, 9, 11 have 30 days.
The Leap Year Trap: Month 2 (February) has 28 days, unless it is a leap year, in which case it has 29.*/

#include<stdio.h>
int main(){
    int date,month=0,year=0;
    printf("Enter date = ");
    scanf("%d",&date);
    if(date>31){
        printf("Your date is Invalid !!!\n");
    }
    if(date<=31){
    printf("Enter month = ");
    scanf("%d",&month);
    }if(month>12){
        printf("Your month is Invalid !!!\n");
    }if(month<=12 && month>0){
    printf("Enter year = ");
    scanf("%d",&year);
    }if(year<999 || year>9999){
        printf("Your year is Invalid !!!\n");
    }
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        if(date<=31){
            printf("Your date is Valid\n(DD,MM,YY)\n%d,%d,%d",date,month,year);
        }else{
            printf("Your date is Invalid !!!\n(DD,MM,YY)\n%d,%d,%d",date,month,year);
        }
    }
    else if(month==4 || month==6 || month==9 || month==11 ){
        if(date<=30){
            printf("Your date is Valid\n(DD,MM,YY)\n%d,%d,%d",date,month,year);
        }else{
            printf("Your date is Invalid !!!\n(DD,MM,YY)\n%d,%d,%d",date,month,year);
        }
    }
    else if(month==2){
        if((year%4==0 || year%100==0) && year%400==0){
            if(date<=29){
                printf("Your date is Valid\n(DD,MM,YY)\n%d,%d,%d",date,month,year);
            }else{
                printf("Your date is Invalid !!!\n(DD,MM,YY)\n%d,%d,%d",date,month,year);
            }
        }
        else if(date<=28){
            printf("Your date is Valid\n(DD,MM,YY)\n%d,%d,%d",date,month,year);
        }else{
            printf("Your date is Invalid !!!\n(DD,MM,YY)\n%d,%d,%d",date,month,year);
        }
    }
    return 0;
}