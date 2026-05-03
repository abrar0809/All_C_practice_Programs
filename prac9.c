//size of datatypes

#include <stdio.h>
int main(){

printf("The size of different data :\nInteger = %zu bytes \tFloat = %zu bytes\n\nCharacter = %zu bytes\tDouble = %zu bytes",sizeof(int),sizeof(float),sizeof(char),sizeof(double));
return 0;
}