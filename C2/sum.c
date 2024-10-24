#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int sum;

    printf("what's ur numbers ?");
    scanf("%d", &a);
    scanf("%d", &b);

    sum = a + b;

    if (a == b){
        sum = sum * 3;
        printf("%d", sum);
    }
    else {
        printf("%d", sum);
    }
}