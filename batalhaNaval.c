#include <stdio.h>

int main(){

    int matriz [10] [10];
    int i, j;

    //preenche a matriz com 0
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            matriz[i][j] = 0;
        }
    }

    matriz[6][8] = 3;
    matriz[7][8] = 3;
    matriz[8][8] = 3;

    matriz[3][4] = 3;
    matriz[3][5] = 3;
    matriz[3][6] = 3;


    printf("   ");
    for (j = 0; j < 10; j++){
    
        printf("%3c", 'A' + j);
        if (j == 9){
            printf("\n");
        }
    }
    printf("\n");

    for (i = 0; i < 10; i++){
        printf("%2d ", 1 + i);   

        for (j = 0; j < 10; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}