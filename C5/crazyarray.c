#include <stdio.h>

void insert(int array[], int *x) {
    int num, pos;
    printf("\nEnter the number to insert: ");
    scanf("%d", &num);
    printf("Enter the position to insert (1 to %d): ", *x + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > *x + 1){
        printf("Invalid position!\n");
        return;
    }

    for (int i = *x; i >= pos; i--){
        array[i] = array[i - 1];
    }

    array[pos - 1] = num;
    (*x)++;
}

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int numbers[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++){
        printf("number %d :", i+1);
        scanf("%d", &numbers[i]);
    }
        printf("ur array of numbers is :\n");
    for (int i = 0; i < size; i++){
        printf("%d\t", numbers[i]);
    }

    insert(numbers, &size);

    printf("ur array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d \t", numbers[i]);
    }
}