#include<stdio.h>

void numbers(int arr[], int n);

int main(){
    int arr[6]={0,1,2,3,4,5};

    numbers(arr, 6);
    return 0;
  
}

void numbers(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
