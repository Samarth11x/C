#include<stdio.h>
#include<string.h>

struct student{
    int regNo;
    char name[10];
};

void printINFO(struct student s4);

int main(){
    struct student s4 ={144, "Shivu"};
    printINFO(s4);

    struct student *ptr;
    ptr = &s4;
    strcpy(s4.name, "Samarth");
    ptr->regNo = 140;
    printf("Student Name : %s\n", ptr->name);
    printf("Reg. No. : %d\n", ptr->regNo);
    printf("\n");


    struct student s2 = {102, "Nitin"};
    printf("Student Name : %s\n", s2.name);
    printf("Reg. No. : %d\n", s2.regNo);
    printf("\n");

    
    struct student BTIT[10] = {117, "Madan"};
    printf("Student Name : %s\n", BTIT[0].name);
    printf("Reg. No. : %d\n", BTIT[0].regNo);
    printf("\n");

    return 0;
}

void printINFO(struct student s4){

    printf("Student Information \n");
    printf("Student Name : %s\n", s4.name);
    printf("Reg. No. : %d\n", s4.regNo);
    printf("\n");
}