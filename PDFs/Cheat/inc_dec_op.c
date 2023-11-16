#include <stdio.h>

void main() {
    
int n1 , n2, n3, n4 ;
printf("Enter a numbers:- ");
scanf("%d",&n1);
n2 = n3 = n4 = n1;
printf("Post-increment : %d\n", n1++);
printf("Pre-increment : %d\n", ++n2);
printf("---\n");
printf("Post decrement : %d\n", n3--);
printf("Pre-Decrement : %d\n", --n4);

}
