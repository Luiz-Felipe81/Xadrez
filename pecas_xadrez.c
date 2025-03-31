#include <stdio.h>

// Função recursiva para o movimento da Torre
void moveTorre(int casas, int atual) {
    if (atual > casas) return;  // Caso base: parar quando atingir o limite
    printf("Direita\n");        // Torre move-se para a direita
    moveTorre(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo com loops aninhados
void moveBispo(int casas, int atual) {
    if (atual > casas) return;  // Caso base: parar quando atingir o limite
    int i, j;
    // Loop externo para o movimento vertical (Cima)
    for (i = atual; i <= atual; i++) {
        // Loop interno para o movimento horizontal (Direita)
        for (j = atual; j <= atual; j++) {
            printf("Cima, Direita\n");  // Bispo move-se diagonalmente
        }
    }
    moveBispo(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moveRainha(int casas, int atual) {
    if (atual > casas) return;  // Caso base: parar quando atingir o limite
    printf("Esquerda\n");       // Rainha move-se para a esquerda
    moveRainha(casas, atual + 1); // Chamada recursiva
}

int main() {
    
    // Variáveis para controlar o número de casas a serem movidas
    const int MOV_TORRE = 5;    // Torre: 5 casas para a direita
    const int MOV_BISPO = 5;    // Bispo: 5 casas diagonal cima-direita
    const int MOV_RAINHA = 8;   // Rainha: 8 casas para a esquerda
    const int CAVALO_CIMA = 2;  // Cavalo: 2 casas para cima
    const int CAVALO_DIR = 1;   // Cavalo: 1 casa para a direita

    // Simulação do movimento da Torre (recursivo)
    printf("Movimento da Torre (5 casas para a direita):\n");
    moveTorre(MOV_TORRE, 1);    // Inicia a recursão a partir da casa 1
    printf("\n");               // Linha em branco para separação

    // Simulação do movimento do Bispo (recursivo com loops aninhados)
    printf("Movimento do Bispo (5 casas diagonal cima-direita):\n");
    moveBispo(MOV_BISPO, 1);    // Inicia a recursão a partir da casa 1
    printf("\n");               // Linha em branco para separação

    // Simulação do movimento da Rainha (recursivo)
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moveRainha(MOV_RAINHA, 1);  // Inicia a recursão a partir da casa 1

    // Simulação do movimento do Cavalo (loops complexos)
    printf("\n");               // Linha em branco para separação
    printf("Movimento do Cavalo (2 casas para cima, 1 casa para a direita):\n");
    int passos_cima = 0;        // Contador para casas para cima
    int passos_dir = 0;         // Contador para casas para a direita
    int total_passos = CAVALO_CIMA + CAVALO_DIR; // Total de casas a percorrer
    
    // Loop externo para controlar o movimento completo em "L"
    for (int i = 1; i <= total_passos; i++) {
        // Loop interno com condições para "Cima"
        while (passos_cima < CAVALO_CIMA) {
            printf("Cima\n");   // Move para cima
            passos_cima++;
            if (passos_cima == CAVALO_CIMA) break; // Sai do while após 2 casas
            continue;           // Continua até completar os 2 "Cima"
        }
        
        // Loop interno com condições para "Direita"
        while (passos_dir < CAVALO_DIR && passos_cima == CAVALO_CIMA) {
            printf("Direita\n"); // Move para a direita
            passos_dir++;
            break;              // Sai após 1 casa para a direita
        }
    }

    printf("\nPressione Enter para encerrar o programa...\n");
    getchar();                  

    return 0;
}