#include<stdio.h>
// example of if/else statement

int main(){
    int age;
    printf("enter your age : ");
    scanf("%d", &age);

    if(age > 18) {
        printf("adult \n");
        printf("you can vote \n");
    }

    else{
        printf("not adult \n");
    }
    printf("Thank You \n");
    return 0;
}
