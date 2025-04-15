#include<stdio.h>
#include<string.h>

struct address{
    char name;
    int houseNo;
    char city;
    char state;
};

void printdetails(struct address add);

int main(){
    struct address adds[4];

    printf("Enter the details \n");
    printf("Name : ");
    scanf("%s", adds[0]);
    printf("House No. : ");
    scanf("%d", &adds[0]);
    printf("city : ");
    scanf("%s", adds[0]);
    printf("state : ");
    scanf("%s", adds[0]);

    printf("Enter the details \n");
    printf("Name : ");
    scanf("%s", adds[1]);
    printf("House No. : ");
    scanf("%d", &adds[1]);
    printf("city : ");
    scanf("%s", adds[1]);
    printf("state : ");
    scanf("%s", adds[1]);

    printf("Enter the details \n");
    printf("Name : ");
    scanf("%s", adds[2]);
    printf("House No. : ");
    scanf("%d", &adds[2]);
    printf("city : ");
    scanf("%s", adds[2]);
    printf("state : ");
    scanf("%s", adds[2]);

    printf("Enter the details \n");
    printf("Name : ");
    scanf("%s", adds[3]);
    printf("House No. : ");
    scanf("%d", &adds[3]);
    printf("city : ");
    scanf("%s", adds[3]);
    printf("state : ");
    scanf("%s", adds[3]);

    printdetails(adds[0]);
    printdetails(adds[1]);
    printdetails(adds[2]);
    printdetails(adds[3]);
    
  return 0;
}

void printdetails(struct address add){
    printf("Details are :%s, %d, %s, %s\n", add.name, add.houseNo, add.city, add.state);
    return ;
}