 #include<stdio.h>

 int main(){
    int age = 19;
    int *ptr = &age;

//  printing value stored in ptr
    printf("%d\n", age);
    printf("%d\n", *ptr);
    


    return 0;
 }