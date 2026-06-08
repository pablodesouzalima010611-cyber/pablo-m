#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    int n, i, acimaMedia = 0;
    float soma = 0, media;

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

    for (i = 0; i < n; i++) {
        if (turma[i].nota > media) {
            acimaMedia++;
        }
    }

    printf("\n--- BOLETIM DA TURMA ---\n");
    printf("%-20s %s\n", "Nome", "Nota");

    for (i = 0; i < n; i++) {
        printf("%-20s %.2f\n", turma[i].nome, turma[i].nota);
    }

    printf("\nMedia da turma: %.2f\n", media);
    printf("Alunos acima da media: %d\n", acimaMedia);

    return 0;
}