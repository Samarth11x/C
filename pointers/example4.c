#include<stdio.h>

void square(int n);
void _square(int* n);


int main() {
    int number = 11;

    square(number);
    printf("Number =%d\n", number);

    _square(&number);
    printf("Number = %d\n", number);
    return 0;

}
// call by value
void square(int n) {
    n = n * n;
    printf("square  = %d\n", n);
    return;
}

// call by reference(pointers)
void _square(int* n) {
    *n = (*n) * (*n);
    printf("square =%d\n", *n);
    return ;
}