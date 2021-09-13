/*
* 10. WAP to find minimum and maximum number from the given
*   numbers using Divide and conquer approach.
*/
#include<stdio.h>

int main(){
    int list[5];
    int counter =0, search=0;
    int min, max;

    printf("program starting...\n");
    printf("program started...\n");

    while(counter<5){
        printf("enter the value: ");
        scanf("%d", &list[counter]);
        counter++;
    }
    min=max=list[0];

    for (int i = 0; i < sizeof(list)/sizeof(int); i++)
    {
        if(list[i]>max){
            max=list[i];
        }
        if(list[i]<min){
            min=list[i];
        }
    }

    printf("\nMax number -> %d\n", max);
    printf("\nMin number -> %d\n", min);
}