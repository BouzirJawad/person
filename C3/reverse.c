#include <stdio.h>

int main(){
    int x, rev = 0, rem;

    printf("what's ur number ?");
    scanf("%d", &x);

    while (x != 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }

    printf("the reverse of %d is %d", x, rev);
    


}