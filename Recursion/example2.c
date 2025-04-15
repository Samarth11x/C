#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter Value of n : ");
    scanf("%d", &n);

    printf("sum is : %d", sum(n));
     
    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumN_1 = sum(n -1);
    int sumN = sumN_1 + n;
    return sumN;
}