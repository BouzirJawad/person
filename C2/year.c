#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    int y, m, d, h, min, sec;
    
   

    printf("whats ur number of years");
    scanf("%d", &y);

    m = y * 12;
    d = y * 365;
    h = d * 24;
    min = h * 60;
    sec = min * 60;

    char letter;

    printf("to which ? \n a.months \n b.days \n c.hours \n d.mins \n e.secs\n please choose a latter : ");
    scanf("%s", &letter);
    

    switch (letter)
    {
        case 'a':
        printf("it's %d months", m);
        break;

        case 'b':
        printf("it's %d days", d);
        break;

        case 'c':
        printf("it's %d hours", h);
        break;

        case 'd':
        printf("it's %d mins", min);
        break;

        case 'e':
        printf("it's %d secs", sec);
        break;
    
    default:
        break;
    }
}