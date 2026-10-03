#include <stdio.h>

int main() {
    char produto[50];
    float preco_anterior, preco_atual, percentual;

    printf("NOME DO PRODUTO: ");
    scanf("%s", produto);

    printf("PREÇO DO MÊS ANTERIOR: ");
    scanf("%f", &preco_anterior);

    printf("PREÇO ATUAL: ");
    scanf("%f", &preco_atual);

    if (preco_anterior > 0) {
        percentual = ((preco_atual - preco_anterior) / preco_anterior) * 100;
        printf("PERCENTUAL: %.2f%%\n\n", percentual);

        if (preco_atual == preco_anterior) {
            printf("Preço estável\n");
        } else if (percentual > 10) {
            printf("Houve aumento - Abuso de preço!\n");
        } else if (preco_atual > preco_anterior) {
            printf("Houve aumento\n");
        } else {
            printf("Diminuiu\n");
        }
    } else {
        printf("O preço anterior deve ser maior que zero.\n");
    }

    return 0;
}
