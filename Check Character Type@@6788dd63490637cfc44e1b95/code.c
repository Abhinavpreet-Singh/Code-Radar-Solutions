#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    int charvalue = (int) a;

    if ((charvalue >= 65 && charvalue <= 90) || (charvalue >= 97 && charvalue <= 122)) {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
            a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } 
    else if (a >= '0' && a <= '9') {
        printf("Digit");
    } 
    else {
        printf("Special Character");
    }

    return 0;
}
