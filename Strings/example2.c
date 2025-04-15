#include<stdio.h>

int main(){

    char name[100];

    printf("Enter Your sweet name : ");
    fgets(name, 100, stdin);
    printf("Hi! ");
    puts(name);
    return 0;

}