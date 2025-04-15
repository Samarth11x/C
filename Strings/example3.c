#include<stdio.h>

void printName(char name[]);
int printLength(char name[]);

int main(){
    char name[100];
    printf("Enter your name : ");
    fgets(name, 100, stdin);
    puts(name);


    printf("Length of you name is %d",printLength(name));

    return 0;
}

void printName(char name[]){
    for(int i=0; name[i] != '\0'; i++ ){
        printf("%c", name[i]);
    }
    return ;
}

int printLength(char name[]){
    int count =0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count-1;
}