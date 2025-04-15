#include<stdio.h>
void hello();
void greeting();
void goodbye();

int main(){
    hello();
    greeting();
    goodbye();
   return 0;
}

void hello(){
    printf("Hello sam!\n");
    return;
}
void greeting(){
    printf("Good Night!\n");
    return;
}
void goodbye(){
    printf("Good Bye SAM!");
    return;
}