#include<stdio.h>
// Week Days (1-7) using *SWITCH*
int main(){
    int Month;
    printf("enter a Month(1-12) : ");
    scanf("%d", &Month);

    switch (Month) {
        case 1 : printf("January \n");
                break;
        case 2 : printf("February \n");
                break;
        case 3 : printf("March \n");
                break;
        case 4 : printf("April \n");
                break;
        case 5 : printf("May \n");
                break;
        case 6 : printf("June \n");
                break;
        case 7 : printf("July \n");
                break;
        case 8 : printf("August \n");
                break;
        case 9 : printf("September \n");
                break;
        case 10 : printf("October \n");
                break;
        case 11 : printf("November \n");
                break;
        case 12 : printf("December \n");
                break;
        default :printf("NOT A VALID Month !! \n");
    }


    return 0;
}