#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    int n, i;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    Aluno turma[n];

    for (i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", turma[i].nome);

        printf("Nota: ");
        scanf("%f", &turma[i].nota);
    }

    int maior = 0;
    int menor = 0;

    for (i = 1; i < n; i++) {
        if (turma[i].nota > turma[maior].nota) {
            maior = i;
        }

        if (turma[i].nota < turma[menor].nota) {
            menor = i;
        }
    }

    printf("\n--- RESULTADO ---\n");
    printf("Maior nota: %s (%.2f)\n",
           turma[maior].nome,
           turma[maior].nota);

    printf("Menor nota: %s (%.2f)\n",
           turma[menor].nome,
           turma[menor].nota);

    return 0;
}