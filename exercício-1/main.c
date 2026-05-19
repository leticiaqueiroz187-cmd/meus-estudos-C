#include <stdio.h>

int main() {
    int n1, n2;
    float divisao;
    
    scanf("%d %d", &n1, &n2);
    divisao = (float)n1 / n2;

    printf("Soma: %d\n", n1 + n2);
    printf("Subtracao: %d\n", n1 - n2);
    printf("Multiplicacao: %d\n", n1 * n2);
    printf("Divisao: %.1f\n", divisao);

    return 0;
}