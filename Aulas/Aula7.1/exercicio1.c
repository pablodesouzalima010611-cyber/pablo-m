#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
    float totalEstoque;
} Produto;
 

void lerProdutos(Produto est[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", est[i].nome);

        printf("Preco: ");
        scanf("%f", &est[i].preco);

        printf("Quantidade: ");
        scanf("%d", &est[i].quantidade);
    }
}

void calcularEstoque(Produto est[], int n) {
    for (int i = 0; i < n; i++) {
        est[i].totalEstoque = est[i].preco * est[i].quantidade;
    }
}

void imprimirEstoque(Produto est[], int n) {
    float totalGeral = 0;

    printf("\n--- ESTOQUE DE PRODUTOS ---\n");
    printf("%-15s %-10s %-10s %-12s\n",
           "Nome", "Preco", "Qtd", "Estoque");

    for (int i = 0; i < n; i++) {
        printf("%-15s R$%-7.2f %-10d R$%.2f\n",
               est[i].nome,
               est[i].preco,
               est[i].quantidade,
               est[i].totalEstoque);

        totalGeral += est[i].totalEstoque;
    }

    printf("\nTotal geral: R$ %.2f\n", totalGeral);
}

int encontrarMaiorEstoque(Produto est[], int n) {
    int maior = 0;

    for (int i = 1; i < n; i++) {
        if (est[i].totalEstoque > est[maior].totalEstoque) {
            maior = i;
        }
    }

    return maior;
}

int encontrarMenorPreco(Produto est[], int n) {
    int menor = 0;

    for (int i = 1; i < n; i++) {
        if (est[i].preco < est[menor].preco) {
            menor = i;
        }
    }

    return menor;
}

int main() {
    int n;

    printf("Quantidade de produtos: ");
    scanf("%d", &n);

    Produto estoque[n];

    lerProdutos(estoque, n);
    calcularEstoque(estoque, n);
    imprimirEstoque(estoque, n);

    int maior = encontrarMaiorEstoque(estoque, n);
    int menor = encontrarMenorPreco(estoque, n);

    printf("Produto com maior valor em estoque: %s (R$ %.2f)\n",
           estoque[maior].nome,
           estoque[maior].totalEstoque);

    printf("Produto com menor preco: %s (R$ %.2f)\n",
           estoque[menor].nome,
           estoque[menor].preco);

    return 0;
}