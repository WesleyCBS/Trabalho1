#include <stdio.h>

int main() {
    int n, i, numero, maior;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    printf("Digite o 1º numero: ");
    scanf("%d", &maior);

    for (i = 2; i <= n; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numero);
        
        if (numero > maior) {
            maior = numero; 
        }
    }

    printf("O maior numero é: %d\n", maior);

    return 0;
}
