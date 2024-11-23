/******************************************************************************
4. Faça um programa que chama uma função para calcular a média aritmética de 4 notas de um aluno,
imprima a média e mensagem aprovado se média maior ou igual a 7 e reprovado caso contrário.
*******************************************************************************/
#include <stdio.h>

void calcularMedia(float a, float b, float c, float d){
    float media = (a + b + c + d) / 4;
    printf("\n\nMédia: %.2f\n", media);
    
    if(media >= 7){
        printf("Aprovado");
    } else{
        printf("Reprovado");
    }
}

int main()
{
    float n1, n2, n3, n4;
    
    printf("Digite a nota 1: "); scanf("%f", &n1);
    printf("Digite a nota 2: "); scanf("%f", &n2);
    printf("Digite a nota 3: "); scanf("%f", &n3);
    printf("Digite a nota 4: "); scanf("%f", &n4);
    
    calcularMedia(n1, n2, n3, n4);
    return 0;
}