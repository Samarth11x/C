#include<stdio.h>
// program to print table
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    for(int i=1 ; i<=10 ; i++){ 
        printf("%d\n", n*i);
    }

    printf("End");

    return 0;
 
}