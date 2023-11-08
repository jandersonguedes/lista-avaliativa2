#include <stdio.h>
#include <string.h>

void mostrarMatriz(int matriz[4][4]) {
	int i;
	int j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[4][4];
    int matriz2[4][4];
    int matriz3[4][4];
    int i;
    int j;
    int k;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    char opcao[5];
    scanf("%s", opcao);

    if (strcmp(opcao, "soma") == 0) {

	    for (i = 0; i < 4; i++) {
	        for (j = 0; j < 4; j++) {
	            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
	        }
	    }

    	mostrarMatriz(matriz3);
    	
    } else if (strcmp(opcao, "sub") == 0) {

	    for (i = 0; i < 4; i++) {
	        for (j = 0; j < 4; j++) {
	            matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
	        }
	    }

    	mostrarMatriz(matriz3);
	    
    } else if (strcmp(opcao, "mult") == 0) {
    	
	    for (i = 0; i < 4; i++) {
	        for (j = 0; j < 4; j++) {
	            int temp = 0;
	            for (k = 0; k < 4; k++) {
	                temp += matriz1[i][k] * matriz2[k][j];
	            }
	            matriz3[i][j] = temp;
	        }
	    }
    	
    	mostrarMatriz(matriz3);
    	
    }

    return 0;
}

