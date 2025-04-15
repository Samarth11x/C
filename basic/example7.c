#include<stdio.h>
#include<math.h>
// greater value of the following

int main(){
    int a , b ,c ;
    printf("enter value of a : \n");
    printf("enter value of b : \n");
    printf("enter value of c : \n");
    scanf("%d\n", &a,b,c);
    printf("%d\n", a>b && a>c);
    printf("%d\n", b>a && b>c);
    printf("%d\n", c>a && c>b);
    return 0;
}