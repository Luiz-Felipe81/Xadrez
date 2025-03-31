#include <stdio.h>

int main() {
    // Variáveis para controlar o número de casas a serem movidas
    const int MOV_TORRE = 5;    // Torre: 5 casas para a direita
    const int MOV_BISPO = 5;    // Bispo: 5 casas diagonal cima-direita
    const int MOV_RAINHA = 8;   // Rainha: 8 casas para a esquerda
    int i;                      // Contador genérico

    // Simulação do movimento da Torre (usando for)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= MOV_TORRE; i++) {
        printf("Direita\n");    // Torre move-se horizontalmente para a direita
    }
    printf("\n");               // Linha em branco para separação

    // Simulação do movimento do Bispo (usando while)
    printf("Movimento do Bispo (5 casas diagonal cima-direita):\n");
    i = 1;                      // Reinicia contador
    while (i <= MOV_BISPO) {
        printf("Cima, Direita\n");  // Bispo move-se na diagonal (duas direções)
        i++;
    }
    printf("\n");               // Linha em branco para separação

    // Simulação do movimento da Rainha (usando do-while)
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 1;                      // Reinicia contador
    do {
        printf("Esquerda\n");   // Rainha move-se horizontalmente para a esquerda
        i++;
    } while (i <= MOV_RAINHA);

    printf("\nPressione Enter para encerrar o programa...\n");
    getchar();                  

    return 0;
}