#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");      // setlocale for accents

    int matriz_um[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};             // declarando a matriz_um
    int matriz_dois[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};           // declarando a matriz_dois
    int i, j, opcao;

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
    printf("Matriz_Um >>>  \n");
    printf("---------------\n");
    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            if (j == 0) {
                printf("|");
            }

            printf("  %d " , matriz_um[i][j]);

            if (j == 2) {
                printf("|");
            }
        }
     printf("\n");
    }

    printf("---------------\n");
    printf("Matriz_dois >>>\n");
    printf("---------------\n");
    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            if (j == 0) {
                printf("|");
            }

            printf("  %d ", matriz_dois[i][j]);
            
            if (j == 2) {
                printf("|");
            }    
        }
     printf("\n");
    }

    printf("---------------\n");


    printf("Digite uma opção:\n [ 1 ] somar as duas matrizes.\n [ 2 ] subtrair: matriz_um - matriz_dois.\n [ 3 ] subtrair: matriz_dois - matriz_um.\n >>> ");
    scanf("%d", &opcao);

    int matriz_soma[3][3], matriz_diferença[3][3];

    if(opcao == 1) {
        printf("---------------\n");
        for (i=0; i < 3; i++) {
            for (j=0; j < 3; j++) {
                if (j == 0) {
                printf("|");
                }
                
                matriz_soma[i][j] = matriz_um[i][j] + matriz_dois[i][j];
                printf("  %d ", matriz_soma[i][j]);    

                if (j == 2) {
                printf("|");
                }
        }
        printf("\n");
        }
        printf("---------------\n");
    }

    if (opcao == 2) {
        printf("---------------\n");
        for (i=0; i < 3; i++) {
            for (j=0; j < 3; j++) {
                if (j == 0) {
                printf("|");
                }

                matriz_diferença[i][j] = matriz_um[i][j] - matriz_dois[i][j];
                printf("  %d ", matriz_diferença[i][j]);    
                
                if (j == 2) {
                printf("|");
                }
        }
        printf("\n");
        }
        printf("---------------\n");
    }

     if (opcao == 3) {
        printf("---------------\n");
        for (i=0; i < 3; i++) {
            for (j=0; j < 3; j++) {
                if (j == 0) {
                printf("|");
                }

                matriz_diferença[i][j] = matriz_dois[i][j] - matriz_um[i][j];
                printf("  %d ", matriz_diferença[i][j]);  

                if (j == 2) {
                printf("|");
                }  
        }
        printf("\n");
        }
        printf("---------------\n");
    }

}