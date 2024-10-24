#include <stdio.h>
#include <stdlib.h>

int main(){
    int C;
    int F;
    printf("the temperature in F :");
    scanf("%f", &F);

    C = (F - 32) / 1.8;

    if (C < 0 ) {
        printf("it feels very cold");
    }
    else if (C >0 && C<=20){
         printf("it feels cold");
    }
    else if (C > 20 && C<=37){
    printf("it feels hot");
    }
    else {
    printf("if feels very hot");
    }
}
