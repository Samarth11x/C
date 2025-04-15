#include<stdio.h>
// example for marks and grade using if/else & ternary operator

int main(){
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);
    
// Using Ternary operator
     marks >= 35 ? printf("pass \n C") : printf("Fail \n BETTER LUCK NEXT TIME");

// Using if/else-if
    if( marks > 90){
        printf("A++ \n");
        printf("Congratulations on your Success\n BEST OF LUCK!!");
    }
    else if( marks <= 90 && marks > 80 ){
        printf("A+ \n");
        printf("Congratulations on your Success\n BEST OF LUCK!!");
    }
    else if( marks <= 80 && marks > 70){
        printf("A \n");
        printf("Congratulations on your Success\n BEST OF LUCK!!");
    }
    else if( marks <= 70 && marks > 60){
        printf("B+ \n");
        printf("Congratulations on your Success\n BEST OF LUCK!!");
    }
    else if( marks <= 60 && marks > 50){
        printf("B \n");
        printf("Congratulations on your Success\n BEST OF LUCK!!");
    }

    return 0;
}