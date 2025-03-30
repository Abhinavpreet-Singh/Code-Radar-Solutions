#include <stdio.h>

int main(){
    int num,digits;
    scanf("%d %d",&num,&digits);

    int bit= (1<<digits);
    printf("%d",(bit ^ num));

    return 0;
}