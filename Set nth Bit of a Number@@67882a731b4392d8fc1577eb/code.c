#include <stdio.h>

void main(){
    int n, digit;
    scanf("%d %d",&n,&digit);

    int bit= (1<<digit);
    printf("%d",bit | n);
    
}