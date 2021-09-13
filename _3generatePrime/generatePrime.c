/*
* 3. For a given value of n, generate
* prime numbers <= n. (more than one algorithms are possible.)
*/
#include<stdio.h>

/*basic logic*/
void prime(int limit){
 for(int i=0; i<=limit; i++){
  for(int j=2; j<limit; j++){
   if(i%j==0)
    printf("%d",i);
  }
 }
}



int main(void){
 int limit=0;
 printf("Enter the limit: ");
 scanf("%d", &limit);
 prime(limit);
 return 0;
}
