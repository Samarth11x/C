#include<stdio.h>


typedef struct vector{
    int x;
    int y;
} vec ;

int calcVector(vec v1, vec v2, vec sum);

int main(){
    vec v1 ={5, 10};
    vec v2 ={2, 4};
    vec sum ={0};

    calcVector(v1, v2, sum);
}


int calcVector(vec v1, vec v2, vec sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of the vectors are : %dx + %dy", sum.x, sum.y);
}