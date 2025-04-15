#include<stdio.h>

int main(){
    int i =11;
    int *ptr = &i;
    int **pptr = &ptr;

// printing i value by using pointer to pointers
    printf("x = %d", **pptr);
    return 0;

}