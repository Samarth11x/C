#include<stdio.h>

void swap(int a, int b);
void _swap(int* a, int* b);

int main(){
    int x = 3;
    int y = 5;

    swap(x, y);
    printf("x = %d & y = %d\n", x, y);  // x=3 & y=5

    _swap(&x, &y);
     printf("x = %d & y = %d\n", x, y); // x=5 & y=3

    return 0;
}

// call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n", a, b);
    return ;
}

// call by reference
void _swap(int* a, int* b) {
    int t =*a;
    *a = *b;
    *b = t;
    printf("a = %d & b = %d\n", *a, *b);
    return ;
}