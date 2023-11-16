#include <stdio.h>  
#include <string.h>  

void main() {  
char str[100];
printf ("Enter a string :- "); 
gets(str); 

char *ptr, *rev;

ptr = &str;

while (*ptr != '\0') {
++ptr;
}
--ptr;

for (rev = &str; ptr >= rev;) {
if (*ptr == *rev) {
--ptr;
rev++;
}
else
break;
}

if (rev > ptr)
printf("String is Palindrome");
else
printf("String is not a Palindrome");

}  
