//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int numero = 0;
    float media, soma = 0, qnt = 0;

    while (soma < 100) {
        printf("Digite o numero inteiro desejado: \n");
        scanf("%d", &numero);

        soma = soma + numero;

        qnt++;
    }

    media = soma / qnt;

    printf("Quantidade de numeros: %f\n", qnt);
    printf("Media: %1.2f \n", media);

    return 0;
}

