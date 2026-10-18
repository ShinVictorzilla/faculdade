#include <stdio.h>

int main() {
    int numero;

    // Entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Processamento e Estrutura de Decisão
    // O operador % calcula o resto da divisão por 2
    if (numero % 2 == 0) {
        printf("O numero %d e PAR!\n", numero);
    } else {
        printf("O numero %d e IMPAR!\n", numero);
    }

    return 0;
}

