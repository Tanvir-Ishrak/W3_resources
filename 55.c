#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);

    int temp=x;  
    x=y;
    y=temp;

    printf("x & y: %d & %d",x,y);

    return 0;
}


