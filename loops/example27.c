#include<stdio.h>
// function

void Hello();
void Bonjour();

int main(){
    char ch;
    printf("Enter i if Indian / Enter f if France : ");
    scanf("%c", &ch);

    if(ch == 'i'){
    Hello();
    }

    else{
    Bonjour();
    }

    return 0;
}

void Hello() {
    printf("namaste\n");
}

 void Bonjour() {
    printf("Hello");
 }