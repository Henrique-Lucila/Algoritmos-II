// Henrique Biciato Lucila
#include <stdio.h>

int soma(int numeros[], int tamanho) {
    int soma = 0;
    
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    
    return soma;
}

int main() {
    int numeros[3];
    int resultado;

    for (int i = 0; i < 3; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    resultado = soma(numeros, 3);
    printf("Soma dos números digitados: %d\n", resultado);
    
    return 0;
}
