//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int ano = 0;
    float raul = 1.50, jose = 1.10;

    printf("------- Programa------- \n");

    while (jose < raul) {
        jose = jose + 0.03;
        raul = raul + 0.02;
        ano = ano + 1;
    }
    printf("Anos necessarios para que Jose seja maior que Raul: ");
    printf("%d", ano);

    return 0;
}

