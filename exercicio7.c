//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int id = 0, idMagro = 0, idGordo = 0;
    float pesoMedio = 0 , peso = 1, pesoGordo = 0, pesoMagro = 0, soma = 0, qnt = 0;

    printf ("Digite a identificacao: \n");
    scanf ("%d*%C", &id);

    while (id != 0) {
        printf ("Digite o peso: \n");
        scanf ("%f*%C", &peso);
        if (peso > pesoGordo){
            pesoGordo = peso;
            idGordo = id;
        }
        if (peso < pesoMagro || pesoMagro == 0){
            pesoMagro = peso;
            idMagro = id;
        }

        qnt++;

        soma = soma + peso;
        pesoMedio = soma / qnt;
        printf ("Digite a identificacao: \n");
        scanf ("%d*%C", &id);
    }

    printf("----- Leitura dos Identificadores dos Bois ----- \n\n");
    // Gordo
    printf("Identificacao do boi mais gordo: %d. \n", idGordo);
    printf("Peso do boi mais gordo: %1.1f. \n\n\n", pesoGordo);

    // Magro
    printf("Identificacao do boi mais magro: %d. \n", idMagro);
    printf("Peso do boi mais magro: %1.1f. \n\n\n", pesoMagro);

    // Media
    printf("Peso medio dos bois %1.1f. \n", pesoMedio);

    return 0;
}


