#include <stdio.h>

int main(){
    int month;
    printf("Inut a number between 1 to 12 to get the month name:");
    scanf("%d",&month);
    switch (month)
    {
    case 1: printf("January"); break;
    case 2: printf("February"); break;
    case 3: printf("March"); break;
    case 4: printf("April"); break;
    case 5: printf("May"); break;
    case 6: printf("June"); break;
    case 7: printf("JUly"); break;
    case 8: printf("August"); break;
    case 9: printf("September"); break;
    case 10: printf("October"); break;
    case 11: printf("November"); break;
    case 12: printf("December"); break;
    
    default: printf("Inut a number between 1 to 12 to get the month name:");
    break;
    }

    return 0;
}
