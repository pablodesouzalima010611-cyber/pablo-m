#include <stdio.h>

void imprimirMenu() {
    printf("\n=== CALCULADORA ===\n");
    printf("1. Calcular media de 3 notas\n");
    printf("2. Verificar se numero e primo\n");
    printf("3. Calcular potencia\n");
    printf("0. Sair\n");
    printf("Opcao: ");
}

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
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

int potencia(int base, int exp) {
    int resultado = 1;

    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int opcao = -1;

    while (opcao != 0) {
        imprimirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                float n1, n2, n3;

                printf("Digite as 3 notas: ");
                scanf("%f %f %f", &n1, &n2, &n3);

                printf("Media: %.2f\n",
                       calcularMedia(n1, n2, n3));
                break;
            }

            case 2: {
                int n;

                printf("Digite um numero: ");
                scanf("%d", &n);

                if (ehPrimo(n))
                    printf("%d e primo.\n", n);
                else
                    printf("%d nao e primo.\n", n);

                break;
            }

            case 3: {
                int base, exp;

                printf("Digite a base e o expoente: ");
                scanf("%d %d", &base, &exp);

                printf("Resultado: %d\n",
                       potencia(base, exp));
                break;
            }

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}