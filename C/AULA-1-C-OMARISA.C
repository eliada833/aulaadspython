#include <stdio.h>

int main() {
    printf("agora sim! sou a Omarisa e to programando\n");
    printf("\n");

    char nome[] = "Omarisa";
    int idade = 18;
    char curso[] = "Analise e Desenvolvimento de Sistemas";

    printf("Meu nome e: %s\n", nome);
    printf("Tenho %d anos\n", idade);
    printf("Faco o curso de %s\n", curso);
    printf("\n");

    int numero1 = 40;
    int numero2 = 30;

    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = (float)numero1 / numero2;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.1f\n", divisao);

    return 0;
}
