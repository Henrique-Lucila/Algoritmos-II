// Henrique Biciato Lucila
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0; // Caso base 1: o 0º termo é 0
    } else if (n == 1) {
        return 1; // Caso base 2: o 1º termo é 1
    } else {
        // Recursão para calcular os termos anteriores e somá-los
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("O %d-ésimo termo da série de Fibonacci é: %d\n", n, fibonacci(n));

    return 0;
}
