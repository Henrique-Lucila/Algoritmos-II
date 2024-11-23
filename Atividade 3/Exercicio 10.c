/******************************************************************************
10. Escreva um algoritmo em C que receba dois números inteiros do usuário e exiba o maior deles, a
verificação do maior, deve ser feita dentro de uma função. Se os números forem iguais, exiba uma
mensagem indicando que eles são iguais. Utilize uma função com a seguinte assinatura: void
maiorNumero(int num1, int num2);
*******************************************************************************/
#include <stdio.h>

void maiorNumero(int num1, int num2){
    
    if(num1 == num2){
        printf("Números iguais");
    } else{
        if(num1 > num2){
            printf("Maior número: %d", num1);
        } else{
            printf("Maior número: %d", num2);
        }
    }
}

int main()
{
    int n1, n2;
    
    printf("Digite o 1° número: ");
    scanf("%d", &n1);
    
    printf("Digite o 2° número: ");
    scanf("%d", &n2);
    
    maiorNumero(n1, n2);
    return 0;
}

