#include <stdio.h>

float addition(float x, float y){
    return x+y;
}

float subtraction(float x, float y){
    return x-y;
}

float multiplication(float x, float y){
    return x*y;
}

float division(float x, float y){
    while (y == 0)
    {
        printf("error, u can't devide by 0!");
        scanf("%f", &y);
    }
    
    return x/y;
}

float main(){
    float a, b, result;
    char operator;
    int check = 1;
    

    printf("what's ur numbers ?\n"); //asking for the numbers.
    
    printf("a : ");
    scanf("%f", &a);

    printf("b : ");
    scanf("%f", &b);
   

//do{
    //if (check == 1){
        printf("what's ur operator ? (+ - / *)"); //asking for the operator.
    //}

    scanf("%s", &operator);

    switch (operator)
    {
    case '+':
        result = addition(a,b);
        printf("the result is %0.2f", result);
        break;

    case '-':
        result = subtraction(a,b);
        printf("the result is %0.2f", result);
        //check = 0;
        break;

    case '/':
        result = division(a,b);
        printf("the result is %0.2f", result);
        //check = 0;
        break;

    case '*':
        result = multiplication(a,b);
        printf("the result is %0.2f", result);
        //check = 0;
        break;
    
    default:
        printf("error, please choose a valid operator !\n");
        //check=1;
        break;
    }
    //} while (check == 1);
    
}




