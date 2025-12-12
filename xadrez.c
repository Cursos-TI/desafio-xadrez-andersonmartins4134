#include <stdio.h>

int main() {
    
    // Movimentação da Torre: 5 casas para a direita usando for
    // O for é ideal quando sabemos o número exato de repetições
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Pula linha para organizar a saída

    // Movimentação do Bispo: 5 casas na diagonal cima/direita usando while
    // O while testa a condição antes de executar
    printf("Movimento do Bispo:\n");
    int casasBispo = 0;
    while (casasBispo < 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }

    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda usando do-while
    // O do-while garante pelo menos uma execução antes de testar
    printf("Movimento da Rainha:\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);

    return 0;
}