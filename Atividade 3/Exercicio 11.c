/******************************************************************************
11. Escreva um algoritmo em C que receba três números inteiros e exiba o menor deles. O programa deve
solicitar os valores ao usuário e utilizar uma função para retornar o menor valor com a seguinte
assinatura: int menorNumero(int num1, int num2, int num3);
*******************************************************************************/
#include <stdio.h>

int menorNumero(int num1, int num2, int num3){
    
    
    if(num1 < num2 && num1 < num3){
        return num1;
    } else if(num2 < num1 && num2 < num3){
        return num2;
    } else if(num3 < num1 && num3 < num2){
        return num3;
    }
}

int main()
{
    int n1, n2, n3;
    
    printf("Digite o 1° número: ");
    scanf("%d", &n1);
    
    printf("Digite o 2° número: ");
    scanf("%d", &n2);
    
    printf("Digite o 3° número: ");
    scanf("%d", &n3);
    
    
    int menor = menorNumero(n1, n2, n3);
    
    printf("\nMenor número: %d", menor);
    
    return 0;
}

