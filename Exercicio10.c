#include <stdio.h>

int main() {
    int n, i, numero, maior;

    // Solicita a quantidade de números
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    // Solicita o primeiro número e assume que ele é o maior inicialmente
    printf("Digite o 1º numero: ");
    scanf("%d", &maior);

    // Lê os demais números e verifica se algum é maior
    for (i = 2; i <= n; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numero);
        
        if (numero > maior) {
            maior = numero;  // Atualiza o maior número se encontrar um maior
        }
    }

    // Exibe o maior número
    printf("O maior numero é: %d\n", maior);

    return 0;
}
