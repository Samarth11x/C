#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int regNo;
};

int main(){
    struct student s1;
    s1.regNo = 140;
    strcpy(s1.name, "Samarth");
    printf("Student Name : %s\n", s1.name);
    printf("Reg. No. : %d\n", s1.regNo);
    printf("\n");

    struct student s2;
    s2.regNo = 102;
    strcpy(s2.name, "Nitin");
    printf("Student Name : %s\n", s2.name);
    printf("Reg. no. : %d\n", s2.regNo);
    printf("\n");


    struct student s3;
    s3.regNo = 144;
    strcpy(s3.name, "Shivu");
    printf("Student Name : %s\n", s3.name);
    printf("Reg. No. : %d\n", s3.regNo);
    printf("\n");


    struct student s4;
    s4.regNo = 117;
    strcpy(s4.name, "Madan");
    printf("Student Name : %s\n", s4.name);
    printf("Reg. no. : %d\n", s4.regNo);
    printf("\n");


    return 0;
}