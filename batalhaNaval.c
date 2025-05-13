#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10];
    
    // Inicializando todas as posições com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int navio_horizontal[3] = {3, 3, 3};  
    int x_h = 0, y_h = 0; //Escolhendo coordenadas iniciais do Navio horizontal 

    // Posicionando navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_h][y_h + i] = navio_horizontal[i]; // Movendo na horizontal
    }

    int navio_vertical[3] = {3, 3, 3};  
    int x_v = 6, y_v = 8; //Escolhendo coordenadas iniciais do Navio vertical

    // Posicionando navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_v + i][y_v] = navio_vertical[i]; // Movendo na vertical
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int navio_diagonal1[3] = {3, 3, 3};
    int x_d = 5, y_d = 3; // Escolhendo coordenada inicial para o navio diagonal

    // Posicionando o navio na diagonal
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_d + i][y_d + i] = navio_diagonal1[i]; 
    }

    int navio_diagonal2[3] = {3, 3, 3};
    int x_d2 = 8, y_d2 = 4; // Escolhendo coordenada inicial para o navio diagonal

    // Posicionando o navio na diagonal
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_d2 - i][y_d2 - i] = navio_diagonal2[i];
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    
    // Exibindo o tabuleiro
    printf("**TABULEIRO BATALHA NAVAL**\n");
    printf("  "); // Espaço para alinhamento
    
    // Imprimir os cabeçalhos das colunas
    for (int j = 0; j < 10; j++) {
        printf(" %d", coluna[j]);
    }
    
    printf("\n");

    // Imprimir as linhas com os identificadores
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]); // Imprimir a letra da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]); // Imprimir valores do tabuleiro
        }
        printf("\n");
    }

    return 0;
}
