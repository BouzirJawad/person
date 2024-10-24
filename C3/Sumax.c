#include <stdio.h>

int main(){
    int x, max = 0, sum = 0;

    printf("what's ur numbers ?(type 0 to end process)");

    while (1){   
        scanf("%d", &x);

        if (x == 0){
            break;
        }

        if (x>0 && x<=100)
        {
            sum += x;
            max = (x > max) ? x : max;
        }
    }

        printf("sum : %d\n", sum);
        printf("max : %d\n", max);
        
        return 0;
        
    }
    