// Henrique Biciato Lucila
#include <stdio.h>

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += (5 * i * i + 2 * i + 8);
    }
    return soma;
}

int main() {
    int n;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("O resultado do somatório da fórmula de 1 até %d é: %d\n", n, somatorio(n));
    
    return 0;
}
