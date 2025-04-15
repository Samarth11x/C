#include<stdio.h>
#include<string.h>

int main(){
    char oldstring[] = "Samarth";
    char newstring[] = "Sam";
    strcpy(oldstring, newstring);
    puts(oldstring);
    return 0;
}