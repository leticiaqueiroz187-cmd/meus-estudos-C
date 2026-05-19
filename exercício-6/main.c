#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b) {
        printf("%d é maior\n", a);
    }
    else if(b > a) {
        printf("%d é maior\n", b);
    }
    else {
        printf("Numeros iguais\n");
    }

    return 0;
}