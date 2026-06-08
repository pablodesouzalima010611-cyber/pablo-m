#include <stdio.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;

Aluno calcularMedia(Aluno a) {
    a.media = (a.nota1 + a.nota2 + a.nota3) / 3.0;
    return a;
}

void ordenarPorMedia(Aluno turma[], int n) {
    int i, j, iMaior;
    Aluno temp;

    for (i = 0; i < n - 1; i++) {
        iMaior = i;

        for (j = i + 1; j < n; j++) {
            if (turma[j].media > turma[iMaior].media) {
                iMaior = j;
            }
        }

        temp = turma[i];
        turma[i] = turma[iMaior];
        turma[iMaior] = temp;
    }
}

int main() {
    int n, i;

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    Aluno turma[n];

    for (i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", turma[i].nome);

        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &turma[i].nota3);

        turma[i] = calcularMedia(turma[i]);
    }

    ordenarPorMedia(turma, n);

    printf("\n--- RANKING DA TURMA ---\n");
    printf("%-15s %-10s\n", "Nome", "Media");

    for (i = 0; i < n; i++) {
        printf("%-15s %.2f\n",
               turma[i].nome,
               turma[i].media);
    }

    return 0;
}