#include<stdio.h>

void main() {
    
int n1 , n2, placeH;
printf("Enter two numbers:- ");
scanf("%d %d",&n1,&n2);
placeH = n1;
printf("n1 = %d is %d\n", n1, n1 = n1);
printf("%d += %d is %d\n", placeH,n2,n1+=n2);
n1 = placeH;
printf("%d -= %d is %d\n", placeH,n2,n1-=n2);
n1 = placeH;
printf("%d *= %d is %d\n", placeH,n2,n1*=n2);
n1 = placeH;
printf("%d /= %d is %d\n", placeH,n2,n1/=n2);
n1 = placeH;
printf("%d %= %d is %d\n", placeH,n2,n1%=n2);
n1 = placeH;
}
