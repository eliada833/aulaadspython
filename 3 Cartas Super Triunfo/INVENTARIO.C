#include <stdio.h>

int main() {
    // Declarar variáveis
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    // Calcular valor total em estoque
    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;

    // Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitario e %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario e %.2f\n\n", produtoB, estoqueB, valorB);

    // Comparações com o valor mínimo de estoque
    printf("--- Comparando com Estoque Minimo ---\n");
    printf("Estoque A > Minimo A: %d\n", estoqueA > estoqueMinimoA);
    printf("Estoque B > Minimo B: %d\n\n", estoqueB > estoqueMinimoB);

    // Comparações entre os produtos
    printf("--- Comparando Produtos ---\n");
    printf("Estoque A > Estoque B: %d\n", estoqueA > estoqueB);
    printf("Valor A == Valor B: %d\n\n", valorA == valorB);

    // Comparações entre os valores totais dos produtos
    printf("--- Comparando Valor Total em Estoque ---\n");
    printf("Valor Total A > Valor Total B: %d\n", valorTotalA > valorTotalB);

    return 0;
}
