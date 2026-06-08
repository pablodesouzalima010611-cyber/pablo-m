#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto p;
    float valorTotal;

    printf("Digite o nome do produto: ");
    scanf("%49s", p.nome);

    printf("Digite o preco: ");
    scanf("%f", &p.preco);

    printf("Digite a quantidade: ");
    scanf("%d", &p.quantidade);

    valorTotal = p.preco * p.quantidade;

    printf("\nNome : %s\n", p.nome);
    printf("Preco : R$ %.2f\n", p.preco);
    printf("Quantidade : %d\n", p.quantidade);
    printf("---------------------------------\n");
    printf("Valor total em estoque : R$ %.2f\n", valorTotal);

    return 0;
}