#include <stdio.h>

int main(){
    int numbers[7];

    for (int i = 0; i < 7; i++)
    {
        printf("number %d :", i+1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++){
            if (numbers[j]>numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
            
        }
        
    }
    
    
        printf("the smallest number is %d\n", numbers[0]);
        printf("the smallest number is %d", numbers[7]);
    
    
    

}