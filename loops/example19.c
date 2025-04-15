#include<stdio.h>
// Program to print FACTORIAL OF NUMBERS
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int fact = 1 ;
    for(int i=1 ; i<=n ; i++){
        fact = fact * i;
    }

    printf("Factorial is %d", fact);
    
    return 0;
}
