#include <stdio.h>

int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=k;i>=1;i--){
        for(j=1;j<=k;j++){
            if(j<=i){
                printf("* ");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }

}