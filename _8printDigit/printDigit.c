/*
*   8. WAP to get a number from the user and print its digits.
*/
#include<stdio.h>
#include<math.h>
double countLength(int num1){
    double count=0.0;
    while(num1>0){
        num1/=10;//divide by zero error is possible
        count++;
    }return count;
}


int main(){
    int input=0;
    double temp;
    printf("Enter the digit: ");
    scanf("%d", &input);
    temp=input;
    while(temp>0){
        printf("%f", temp/(pow(10.0, countLength(temp))));
    }
}