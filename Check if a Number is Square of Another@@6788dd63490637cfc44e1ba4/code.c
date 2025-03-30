#include <stdio.h>

int main() {
    int sqnum, num;
    scanf("%d %d",&sqnum, &num);

    if(num*num==sqnum){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}