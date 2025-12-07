/*
0 – 2,50,000 → 0% tax
2,50,001 – 5,00,000 → 5% on only the amount above 2.5L
5,00,001 – 10,00,000 → 20% on amount above 5L
Above 10,00,000 → 30% on amount above 10L
*/

#include <stdio.h>
int main() {
    float income, tax = 0;
    printf("Enter your taxable income: ");
    scanf("%f", &income);

    //Tax
    if (income <= 250000)tax = 0;
    else if (income <= 500000)tax = (income - 250000)*0.05;
    else if (income <= 1000000)tax = (250000 * 0.05)+(income - 500000)*0.20;
    else tax = (250000 * 0.05)+(500000 * 0.20)+(income - 1000000)*0.30;

    // REBATE
    if (income <= 500000)tax = 0;

    // CESS 4%(Extra tax for health ans education)
    tax = tax + tax * 0.04;

    printf("Final Tax = %f\n", tax);
    return 0;
}
