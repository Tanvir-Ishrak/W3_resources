#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is maximum",a);
    }
    else if(b>c && b>a){
            printf("%d is maximum",b);
        }
    else{
        printf("%d is maximum",c);
        }
    
    

    return 0;
}
