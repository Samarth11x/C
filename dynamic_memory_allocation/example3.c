#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) calloc(5,sizeof(int));
    for (int i=0; i<5; i++){
        
        printf("%d \t", ptr[i]);
    }


   
    ptr = realloc(ptr, 2);

    for (int i=0; i<2; i++){
        printf("%d\t", ptr[i]);
    }

    free(ptr);

    return 0;


    }