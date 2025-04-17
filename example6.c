#include<stdio.h>
// print matrix
int main(){
    int n, i, j;
    int matrix[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter the elements of matrix (row)%d & (column)%d :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        printf("%d\t", matrix[i][j]);
    }
      printf("\n");
    }
     return 0;
}