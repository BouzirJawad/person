#include <stdio.h>

int main(){
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter numbers %d :", i+1);
        scanf("%d", &numbers[i]);
    }

    for ( int i = 5 ; i > 0; i--)
    {
        printf("%d", numbers[i-1]);
    }
    
}