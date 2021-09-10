#include<iostream>
#include<math.h>

using namespace std;
int multiply(int num1, int num2);

int countLength(int num1){
    int count=0;
    while(num1>0){
        num1/=10;//divide by zero error is possible
        count++;
    }return count;
}

int split(int num1, int num2){
    int length=countLength(num1);
    int part1, part2, part3, part4, x=(pow(10, length/2));
    part2=num1%(x); part1= (num1-part2)/(x);
    part4=num2%(x); part3= (num2-part4)/(x);
    return (
        multiply(part1, part3)*(pow(10, length))+
    (multiply(part1, part4) + multiply(part2, part3))*pow(10, length/2) + 
    multiply(part2, part4)
    );
}

int multiply(int num1, int num2){
    if(countLength(num1)==1 && countLength(num2)==1){
        return num1*num2;
    } else{
        return split(num1, num2);
    }
    return 0;
}