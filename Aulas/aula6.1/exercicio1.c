#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    int n, i;
    float soma = 0, media;
    int acimaMedia = 0;

    printf("Digite a quantidade de alunos: ");
   