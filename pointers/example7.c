#include<stdio.h>

int main(){
    int age = 19;
    int *ptr =&age;
    printf("%u\n", ptr);
    ptr++; //increment
    printf("increment :%u\n",ptr);
    return 0;
    ptr--; //decrement
    printf("decrement :%u\n",ptr);
}