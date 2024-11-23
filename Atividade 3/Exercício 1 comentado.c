#include <stdio.h>

/* 1. Analise o c�digo de programa abaixo, execute em seu computador e comente cada linha, explicando o
c�digo. Al�m disso, refa�a o c�digo, criando uma fun��o que permite ao usu�rio digitar todos os dados
do vetor pessoas[]. */

typedef struct{ // Cria  a struct com os atributos peso, idade e altura
	double peso;
	int idade;
	double altura;
} pessoa; // Define a assinatura como pessoa

void imprimePessoa(pessoa p){ // Fun��o para imprimir os dados da struct pessoa (peso, idade, altura)
	printf("Peso: %lf. Idade: %d. Altura: %lf.\n\n", p.peso, p.idade, p.altura);
}

int main(){
	pessoa pessoas[5], p1; //cria o array pessoas referenciando a struct pessoa
	
	pessoas[0].peso = 80.6; // Atribui o valor 80.6 para o peso da posi��o 0 do array pessoa
	pessoas[0].idade = 40; // atribui o valor 40 para a idade da posi��o 0 do array pessoa
	pessoas[0].altura = 1.70; // atribui o valor 1.70 para a altura da posi��o 0 do array pessoa
	
	p1 = pessoas[0]; // atribui os mesmos valores da posi��o 0 do array pessoas para a vari�vel p1c
	
	if(p1.idade > 20){
		p1.idade++; // caso a idade da vari�vel p1 seja maior que 20, soma-se mais um o valor da idade
	}
	
	pessoas[1] = pessoas[0]; // atribui o mesmo valor da posi��o 0 para a posi��o 1 do array pessoas
	imprimePessoa(p1); // imprime o valor da vari�vel p1
	imprimePessoa(pessoas[0]); // imprime os valores da posi��o 0 do array pessoas
	imprimePessoa(pessoas[1]); // imprime os valores da posi��o 1 do array pessoas
	imprimePessoa(pessoas[2]); // imprime os valores da posi��o 2 do array pessoas, que n�o foram atr�buidos no programa
	imprimePessoa(pessoas[3]); // imprime os valores da posi��o 3 do array pessoas, que n�o foram atr�buidos no programa
	imprimePessoa(pessoas[4]); // imprime os valores da posi��o 4 do array pessoas, que n�o foram atr�buidos no programa
}
