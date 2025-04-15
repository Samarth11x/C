#include<stdio.h>

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    //  For Loop
    for( int i=1 ; i<=n ; i++){
        printf("%d\n", i);
    }

    // for (while loop)
    // int = i;
    // while(i<=n){
    //  printf("%d\n", i);
    // i++;
    // }

    // // for DO WHILE loop
    // int i = 1;
    // do{
    //     printf("%d\n", i);
    //     i++;
    // }while(i<=n);

    return 0;
}