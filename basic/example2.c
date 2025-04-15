#include<stdio.h>
//area of circle
int main(){
    float pi = 3.14;
    printf("pi is :%f", pi);

    float radius;
    printf("enter radius : ");
    scanf("%f", &radius);

    printf("radius of a circle is :%f", pi * radius * radius );
    return 0;
}
