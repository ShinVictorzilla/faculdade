#include <stdio.h>

int main() {
    int idade;

    // Entrada de dados
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Processamento e Estrutura de Decisão
    // O operador >= verifica se a idade e maior ou igual a 18
    if (idade >= 18) {
        printf("Voce e maior de idade!\n");
    } else {
        printf("Voce e menor de idade!\n");
    }

    return 0;
}
