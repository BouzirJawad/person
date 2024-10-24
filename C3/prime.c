#include <stdio.h>

int main(){
    int x;

    printf("what's ur number ?");
    scanf("%d", &x);
 
    int check = 0;
    for  (int i=2; i<x; i++) 
    {
        if(x%i == 0){
                printf("it's not a prime");
                check = 1;
                break;
        }
    }
    if (check ==  ){
            printf("it's prime");

    }


}