#include <stdio.h>

int sum(int x, int y){
    return x+y;
}

int main(){
    int a, b;
    printf("what's ur numbers ?\n");

    printf("a:");
    scanf("%d", &a);

    printf("b:");
    scanf("%d", &b);

    int result = sum(a,b);

    printf("%d + %d = %d", a, b, result);
    
}