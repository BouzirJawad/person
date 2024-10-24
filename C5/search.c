#include <stdio.h>

int main(){
    int numbers[8], check, found = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("enter number %d :", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("search a number !");
    scanf("%d", &check);

    for (int i = 0; i < 8; i++)
    {
        if (numbers[i] == check){
            found = 1;
            printf("ur number is present at position %d \n", i+1);
            
        }
    }
    
    if(!found){
        printf("ur number is not present");
    }
    
    

}