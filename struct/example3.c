#include<stdio.h>
#include<string.h>

struct student{
    int regNo ;
    char name[100];
};

int main(){
    struct student CSE[10];
    CSE[0].regNo = 140;
    strcpy(CSE[0].name, "Samarth");

    printf("Student name : %s\n", CSE[0].name);
    printf("Reg. No. : 24BECS%d\n", CSE[0].regNo);

    struct student IT[10];
    IT[0].regNo = 117;
    strcpy(IT[0].name, "Madan");
    printf("Student name : %s\n", IT[0].name);
    printf("Reg. No. : 24BTIT%d\n", IT[0].regNo);

    struct student s1 = {102, "Nitin"};
    printf("Student Name : %s\n", s1.name);
    printf("Reg. No. :BECS%d\n", s1.regNo);

    // pointers 

    struct student *ptr;
    ptr = &s1;
    ptr->regNo = 144;
    printf("Student Name : %s\n", (*ptr).name);
    printf("Reg. No. :BECS%d\n", (*ptr).regNo);



    return 0;
}