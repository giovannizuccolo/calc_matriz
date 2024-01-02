#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");      // setlocale for accents

    int matriz_um[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};             // declarando a matriz_um
    int matriz_dois[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};           // declarando a matriz_dois
    int i, j;

    // solicitando os valores da matriz_um    
    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            printf("Digite um valor para a matriz_um na posição a %d,%d >>  ", i+1, j+1);
            scanf("%d" , &matriz_um[i][j]);    
        }
    }

    printf("---------------------------------------------------------\n");

    // solicitando os valores da matriz_dois
    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            printf("Digite um valor para a matriz_dois na posição a %d,%d >>  ", i+1, j+1);
            scanf("%d" , &matriz_dois[i][j]);    
        }
    }

    // exibindo as matrizes
    printf("---------------\n");

    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            printf("  %d " , matriz_um[i][j]);    
        }
     printf("\n");
    }

    printf("---------------\n");
    
    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            printf("  %d ", matriz_dois[i][j]);    
        }
     printf("\n");
    }

    printf("---------------\n");

}