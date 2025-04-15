#include<stdio.h>
// Continue Statement example
int main(){
    for(int i=5 ; i<=50 ; i++){
        if(i % 2 == 0) { //skip even
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}