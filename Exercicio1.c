#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        
    }
    
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }
    
    return 0;
}
