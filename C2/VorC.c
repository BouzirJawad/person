#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char letter;

printf("what's ur letter ?");
scanf("%c", &letter);

switch (letter){
case 'a':
case 'e':
case 'u':
case 'i':
case 'o':
    printf("ur letter is a vowel");
   break;
default:
    printf("ur letter is not a vowel");
    break;
}



}