#include<stdio.h>
#include<string.h>

void main() {
    
char str1[20], str2[20], place[20];
printf("Enter first String:- ");
gets(str1);
printf("Enter second String:- ");
gets(str2);

printf("Length of string %s = %zu \n", str1, strlen(str1));  
printf("Coping value %s to char place[20]\n", str1, strcpy(place, str1));
printf("Concatenation of strings %s and %s = %s \n", place, str2, strcat(str1, str2));
printf("Comparing %s and %s = %d\n", place, str2, strcmp(place, str2));
printf("Converting %s to Upper-case = %s \n", str1, strupr(str1)); 

}
