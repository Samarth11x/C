#include<stdio.h>
#include<math.h>

int circleArea(int rad);
int squareArea(int side);
int rectangleArea(int a, int b);

int main(){
    int side;
    printf("Enter side : ");
    scanf("%d", &side);
   
   squareArea(side);
   return 0;
}

int circleArea(int rad){
    return 3.14* rad * rad ;
}

int squareArea(int side){
    return side*side;
}

int rectangleArea(int a, int b){
    return a * b;
}