#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    int N, i, indiceMaior = 0;
    float valorEstoque, valorTotal = 0, maiorValor = 0;

    printf("Quantidade de produtos: ");
    scanf("%d", &N);

    Produto produtos[N];

    for (i = 0; i < N; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", produtos[i].nome);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

        valorEstoque = produtos[i].preco * produtos[i].quantidade;
        valorTotal += valorEstoque;

        if (i == 0 || valorEstoque > maiorValor) {
            maiorValor = valorEstoque;
            indiceMaior = i;
        }
    }

    printf("\n--- ESTOQUE DA LOJA ---\n");
    printf("%-15s %-10s %-12s %-12s\n",
           "Nome", "Preco", "Quantidade", "Valor");

    for (i = 0; i < N; i++) {
        valorEstoque = produtos[i].preco * produtos[i].quantidade;

        printf("%-15s R$ %-7.2f %-12d R$ %.2f\n",
               produtos[i].nome,
               produtos[i].preco,
               produtos[i].quantidade,
               valorEstoque);
    }

    printf("\nValor total em estoque: R$ %.2f\n", valorTotal);
    printf("Produto com maior valor em estoque: %s (R$ %.2f)\n",
           produtos[indiceMaior].nome,
           maiorValor);

    return 0;
}