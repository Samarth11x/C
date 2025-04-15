#include<stdio.h>

void printHW(int n);

int main(){
    int n;
    printf("Enter Value of n : ");
    scanf("%d", &n);

    printHW(n);
    return 0;
}

// Recursive Function
void printHW(int n){
 if(n ==0 ){
    return;
 }
    printf("Hello sam!\n");
    printHW(n-1);
}