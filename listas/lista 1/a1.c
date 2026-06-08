#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa p;

    printf("Digite o nome: ");
    scanf("%49s", p.nome);

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    printf("Digite a altura: ");
    scanf("%f", &p.altura);

    printf("\n--- FICHA DA PESSOA ---\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d anos\n", p.idade);
    printf("Altura: %.2f m\n", p.altura);

    return 0;
}