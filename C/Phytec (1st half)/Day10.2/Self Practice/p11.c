#include <stdio.h>
int main() {
    int Dividend, Divisor, Quotient, Remainder;
    printf("Enter dividend: \n");
    scanf("%d", &Dividend);
    printf("Enter divisor: \n");
    scanf("%d", &Divisor);
    Quotient = Dividend / Divisor;
    Remainder = Dividend % Divisor;
    printf("Quotient = %d\n", Quotient);
    printf("Remainder = %d\n", Remainder);
    return 0;
}