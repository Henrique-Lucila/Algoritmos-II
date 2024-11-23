/******************************************************************************
6. Crie um vetor em C com valores digitados pelo usuário, crie uma (função para somar os valores), calcule
a média dos valores e imprima o resultado da soma e a média no console.
*******************************************************************************/
#include <stdio.h>

void calculoMediaESoma(int vetor[], int tamanho){
    int soma = 0;
    float media;
    
    for (int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    
    media = soma / 3;
    
    printf("\nSoma: %d", soma);
    printf("\nMédia: %.2f", media);
}

int main()
{
    int vetor[3];
    
    for(int i = 0; i < 3; i++){
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    calculoMediaESoma(vetor, 3);
    return 0;
}