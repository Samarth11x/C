#include <stdio.h>
#include <string.h>

int main(){
    char firststr[100] = "Hello ";
    char secondStr[10] = "world";
    strcat(firststr, secondStr);
    puts(firststr);
    return 0;
}