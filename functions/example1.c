#include<stdio.h>

int sum(int x, int y);

int main(){
   int a;
   printf("Enter value of a : ");
   scanf("%d", &a);
   int b;
   printf("Enter value of b : ");
   scanf("%d", &b);

   int s = sum(a, b);
   printf("sum is : %d\n", s);
    return 0;
}

int sum(int x, int y){
    return x+y;
}