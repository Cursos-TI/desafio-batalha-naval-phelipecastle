#include <stdio.h>

#define lines 10
#define columns 10
#define lGeo 5
#define cGeo 5

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    char letter[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int board[lines][columns];
    int soma = 0;
    int cone[lGeo][cGeo], cross[lGeo][cGeo], octahedron[lGeo][cGeo];

    for (int k = 0; k < 10; k++)
    {
        printf(" ");
        printf("%c", letter[k]);
    }
    printf("\n");

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            board[i][j] = 0;
            if (
                (i == 2 && (j >= 3 && j <= 5)) ||
                (i >= 4 && i <= 6 && (j == 4)) ||
                (i >= 5 && i <= 7) && (i == j) ||
                (i >= 7 && i <= 9) && (j == (9 - i)))
            {
                board[i][j] = 3;
            }
            // Habilidade do CONE
            if (
                (i >= 0 && i <= 2 && j == 4) ||
                (i == 1 && j >= 3 && j <= 5) ||
                (i == 2 && j >= 2 && j <= 6))
            {
                board[i][j] = 1;
            }
            // Habilidade do OCTAEDRO
            if (
                (i >= 0 && i <= 2 && j == 8) ||
                (i == 1 && j >= 7 && j <= 9))
            {
                board[i][j] = 2;
            }
            // Habilidade da Cruz
            if (
                (i >= 6 && i <= 9 && j == 2) ||
                (i == 7 && j >= 0 && j <= 4))
            {
                board[i][j] = 7;
            }

            printf(" ");
            printf("%d", board[i][j]);
        }

        printf("\n");
    }
    printf("\n");
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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

    return 0;
}
