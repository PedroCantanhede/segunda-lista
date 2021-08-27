//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int homens = 0, mulheres = 0, contador = 1;
    float altura = 0, maior, menor, mediaHomens = 0, mediaMulheres = 0;
    char sexo;

    printf("----- Formulário -----\n");

    for (contador; contador <= 33; contador++) {
        printf("Digite o sexo da pessoa [M] Mascilino [F] Feminino: \n");
        scanf("%c", &sexo);
        printf("Digite a altura da pessoa: \n");
        scanf("%f", &altura);

        if (contador == 1) {
            maior = menor = altura;
        }

        if (menor > altura) {
            menor = altura;
        }

        if (maior < altura) {
            maior = altura;
        }

        if (sexo == 'M') {
            homens++;
            mediaHomens = mediaHomens + altura;
        } else if (sexo == 'F') {
            mulheres++;
            mediaMulheres += altura;
        } else {
            printf("Erro: valor informado invalido! \n");
        }
    }

    mediaHomens = mediaHomens / homens;
    mediaMulheres = mediaMulheres / mulheres;

    printf("Maior altura: %1.2f \n", maior);
    printf("Menor altura: %1.2f \n", menor);

    printf("Media da altura de homens: %1.2f \n", mediaHomens);
    printf("Maior da altura de mulheres: %1.2f \n", mediaMulheres);

    return 0;
}

