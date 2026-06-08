#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    int n, i, indiceMaior = 0;
    float totalGeral = 0, valorEstoque, maiorValor = 0;

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

    printf("\nProduto\t\tPreco\t\tQtd\tTotal\n");
    printf("--------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        valorEstoque = produtos[i].preco * produtos[i].quantidade;

        printf("%-15s R$%-8.2f %-5d R$%.2f\n",
               produtos[i].nome,
               produtos[i].preco,
               produtos[i].quantidade,
               valorEstoque);

        totalGeral += valorEstoque;

        if (i == 0 || valorEstoque > maiorValor) {
            maiorValor = valorEstoque;
            indiceMaior = i;
        }
    }

    printf("--------------------------------------------------\n");
    printf("Total geral: R$ %.2f\n", totalGeral);
    printf("Maior estoque: %s (R$ %.2f)\n",
           produtos[indiceMaior].nome,
           maiorValor);

    return 0;
}