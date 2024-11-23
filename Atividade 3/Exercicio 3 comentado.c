/******************************************************************************
3. Analise o código de programa abaixo, execute em seu computador e comente cada linha, explicando o
código.
*******************************************************************************/
#include <stdio.h>

// Função para calcular a soma dos elementos de um vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0; // declaração das variáveis inteiras i e soma
    for (i = 0; i < n; i++) {
        soma += v[i]; // Soma o valor de soma com o valor do índice da vez no loop for
    }
    return soma;
}

int main() {
    // declaração das variáveis inteiras vetor, i e resultado
    int vetor[5], i, resultado;

    // Preenchendo o vetor com valores (i * 2)
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;
    }

    // Calculando a soma dos elementos de um vetor com tamanho de 5
    resultado = calcularResultado(vetor, 5);

    // Exibindo o resultado
    printf("O resultado é: %d\n", resultado);

    return 0;
}

