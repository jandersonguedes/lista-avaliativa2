#include <stdio.h>

int main() {
    int conjunto[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &conjunto[i]);
    }
    
    int qtdElementos = 10;
    
    while (qtdElementos > 0) {
		for (i = 0; i < qtdElementos; i++) {
            printf("%d ", conjunto[i]);
        }
        printf("\n");
        int subConjunto[qtdElementos-1];
        
        for (i = 0; i < qtdElementos; i++) {
            subConjunto[i] = conjunto[i] + conjunto[i + 1];
        }
        
        qtdElementos -= 1;
        
        for (i = 0; i < qtdElementos; i++) {
            conjunto[i] = subConjunto[i];
        }
    }
    
    return 0;
}

