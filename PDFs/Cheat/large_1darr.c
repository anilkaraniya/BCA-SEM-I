#include <stdio.h>    
     
void main() {        
int arr[5]; 

printf("Enter 5 integers: ");

for(int i = 0; i < 5; ++i) {
scanf("%d", &arr[i]);
}
 
int length = sizeof(arr)/sizeof(arr[0]);
int max = arr[0];    
   
for (int i = 0; i < length; i++) {       
if(arr[i] > max)    
   max = arr[i];    
}      
printf("Largest element present in given array: %d\n", max);   
} 
