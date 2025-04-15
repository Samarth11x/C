#include<stdio.h>

int main(){
    int age = 19;
    int *ptr = &age;
     
    //  printing address
    printf("%p", &age);
    return 0;
}