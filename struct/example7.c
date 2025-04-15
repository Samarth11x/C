#include<stdio.h>

int main(){
    int n, m;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    printf("Enter the number of columns : ");
    scanf("%d", &m);
    int arr[n][m];
    int *ptr = &arr[n][m];
 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Enter %d row and %d column element : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        printf(" %d \t", arr[i][j]);
    }
    printf("\n");
}

    printf("Array element on row 1 column 2 : %d", *ptr[n][m]);
    return 0;


}