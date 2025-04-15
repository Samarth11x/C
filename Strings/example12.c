#include <stdio.h>

void checkchar(char str[], char ch);

int main(){
    char str[] = "Samarth";
    char ch = 'b';
    checkchar(str, 'b');

}

void checkchar(char str[], char ch){
    for (int i=0 ; str[i] != '\0' ; i++){
        if(str[i] == ch){
            printf("Character is present! :)");
            return ;
        }
    }  
    printf("Character is NOT present! :(");
}