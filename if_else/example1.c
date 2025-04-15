#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a, b, ch;
    float ans;

    printf("Enter value of a : ");
    scanf("%d", &a);

    printf("Enter value of b : ");
    scanf("%d", &b);

    printf("1.Add[+].\n2.substract[-].\n3.Multiply[*].\n4.Divide[/].\n5.Modulo[%]\n6.square.\n7.Power\n");

    printf("Enter a function no. : ");
    scanf("%d", &ch);

    switch(ch){
        case 1 : ans = (a+b);
                  break;
        case 2 : ans = (a-b);
                  break;
        case 3 : ans = (a*b);
                  break;
        case 4 : ans = (a/b);
                  break;
        case 5 : ans = (a%b);
                  break;
        case 6 : ans = (a*a);
                 break;
        case 7 : ans = pow(a,b);
                 break;
        default : printf("Undefined Function !");
    }
    printf("Answer is %f\n", ans);
    printf("Thank You");
     return 0;
}