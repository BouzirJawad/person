#include <stdio.h>
#include <stdbool.h>

bool isPrime(int x){
    
    if (x <= 1) return false;

    for (int i = 2; i < x; i++) { 
        if (x % i == 0) return false; 
    }
    
    return true;
}

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (isPrime(a)) {
        printf("%d is a prime number.\n", a);
    } else {
        printf("%d is not a prime number.\n", a);
    }

    return 0;
}