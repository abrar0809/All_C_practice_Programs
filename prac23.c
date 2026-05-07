//Input a student's score (0-100). Use the conditional (ternary) operator ? : to print "Pass" if the score is 40 or above, and "Fail" otherwise.

#include<stdio.h>
int main(){
    int wad,wad_lab,c_lang,c_lang_lab,cf_omt,omt_lab,hin,eng,ops,anandam;
    double percentage,total;
    printf("\tENTER MARKS\t\n");
    printf("C_LANG_LAB =\t\t");
    scanf("%d/50",&c_lang_lab);
    printf("WAB_LAB =\t\t");
    scanf("%d/50",&wad_lab);
    printf("OMT_LAB =\t\t");
    scanf("%d/50",&omt_lab);
    printf("C_LANG =\t\t");
    scanf("%d/100",&c_lang);
    printf("WAD =\t\t\t");
    scanf("%d/100",&wad);
    printf("CF_OMT =\t\t");
    scanf("%d/100",&cf_omt);
    printf("ENGLISH =\t\t");
    scanf("%d/50",&eng);
    printf("HINDI =\t\t\t");
    scanf("%d/50",&hin);
    printf("OPS =\t\t\t");
    scanf("%d/50",&ops);
    printf("ANANDAM =\t\t");
    scanf("%d/50",&anandam);
    total=wad+wad_lab+c_lang+c_lang_lab+cf_omt+omt_lab+hin+eng+ops+anandam;
    percentage=(total/650)*100;
    printf("Total Marks =\t\t%.0lf\n",total);
    printf("Percentage =\t\t%.2lf\n",percentage);
    percentage>=80 && percentage<=100?printf("Grade\t\t'A'"):percentage>=60;
    percentage>=60 && percentage<=80?printf("Grade\t\t\t'B'"):percentage>=50;
    percentage>=50 && percentage<=60?printf("Grade\t\t\t'C'"):percentage>=33;
    percentage>=33 && percentage<=50?printf("Grade\t\t\t'D'"):percentage<33;
    percentage<33 && percentage>=0?printf("\t\tFAIL"):percentage>=80;
    return 0;
}