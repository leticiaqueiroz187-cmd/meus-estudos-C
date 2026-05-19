#include <stdio.h>
int main() {
    float salario, vendas;
    float bonus, final;

    scanf("%f %f", &salario, &vendas);

    bonus = vendas * 0.10;
    final = salario + bonus;

    printf("Bonus = %.2f\n", bonus);
    printf("Salario final = %.2f\n", final);

    return 0;
}