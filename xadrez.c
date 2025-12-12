#include <stdio.h>

// Função auxiliar para Recursividade (chamada simples)
void mover(int passos, const char *direcao) {
    if (passos <= 0) {
        return; // Caso Base: Condição de parada
    }
    printf("%s\n", direcao);
    mover(passos - 1, direcao); // Chamada recursiva
}

int main() {
    
    // 1. Torre (Recursividade) - 5 casas para a direita
    printf("Movimento da Torre:\n");
    mover(5, "Direita");
    printf("\n");

    // 2. Rainha (Recursividade) - 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    mover(8, "Esquerda");
    printf("\n");

    // 3. Bispo (Loops Aninhados) - 5 casas diagonal (Cima, Direita)
    // Loop externo (for) vertical, Loop interno (while) horizontal.
    printf("Movimento do Bispo:\n");
    int horiz = 0; 
    for (int vert = 0; vert < 5; vert++) {
        while (horiz < 1) { 
            printf("Cima, Direita\n");
            horiz++; 
        }
        horiz = 0;
    }
    printf("\n");

    // 4. Cavalo (Loops Complexos) - 2 casas para Cima e 1 para Direita
    // Loops aninhados com controle de fluxo (break).
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");

        // Curva após o segundo passo vertical (i == 1)
        if (i == 1) {
            // Loop interno com break para garantir apenas 1 passo lateral
            for (int j = 0; j < 5; j++) {
                printf("Direita\n");
                break; // Controle de fluxo avançado
            }
        }
    }

    return 0;
}