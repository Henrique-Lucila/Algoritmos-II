/******************************************************************************
9. Escreva um algoritmo em C que cria um vetor com valores digitados pelo usuário, faça uma função para
multiplicar os valores do vetor e imprime o resultado da multiplicação.
*******************************************************************************/
#include <stdio.h>

void multiplicarVetor(int vetor[], int tamanho){
    
    int resultado = vetor[0];
    
    for (int i = 1; i < tamanho; i++){
        resultado *= vetor[i];
    }
    
    printf("\nMultiplicação com os valores do vetor: %d", resultado);
}

int main()
{
    int vetor[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    multiplicarVetor(vetor, 5);
    return 0;
}

