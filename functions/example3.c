#include<stdio.h>

void calculate_price(float value, float gst);

int main(){
    float value;
    float gst;
    printf("Enter Value : ");
    scanf("%f", &value);

    printf("Enter gst : ");
    scanf("%f", &gst);
    printf("Pice is : %f\n", value);

    calculate_price(value, gst);
    

    return 0;
}

void calculate_price(float value, float gst){
    value = value + (gst*value);
    printf("Final price : %f", value);
    return;
}