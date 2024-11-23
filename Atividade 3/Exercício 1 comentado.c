#include <stdio.h>

/* 1. Analise o código de programa abaixo, execute em seu computador e comente cada linha, explicando o
código. Além disso, refaça o código, criando uma função que permite ao usuário digitar todos os dados
do vetor pessoas[]. */

typedef struct{ // Cria  a struct com os atributos peso, idade e altura
	double peso;
	int idade;
	double altura;
} pessoa; // Define a assinatura como pessoa

void imprimePessoa(pessoa p){ // Função para imprimir os dados da struct pessoa (peso, idade, altura)
	printf("Peso: %lf. Idade: %d. Altura: %lf.\n\n", p.peso, p.idade, p.altura);
}

int main(){
	pessoa pessoas[5], p1; //cria o array pessoas referenciando a struct pessoa
	
	pessoas[0].peso = 80.6; // Atribui o valor 80.6 para o peso da posição 0 do array pessoa
	pessoas[0].idade = 40; // atribui o valor 40 para a idade da posição 0 do array pessoa
	pessoas[0].altura = 1.70; // atribui o valor 1.70 para a altura da posição 0 do array pessoa
	
	p1 = pessoas[0]; // atribui os mesmos valores da posição 0 do array pessoas para a variável p1c
	
	if(p1.idade > 20){
		p1.idade++; // caso a idade da variável p1 seja maior que 20, soma-se mais um o valor da idade
	}
	
	pessoas[1] = pessoas[0]; // atribui o mesmo valor da posição 0 para a posição 1 do array pessoas
	imprimePessoa(p1); // imprime o valor da variável p1
	imprimePessoa(pessoas[0]); // imprime os valores da posição 0 do array pessoas
	imprimePessoa(pessoas[1]); // imprime os valores da posição 1 do array pessoas
	imprimePessoa(pessoas[2]); // imprime os valores da posição 2 do array pessoas, que não foram atríbuidos no programa
	imprimePessoa(pessoas[3]); // imprime os valores da posição 3 do array pessoas, que não foram atríbuidos no programa
	imprimePessoa(pessoas[4]); // imprime os valores da posição 4 do array pessoas, que não foram atríbuidos no programa
}
