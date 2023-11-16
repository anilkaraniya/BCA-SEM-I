#include <stdio.h>


void main() {
    
int age;
printf(" Enter your current Age Here:- ");
scanf("%d",&age);

if(age <= 105) {
if (age < 65) {
if ( age < 18 ) {
printf("Considered as child \n");
} else {    
printf("Considered as Adult \n");
}
}else{
printf("Considered as Senior citizen \n");    
}    
}else {
printf("Your not Human!");
}

}
