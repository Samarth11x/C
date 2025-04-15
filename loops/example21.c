#include<stdio.h>
// program to print star pattern
int main(){
    int row, col;
    printf("Enter no. of rows : ");
    scanf("%d", &row);

    printf("Enter no. of column : ");
    scanf("%d", &col);

    for(int i=1 ; i<=row ; i++){
        for(int j=1 ; j<=col ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}