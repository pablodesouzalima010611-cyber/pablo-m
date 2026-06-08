#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    int n, i;
    float valorEstoque, totalGeral = 0;

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &n);

    Produto produtos[n];

    for (i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", produtos[i].nome);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
    }

    int maiorEstoque = 0;
    int menorPreco = 0;

    for (i = 1; i < n; i++) {
        float valorAtual = produtos[i].preco * produtos[i].quantidade;
        float valorMaior = produtos[maiorEstoque].preco * produtos[maiorEstoque].quantidade;

        if (valorAtual > valorMaior) {
            maiorEstoque = i;
        }

        if (produtos[i].preco < produtos[menorPreco].preco) {
            menorPreco = i;
        }
    }

    printf("\n--- ESTOQUE DE PRODUTOS ---\n");
    printf("%-15s %-10s %-10s %-10s\n",
           "Nome", "Preco", "Qtd", "Estoque");

    for (i = 0; i < n; i++) {
        valorEstoque = produtos[i].preco * produtos[i].quantidade;
        totalGeral += valorEstoque;

        printf("%-15s R$%-7.2f %-10d R$%.2f\n",
               produtos[i].nome,
               produtos[i].preco,
               produtos[i].quantidade,
               valorEstoque);
    }

    printf("\nProduto com maior valor em estoque: %s (R$ %.2f)\n",
           produtos[maiorEstoque].nome,
           produtos[maiorEstoque].preco * produtos[maiorEstoque].quantidade);

    printf("Produto com menor preco unitario: %s (R$ %.2f)\n",
           produtos[menorPreco].nome,
           produtos[menorPreco].preco);

    printf("Valor total geral do estoque: R$ %.2f\n", totalGeral);

    return 0;
}