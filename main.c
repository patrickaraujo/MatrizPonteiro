/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main() {
    int mat[TAM][TAM] = {
        { 1,  2,  3,  4,  5},
        { 6,  7,  8,  9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int i, j;
    int *p = &mat[0][0];

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            int index = (i * TAM) + j;  //    Calcula o índice linear correspondente ao elemento mat[i][j]
            printf("mat[%d][%d] = %2d  ", i, j, *(p + index));
        }
        printf("\n");
    }

    return 0;
}
