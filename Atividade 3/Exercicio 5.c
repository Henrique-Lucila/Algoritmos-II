/******************************************************************************
5. Escreva um algoritmo em C que utilize uma função para exibir todos os números ímpares de 1 até um
número fornecido pelo usuário, exceto os múltiplos de 7.
*******************************************************************************/
#include <stdio.h>

void exibirImpares(int n){
    
    for (int i = 0; i <= n; i++){
        if(i % 2 != 0 && i % 7 != 0){
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;
    
    printf("Digite um número: "); 
    scanf("%d", &n);
    
    exibirImpares(n);
    return 0;
}