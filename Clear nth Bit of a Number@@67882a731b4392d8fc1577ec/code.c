#include <stdio.h>

int main(){
    int n,digit;
    scanf("%d %d",&n,&digit);
    int bitclear= ~(1<<digit) & n;
    printf("%d",bitclear);

    return 0;
}