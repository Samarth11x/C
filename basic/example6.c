#include<stdio.h>
#include<math.h>
// weather its 2 digit number
// if a number is greater than 9 & less than 100 -> true

int main(){
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);
    return 0;
}