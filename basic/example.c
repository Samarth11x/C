# include<stdio.h>
//simple calculator
int main(){
    int a, b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d",&b);

    printf("sum is : %d\n", a + b);
    printf("sum is : %d\n", a - b);
    printf("sum is : %d\n", a * b);
    printf("sum is : %d\n", a / b);
    return 0;
}