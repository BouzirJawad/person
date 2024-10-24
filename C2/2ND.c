#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;
    float delta;
    int sol1,sol2,sol3;


    printf("this is a solver for the equation ax^2 + bx + c = 0\n");
    printf("what's ur a ?");
    scanf("%d", &a);

    printf("what's ur b ?");
    scanf("%d", &b);

    printf("what's ur c ?");
    scanf("%d", &c);

    delta =(b*b) - (4 * a * c);
    
    if (delta > 0){
        sol1 = (-b - sqrt(delta))/ (2*a);
        sol2= (-b + sqrt(delta))/ (2*a);
        printf("ur equation has 2 solutions \n");
        printf("x1= %d et x2= %d ", sol1, sol2); 
    }

    else 
    if(delta == 0){
        sol3 = -b / (2 * a);
        printf("the solution is\n");
        printf("x= %d", sol3);
    }

    else{
        printf("this equation has no solution");
    }


    return 0;
}