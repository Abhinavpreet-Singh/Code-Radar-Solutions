#include <stdio.h>

void convertToBinary(int num) {
    int binary[32];
    int index = 0;  

    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (num == 0) printf("0");
    else convertToBinary(num);

    return 0;
}
