//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {

    /* Formula
    •	valor acumulado = P * ((1+ i)n –1)/i
    •	onde i = taxa,
    •	P=aplicação mensal e
    •	N = número de meses.
     */


    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int  meses;
    float constante, montante, taxa;

    // Funcao
    float calc(float taxa, int meses);

    printf("----- Rendimento de Poupanca Programada ----- \n");

    printf("Digite o valor da aplicacao mensal: \n");
    scanf("%f", &constante);
    printf("Digite a taxa: \n");
    scanf("%f", &taxa);
    printf("Digite o numero de meses: \n");
    scanf("%d", &meses);

    montante = (constante * (calc(taxa, meses)-1)) / taxa;

    printf("Seu montante sera de: %.2f \n", montante);

}

float calc(float taxa, int meses) {
    taxa = taxa + 1;
    float resultado = 1;
    for (int i = 1; i <= meses; i++)
        resultado = resultado * taxa;

        return resultado;

}

