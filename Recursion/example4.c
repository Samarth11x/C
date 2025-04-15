#include<stdio.h>

float temp(float celsius);

int main(){
    int celsius;
    printf("Enter temp in celsius : ");
    scanf("%d", &celsius);

    printf("Temp in Far is : %f", temp(celsius));
    return 0;
}

float temp(float celsius){
    float far = celsius * 0.18 + 32;
    return far;
}