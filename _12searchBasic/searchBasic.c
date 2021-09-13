/*
*12. WAP to search an element from the given unsorted array.
*/
#include<stdio.h>

int main(){
    int list[5];
    int counter =0, search=0;;
    printf("program starting...\n");
    printf("program started...\n");

    while(counter<5){
        printf("enter the value: ");
        scanf("%d", &list[counter]);
        counter++;
    }

    printf("Enter the element you want ti search: ");
    scanf("%d", &search);

    for (int i = 0; i < sizeof(list)/sizeof(int); i++)
    {
        if(search==list[i]){ printf("\nelement found");return 0;}
    }
    printf("\nelement not found\n");
    
}