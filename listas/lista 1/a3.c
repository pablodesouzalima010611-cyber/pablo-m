#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto p;
    float valorTotal, valorDesconto;

    printf("Digite o nome do produto: ");
    scanf("%49s", p.nome);

    printf("Digite o preco do produto: ");
    scanf("%f", &p.preco);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &p.quantidade);

    valorTotal = p.preco * p.quantidade;
    valorDesconto = valorTotal * 0.90; 

    printf("\n--- DADOS DO PRODUTO ---\n");
    printf("Nome: %s\n", p.nome);
    printf("Preco: R$ %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);
    printf("Valor total em estoque: R$ %.2f\n", valorTotal);
    printf("Valor com 10%% de desconto: R$ %.2f\n", valorDesconto);

    return 0;
}