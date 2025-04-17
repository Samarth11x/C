#include<stdio.h>

int main(){
    float price[3];
    printf("Enter 1.Price : ");
    scanf("%f", &price[0]);

    printf("Enter 2.Price : ");
    scanf("%f", &price[1]);

    printf("Enter 3.Price : ");
    scanf("%f", &price[2]);    

    printf("Final price 1 : %f\n", price[0]+ (0.18*price[0]));
    printf("Final price 2 : %f\n", price[1]+ (0.18*price[1]));
    printf("Final price 3 : %f\n", price[2]+ (0.18*price[2]));

    printf("Total price : %f\n", price[0] + price[1] + price[2]);
    printf("Grand Total : %f\n",(price[0]+(0.18*price[0])) + (price[1]+(0.18*price[1])) + (price[2]+(0.18*price[2])));

    return 0;

}