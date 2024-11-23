/******************************************************************************
7. Crie um vetor em C com valores digitados pelo usuário, crie uma função para encontrar o maior valor,
imprima no console o maior valor e sua posição no vetor (suponha que não há números repetidos no
vetor).
*******************************************************************************/
#include <stdio.h>

void maiorNumero(int vetor[], int tamanho){
    int maior = vetor[0];
    int posicao = 0;
    
    for (int i = 0; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    
    printf("\nMaior Número: %d", maior);
    printf("\nPosição no vetor: %d", posicao);
}

int main()
{
    int vetor[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    maiorNumero(vetor, 5);
    return 0;
}

