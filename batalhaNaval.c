/*
 * Programa: Batalha Naval
 * Descrição: Este programa simula um tabuleiro de batalha naval 10x10,
 * onde diferentes tipos de navios são posicionados na matriz.
 * - 0: Água (posição vazia)
 * - 1: Navio tipo 1 (cruz)
 * - 2: Navio tipo 2 (diamante)
 * - 3: Navio tipo 3 (triângulo)
 * O programa inicializa o tabuleiro, posiciona os navios e imprime o tabuleiro.
 */

#include <stdio.h>
#include <stdlib.h> // Necessário para a função abs()

int main(){

    int matriz [10] [10]; // Matriz 10x10 representando o tabuleiro
    int i, j; // Variáveis de loop

    // Preenche a matriz com 0 (água)
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            matriz[i][j] = 0;
        }
    }

    // Posiciona navio tipo 3 (triângulo) centrado em (6,6)
    int centro = 6;
    for (i = 0; i < 3; i++){
        for (j = -i; j <= i; j++){
            matriz[centro + i][centro + j] = 3;
        }
    }

    // Posiciona navio tipo 1 (cruz) centrado em (6,2)
    int linhacruz = 6;
    int colunacruz = 2;
    for (i = -1; i <= 1; i++){
        matriz[linhacruz][colunacruz + i] = 1;
        matriz[linhacruz + i][colunacruz] = 1;
        
    }

    // Posiciona navio tipo 2 (diamante) centrado em (3,6) com tamanho 2
    int centrolinha = 3;
    int centrocoluna = 6;
    int tamanho  = 2;
    for (i = -tamanho; i <= tamanho; i++)
    {
        for (j = -tamanho; j <= tamanho; j++)
        {
            if (abs(i) + abs(j) <= tamanho)
            {
                matriz[centrolinha + i][centrocoluna + j] = 2;
            }
            
        }
    }

    // Imprime cabeçalho das colunas (A a J)
    printf("   ");
    for (j = 0; j < 10; j++){
    
        printf("%3c", 'A' + j);
        if (j == 9){
            printf("\n");
        }
    }
    printf("\n");

    // Imprime o tabuleiro com números das linhas (1 a 10) e valores da matriz
    for (i = 0; i < 10; i++){
        printf("%2d ", 1 + i);   

        for (j = 0; j < 10; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}