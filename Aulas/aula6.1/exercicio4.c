#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    int n, i;
    float soma = 0, media;
    int acimaMedia = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    Aluno turma[n];

    for (i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", turma[i].nome);

        printf("Nota: ");
        scanf("%f", &turma[i].nota);

        soma += turma[i].nota;
    }

    media = soma / n;

    int maior = 0;
    int menor = 0;

    for (i = 0; i < n; i++) {
        if (turma[i].nota > media) {
            acimaMedia++;
        }

        if (turma[i].nota > turma[maior].nota) {
            maior = i;
        }

        if (turma[i].nota < turma[menor].nota) {
            menor = i;
        }
    }

    printf("\n--- BOLETIM COMPLETO ---\n");
    printf("%-20s %s\n", "Nome", "Nota");

    for (i = 0; i < n; i++) {
        printf("%-20s %.2f\n", turma[i].nome, turma[i].nota);
    }

    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %s (%.2f)\n", turma[maior].nome, turma[maior].nota);
    printf("Menor nota: %s (%.2f)\n", turma[menor].nome, turma[menor].nota);
    printf("Alunos acima da media: %d\n", acimaMedia);

    char busca[50];
    int encontrado = 0;

    printf("\nBuscar aluno: ");
    scanf("%49s", busca);

    for (i = 0; i < n; i++) {
        if (strcmp(turma[i].nome, busca) == 0) {
            printf("Encontrado: %s, nota %.2f\n",
                   turma[i].nome,
                   turma[i].nota);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Aluno nao encontrado.\n");
    }

    return 0;
}