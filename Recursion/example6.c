#include<stdio.h>

int fib(int n);

int main(){
    
    fib(6);
    return 0;
}   

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibN_1 = fib(n-1);
    int fibN_2 = fib(n-2);
    int fibN = fibN_1 + fibN_2;

     printf("Fibonacci of %d is = %d\n", n, fibN );

    return fibN;
}