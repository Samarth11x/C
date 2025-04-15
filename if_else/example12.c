#include<stdio.h>
// program to print Upper Case or Lower Case Alphabet
int main(){
    char ch;
    printf("Enter Charater : ");
    scanf("%c", &ch);

    if(ch >= "A" && ch <= "Z"){
        printf("upper case \n");
    }
    else if(ch >= 'a' && ch <= 'z'){
            printf("lower case \n");
        } 
    else{
        printf("NOT AN ENGLISH ALPHABET");
    }
   return 0;
}
