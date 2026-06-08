#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

char definirConceito(float media) {
    if (media >= 9.0)
        return 'A';
    else if (media >= 7.0)
        return 'B';
    else if (media >= 5.0)
        return 'C';
    else
        return 'D';
}

void imprimirSituacao(char nome[], float media, char conceito) {
    printf("%-15s Media: %.2f Conceito: %c\n",
           nome, media, conceito);
}

int main() {
    char nome[50];
    float n1, n2, n3, media;
    char conceito;
    int i;

    for (i = 1; i <= 3; i++) {
        printf("\nAluno %d\n", i);

        printf("Nome: ");
        scanf("%49s", nome);

        printf("Nota 1: ");
        scanf("%f", &n1);

        printf("Nota 2: ");
        scanf("%f", &n2);

        printf("Nota 3: ");
        scanf("%f", &n3);

        media = calcularMedia(n1, n2, n3);
        conceito = definirConceito(media);

        imprimirSituacao(nome, media, conceito);
    }

    return 0;
}