//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char resp;
    int dif, mediaIdade, maiorIdade, idade, contador = 0, total;
    int respO = 0, respB = 0, respR = 0, respU = 0, respP = 0;

    printf("----- Avaliacao do Cinema ----- \n\n");

    for (contador; contador <= 4; contador++) {
        printf("Idade: \n");
        scanf("%d%*C", &idade);
        printf("Nos de sua opiniao sobre o cinema, sendo [O] Otimo - [B] Bom - [R] Regular - [U] Ruim - [P] Pessimo: \n");
        scanf("%c%*C", &resp);

        if (resp == 'O') {
            respO++;
        }
        if (resp == 'B') {
            respB++;
        }
        if (resp == 'R') {
            respR++;
        }
        dif = respR - respB;
        if (resp == 'U') {
            respU++;
            total = total + idade;
            mediaIdade = total / respU;
        }
        if (resp == 'P') {
            respP++;
            maiorIdade = idade;
        }
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

    }

    printf("----- Resultadoos da Avaliacao ----- \n\n");
    printf("Quantidade de respostas [O] Otimo: %d \n", respO);
    printf("Diferenca percentual entre [R] Regular e [B] Bom: %d \n", dif);
    printf("Media de idade entre os que responderam [U] Ruim: %d \n", mediaIdade);
    printf("Porcentagem de respostas [P] Pessimo: %d. Maior idade de quem utilizou [P] Pessimo: %d \n", respP, maiorIdade);

    return 0;
}

