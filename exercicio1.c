//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int contador1, contador2, numero, sucessor, antecessor;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    contador1 = numero;
    sucessor = numero + 20;

    printf("--- Sucessores --- \n");

    for (contador1; contador1 <= sucessor; contador1++) {

        printf("%d \n", contador1);
    }

    contador2 = numero;
    antecessor = numero - 20;

    printf("--- Antecessores --- \n");

    for (contador2; contador2 >= antecessor; contador2--) {

        printf("%d \n", contador2);
    }

    return 0;
}
