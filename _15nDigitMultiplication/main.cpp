#include<iostream>
#include "nDigitMultiplication.h"
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the first number:";cin>>num1;
    cout<<"Enter the second number:";cin>>num2;
    cout<<multiply(num1, num2)<<"\n";
    return 0;
}