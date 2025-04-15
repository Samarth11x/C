#include<stdio.h>
#include<math.h>
// program to print {+ve / -ve} (even /odd) numbers

int main(){
    int number;
    printf("enter a number : ");
    scanf("%d", &number);
    printf("%d \n", number);

    if(number >= 0){

        printf("positive \n");

        if(number % 2 == 0){
            printf("even \n");

        } 
        else{
            printf("odd \n");
        }  
    } else {
        printf("negative \n");

        if(number % 2 == 0){
            printf("even \n");

        } 
        else{
            printf("odd \n");
        }  
    }
    
    return 0;
}