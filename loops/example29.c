#include<stdio.h>
// star pattern B
int main() {
    for(int i=1 ; i<=7 ; i++){
        for(int j=1 ; j<=7 ; j++){
            if( j==1 || i==1 && j<=6 || i==4 && j<=6 || i==7 && j<=6 || j==7 && i>1 && i<4 ||j==7 && i>4 && i<7){
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