#include<stdio.h>

void main(){
int a , b ;
printf("Enter two numbers:- ");
scanf("%d %d",&a,&b);
if ( a && b ) {
  printf("%d && %d is %d\n",a,b,a&&b );
} 
if ( !(a && b) ) {
  printf("!(%d && %d) is %d\n",a,b,!(a&&b) );
}
if ( a || b ) {
  printf("%d || %d is %d\n",a,b,a||b );
} 

}
