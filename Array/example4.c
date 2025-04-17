#include<stdio.h>

int main(){
    int marks[6];

    for(int i=0; i<=6; i++){
        printf("Enter the marks of %dst subject ", i );
        scanf("%d", &marks[i]);
    }

    for(int i=0; i<=6; i++){
        printf(" the marks of %dst subject is = %d\n", i, marks[i] );
        }

    return 0;

}