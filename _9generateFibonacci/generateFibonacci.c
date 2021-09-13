/*
*   9. WAP to generate a Fibonacci series upto n terms.
*   Iterative and Recursive programs are available.
*/
#include<stdio.h>

int main(){
    int limit=0;
    double temp;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (int i = 1, a=0; i < limit; i+=a){
        printf("%d", a);
    }
    
}