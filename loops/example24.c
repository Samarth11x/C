#include<stdio.h>
// star pattern of inverted pyramid
int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    for(int i=n ; i>=1 ; i--){
        for(int j=1 ; j<=i ; j++){
        printf("*");
    }

    printf("\n");
    }

    return 0;
}