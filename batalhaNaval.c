#include <stdio.h>

int main(){

    int matriz [10] [10];
    int i, j;
    int coluna;
    char linha;
    char direcao;

    //preenche a matriz com 0
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            matriz[i][j] = 0;
        }
    }
    //--------TABULEIRO VAZIO---------
    printf("Escolha a linha do navio de ( A - Z): ");
    scanf(" %c", &linha);

    printf("Escolha a coluna do navio de (1 - 10): ");
    scanf("%d", &coluna);

    printf("Direcao do navio (H = Horizontal, V = Vertical): ");
    scanf(" %c", &direcao);

    //Converte letra minuscula para maiuscula
    if (linha >= 'a' && linha <= 'z'){
        linha = linha - 32;
        }
    if (direcao >= 'a' && direcao <= 'z'){
        direcao = direcao - 32;
    }

    //Converte para index
    int linha_index = linha - 'A';
    int coluna_index = coluna - 1;

    //Coloca o navio
    if ( direcao == 'H'){
        for (j = 0; j < 3; j++){
            matriz[linha_index][coluna_index + j] = 3;
        }
    }
    if ( direcao == 'V'){
         for (i = 0; i < 3; i++){
            matriz[linha_index + i][coluna_index] = 3;
        }
    }


    //--------TABULEIRO ATUALIZADO---------
    printf("\nTabuleiro atualizado:\n");

    printf("  ");
    for (j = 0; j < 10; j++){
        printf("%3d", j + 1);
    }
    printf("\n");

    for (i = 0; i < 10; i++){
        printf("%c ", 'A' + i);
        for (j = 0; j < 10; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}