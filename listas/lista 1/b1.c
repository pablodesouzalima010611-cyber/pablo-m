#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    int N, i, aprovados = 0;
    float soma = 0, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &N);

    Aluno turma[N];

    for (i = 0; i < N; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", turma[i].nome);

        printf("Nota: ");
        scanf("%f", &turma[i].nota);

        soma += turma[i].nota;

        if (turma[i].nota >= 7.0) {
            aprovados++;
        }
    }

    media = soma / N;

    printf("\n--- TABELA DE ALUNOS ---\n");
    printf("%-20s %-10s\n", "Nome", "Nota");

    for (i = 0; i < N; i++) {
        printf("%-20s %.1f\n", turma[i].nome, turma[i].nota);
    }

    printf("\nMedia da turma: %.2f\n", media);
    printf("Alunos aprovados: %d\n", aprovados);

    return 0;
}