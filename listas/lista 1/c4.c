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

void imprimirAluno(Aluno a) {
    printf("%-15s %.2f %.2f %.2f %.2f %c\n",
           a.nome,
           a.nota1,
           a.nota2,
           a.nota3,
           a.media,
           definirConceito(a.media));
}

void ordenarPorNota(Aluno turma[], int n) {
    int i, j, maior;
    Aluno aux;

    for (i = 0; i < n - 1; i++) {
        maior = i;

        for (j = i + 1; j < n; j++) {
            if (turma[j].media > turma[maior].media) {
                maior = j;
            }
        }

        aux = turma[i];
        turma[i] = turma[maior];
        turma[maior] = aux;
    }
}

int main() {
    int N, i;

    printf("Quantidade de alunos: ");
    scanf("%d", &N);

    Aluno alunos[N];

    for (i = 0; i < N; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", alunos[i].nome);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);

        alunos[i] = calcularMedia(alunos[i]);
    }

    ordenarPorNota(alunos, N);

    printf("\n--- RANKING DA TURMA ---\n");
    printf("Nome            N1    N2    N3    Media Conceito\n");

    for (i = 0; i < N; i++) {
        imprimirAluno(alunos[i]);
    }

    return 0;
}