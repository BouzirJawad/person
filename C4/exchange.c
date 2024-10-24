#include <stdio.h>

void exchange(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;   
}

int main(){
    int a, b;

    printf("what's ur a ?");
    scanf("%d", &a);

    printf("what's ur b ?");
    scanf("%d", &b);

    printf("initial values : a = %d, b = %d\n", a, b);

    exchange(&a,&b);

    printf("exchanged values : a = %d, b = %d", a, b);
}
