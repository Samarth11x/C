#include<stdio.h>

int percentage(int s, int m, int k);

int main(){
    int m, s, k;
    printf("Enter math marks : ");
    scanf("%d", &m);
    printf("Enter science marks : ");
    scanf("%d", &s);
    printf("Enter kannada marks : ");
    scanf("%d", &k);

    printf("Total marks : %d\n", m+k+s);
    printf("Percentage : %d\n", percentage(m,s,k));

    return 0;
}

int percentage(int m, int s, int k){
return((m + s + k)/3);
}