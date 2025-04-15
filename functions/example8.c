#include<stdio.h>

void namaste();
void bonjour();

int main(){
    char ch ;
    printf("Enter i if indian / f if french :");
    scanf("%c", &ch);

    if(ch == 'i'){
        namaste();
    }
    else if(ch == 'f'){
        bonjour();
    }
    else{
        printf("Hello\n");
    }
    return 0;
}

void namaste(){
    printf("Namaste\n");
    return;
}

void bonjour(){
    printf("Bonjour\n");
}