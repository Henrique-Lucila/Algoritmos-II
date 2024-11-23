#include <stdio.h>

/* 1. Analise o c�digo de programa abaixo, execute em seu computador e comente cada linha, explicando o
c�digo. Al�m disso, refa�a o c�digo, criando uma fun��o que permite ao usu�rio digitar todos os dados
do vetor pessoas[]. */

typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

void imprimePessoa(pessoa p) {
    printf("Peso: %.2lf\n", p.peso);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2lf\n\n", p.altura);
}

void lerPessoa(pessoa* p) {
    printf("Peso: ");
    scanf("%lf", &p->peso);

    printf("Idade: ");
    scanf("%d", &p->idade);

    printf("Altura: ");
    scanf("%lf", &p->altura); 
}

int main() {
    pessoa pessoas[5];

    for (int i = 0; i < 5; i++) {
        printf("\nDados da pessoa %d:\n", i + 1);
        lerPessoa(&pessoas[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("\nDados da pessoa %d:\n", i + 1);
        imprimePessoa(pessoas[i]);
    }
	
	return 0;
}
