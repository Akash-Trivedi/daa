/*
* 1. Find square root of a number.
*/

#include<stdio.h>

/*
simple but inefficient logic
*/
int square(int input){
 int ans=0;
 for(int i=0; i<input; i++){
  if(i*i==input)
   return i;
 }
 return 0;
}

int main(void){
 int num=0, ans=0;
 printf("Input the number: ");
 scanf("%d", &num);
 ans= square(num);
 printf("Square root of %d is %d", num, ans);
 return 0;
}
