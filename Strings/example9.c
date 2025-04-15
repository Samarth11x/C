#include <stdio.h>
#include<string.h>

void salting(char Pass[]);

int main (){
    char Pass[100];
    scanf("%s", Pass);
    printf("Your password is : ");
    salting(Pass);
    return 0;

}

void salting(char Pass[]){
    char salt[] = "xyz";
    char Newpass[200];

    strcpy(Newpass, Pass);
    strcat(Newpass, salt);
    puts(Newpass);
    return ;
}