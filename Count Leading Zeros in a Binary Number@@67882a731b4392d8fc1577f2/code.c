#include <stdio.h>

int countLeadingZeros(int num) {
    if (num == 0) return sizeof(int) * 8; 

    int count = 0;
    int bits = sizeof(int) * 8; 

    for (int i = bits - 1; i >= 0; i--) {  
        if ((num >> i) & 1) break; 
        count++;
    }

    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf(num);
    return 0;
}
