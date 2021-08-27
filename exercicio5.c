//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float qnt = 0, numeros, soma, media;

    printf("Digite um numero positivo desejado: -- finalize utilizando um numero negativo -- \n");
    scanf("%f", &numeros);

    while (numeros >= 0) {
        qnt++;
        soma = numeros + soma;
        media = soma / qnt;

        printf("Digite um numero positivo desejado: -- finalize utilizando um numero negativo -- \n");
        scanf("%f", &numeros);
    }

    printf("A quantidade dos numeros e: %1.1f\n", qnt);
    printf("A soma dos numeros e: %1.1f\n", soma);
    printf("A media dos numeros e: %1.2f\n", media);

    return 0;
}

