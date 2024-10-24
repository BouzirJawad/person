#include <stdio.h>

int main(){
    int numbers[10], sum = 0, avr;

    for (int i = 0; i < 10; i++)
    {
        printf("enter numbers %d :", i+1);
        scanf("%d", &numbers[i]);

        sum += numbers[i];
    }
    avr = sum / 10;
    
    printf("the sum of ur numbers is %d\n", sum);
    printf("the avr of ur numbers is %d", avr);
}