 #include<stdio.h>
// Loop Break Statement Example
int main(){
    int n;
    do {
        printf("Enter a Number : ");
        scanf("%d", &n);
        printf("%d\n", n);
         
         if(n % 7 == 0) {
            break;
         }
         
    } while(1);

     printf("Thank You");
     
     return 0;
} 