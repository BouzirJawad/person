#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char character;

   printf("what's ur character:");
   scanf("%c", &character);

   if (character >= 'A' && character <= 'Z'){
       printf("ur character is uppercase");
   }

   else {
       printf("ur character is not uppercase");
   }

    return 0;
}
