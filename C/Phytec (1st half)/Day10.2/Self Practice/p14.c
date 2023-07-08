#include <stdio.h>
int main() {
    char c;
    int lower_vow, upper_vow;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    lower_vow = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upper_vow = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lower_vow || upper_vow)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}