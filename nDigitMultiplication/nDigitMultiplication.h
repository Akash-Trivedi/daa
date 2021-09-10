#include<iostream>
#include<math.h>

using namespace std;

int countLength(int num1){
    int count=0;
    while(num1>0){
        num1/=10;
        count++;
    }return count;
}

void split(int num1, int num2){
    int length=countLength(num1);
    int part1, part2, x=(pow(10, length/2));
    part2=num1%(x);
    part1= (num1-part2)/(x);
    cout<<part1<<"-"<<part2<<"\n";
}

int mutliply(int num1, int num2){
    split(12, 34);
    return 0;
}