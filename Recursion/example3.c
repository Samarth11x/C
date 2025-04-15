#include<stdio.h>

int fact(int n);

int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    printf(" factorial is : %d", fact(n));
    return 0;
}

int fact(int n){
    if(n == 1){
        return 1;
    }
    int factN_1 = fact(n-1);
    int factN = factN_1 * n;
}