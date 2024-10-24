#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int op;

    printf("what's ur number ?");
    scanf("%d", &a);

    op = a % 2;

    if(op == 0){
        printf("your number is even");
    }
    else {
        printf("your number is odd");
    }

}