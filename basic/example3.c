#include<stdio.h>
#include<math.h>
// write a program to check if a number is divisible by 2 or not(1\0)
int main() {
   int x;
   printf("enter a number : ");
   scanf("%d", &x);
   printf("%d", x % 2 == 0);
    return 0;
}