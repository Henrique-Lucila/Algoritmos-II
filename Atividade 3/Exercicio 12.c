/******************************************************************************
12. Escreva um algoritmo em C que preencha um vetor de 10 posições com números inteiros fornecidos pelo
usuário. Após o preenchimento, crie uma função para exibir os números na ordem inversa.
*******************************************************************************/
#include <stdio.h>

void ordemInversa(int vetor[], int tamanho){
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d - ", vetor[i]);
    }
}

int main()
{
    int vetor[10];
    
    for(int i = 0; i < 10; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n----- Vetor Original ------\n");
    for(int i = 0; i < 10; i++){
        printf("%d - ", vetor[i]);
    }
    
    printf("\n\n----- Vetor na Ordem Inversa ------\n");
    ordemInversa(vetor, 10);
    
    return 0;
}

