#include<stdio.h>
// function

void printHello(); //prototype
void printGoodbye();

int main() {
    printHello(); //function call
    printGoodbye();
    return 0;
}

// function definition
void printHello() {
    printf("Hello!\n");  
}

void printGoodbye(){
    printf("Goodbye :)\n");
}