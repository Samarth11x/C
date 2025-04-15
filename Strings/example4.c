#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int length = strlen(name);
    fgets(name, 100, stdin);
    printf("Length of your name is : %d", strlen(name));

    return 0;
}
