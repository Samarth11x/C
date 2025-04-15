#include<stdio.h>
#include<math.h>
//program to check even or odd

int main(){
    //even -> 1
    //odd  -> 0
    int x ;
    printf(" enter a number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0 );
    return 0;
}