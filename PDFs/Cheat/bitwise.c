#include<stdio.h>

void main() {
int n1 , n2 ;
printf("Enter two numbers:- ");
scanf("%d %d",&n1,&n2);
printf("%d & %d is %d\n",n1,n2, n1 & n2);
printf("%d | %d is %d\n",n1,n2, n1 | n2);
printf("%d ^ %d is %d\n",n1,n2, n1 ^ n2);
printf("%d >> %d is %d\n", n1,n2, n1 >> n2);
printf("%d << %d is %d\n", n1,n2, n1 << n2);
}
