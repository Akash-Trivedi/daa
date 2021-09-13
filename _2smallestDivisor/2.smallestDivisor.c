/*
* 2. Determine smallest divisor of an integer.
*/
#include<stdio.h>

/*
basic logic
best case: input=2
*/
int divisor(int input){
 for(int i=2; i<input; i++){
  if(input%i==0)
   return i;
 }
 return 0;
}

int main(void){
 int ans=0, input=0;
 printf("Enter the number: ");
 scanf("%d", &input);
 ans=divisor(input);
 printf("The samllest divisor for %d is %d", input, ans);
 return 0;
}
