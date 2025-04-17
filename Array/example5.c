#include<stdio.h>

int count_odd(int numbers[], int n);

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Odd numbers = %d", count_odd(numbers, 10));

    return 0;
}

int count_odd(int numbers[], int n){
    int count = 0;
    for(int i=0; i<=n; i++) {
        if(numbers[i] % 2 != 0){
            count++;
        }
        return count;
    }
}