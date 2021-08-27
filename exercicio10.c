//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int potencia = 1, base, expoente, contador = 0;

    printf ("Digite o valor da base (b): -- Necessario ser maior ou igual a 2 -- \n");
    scanf ("%d", &base);

    while (base < 2) {
        printf ("Erro: valor invalido! E necessario que o expoente seja maior ou igual a 2 \n");
        printf ("Digite o valor da base (b): -- Necessario ser maior ou igual a 2 -- \n");
        scanf ("%d", &base);
    }

    printf ("Digite o valor do expoente (n): -- Necessario ser maior que 1 --\n");
    scanf ("%d", &expoente);

    while (expoente < 1) {
        printf ("Erro: valor invalido! E necessario que o expoente seja maior que 1 \n");
        printf ("Digite o valor do expoente (n): -- Necessario ser maior que 1 --\n");
        scanf ("%d", &expoente);
    }

    for (contador; contador < expoente; contador++) {
        potencia *= base;
    }

        printf ("Exponenciacao: %d \n", potencia);

    return 0;
}


