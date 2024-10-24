#include <stdio.h>

int main(){
    int x, i;

    printf("what's ur number ?");
    scanf("%d", &x);
    
    i=1;
    while (i<=10)
    {
       printf("%d * %d = %d\n", x, i, x*i);
       i++;
    }
    
    
}