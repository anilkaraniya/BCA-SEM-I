#include <stdio.h>  
#include <string.h>  

void main() {  
char str[40];
int i, len, temp;  
printf ("Enter a string to be reversed: "); 
gets(str); 

len = strlen(str); 

for (i = 0; i < len/2; i++)  { 
temp = str[i];  
str[i] = str[len - i - 1];  
str[len - i - 1] = temp;  
}  


printf ("Reversed string: %s \n", str);  

}  
