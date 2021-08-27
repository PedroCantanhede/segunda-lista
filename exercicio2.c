//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int numero = 0, contador = 0, tabuada;

    printf("\n Informe o numero que deseja exibir as tabuadas: \n");
    scanf("%d", &numero);

    printf("------- Tabuada ------- \n");

    for(contador; contador <= 10 ; contador++){
        tabuada = contador * numero;

        printf("%d x %d = %d\n", contador, numero, tabuada);
    }

    return 0;
}

