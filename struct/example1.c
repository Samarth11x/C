#include<stdio.h>
#include<string.h>

struct student{
    
    int regNo ;
    float cgpa;
    char name[100];
   
};
 
int main(){
    struct student s1, s2;
    s1.regNo = 140;
    s1.cgpa = 9.0;

    strcpy(s1.name, "Samarth");
   // s2={"Krishna", 1234, 9.1};

    printf("Student Name : %s\n", s1.name);
    printf("Student regNo : %d\n", s1.regNo);
    printf("Student cgpa : %f\n", s1.cgpa); 

printf("%d",sizeof(s1));
    return 0;
}