#include<stdio.h>
// star pattern
int main(){
    int l, w;
    printf("enter value of l : ");
    scanf("%d", &l);

    printf("Enter value of w : ");
    scanf("%d", &w);

    for(int i=1 ; i<=l ; i++){
        for(int j=1 ; j<=w ; j++){
            
            if(i==1 || i==l || j==1 || j==w ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}