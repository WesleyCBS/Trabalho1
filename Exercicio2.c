#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
       
    }
    
    if (numero > 0) {
        printf("O numero %d e positivo.\n", numero);
    } else if (numero < 0) {
        printf("O numero %d e negativo.\n", numero);
    } else {
        printf("O numero e zero.\n");
    }
    
    return 0;
}