#include <stdio.h>

int potencia(int base, int exp) {
    int resultado = 1;

    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }

    return resultado;
}

int fatorial(int n) {
    int fat = 1;

    for (int i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

int ehPrimo(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nPotencia ao quadrado: %d\n", potencia(n, 2));
    printf("Fatorial: %d\n", fatorial(n));

    if (ehPrimo(n)) {
        printf("O numero %d e primo.\n", n);
    } else {
        printf("O numero %d nao e primo.\n", n);
    }

    return 0;
}