#include <stdio.h>

int main() {
    
    // Nível Novato - Movimentação das Peças
    
    // Torre
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    int casasBispo = 0;
    while (casasBispo < 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }

    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo

    // Lógica de loops aninhados:
    // O loop externo controla o movimento vertical (2 casas)
    // O loop interno controla o movimento horizontal (1 casa)
    // Usamos um 'if' para garantir que a curva aconteça apenas após a segunda casa vertical
    
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");

        if (i == 1) {
            int j = 0;
            while (j < 1) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}