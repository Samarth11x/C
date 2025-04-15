#include<stdio.h>

int main(){
   int age = 19;
   int* ptr = &age;
   int _age = 20;
   int* _ptr = &_age;

   printf("difference = %u\n", ptr - _ptr);
   _ptr =&age;
   printf("comparision = %u\n", ptr == _ptr);
   return 0;
}