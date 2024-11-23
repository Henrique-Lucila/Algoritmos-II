#include <stdio.h>

typedef struct //Cria uma STRUCT para armazenar os dados de uma pessoa
{
    float Peso; // define o campo Peso
    int Idade; // define o campo Idade
    float Altura; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

void ImprimePessoa(Pessoa P) // declara o parâmetro como uma struct
{
    printf("Idade: %d Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
}

int main(){
    Pessoa Aluno1, Aluno2, P1, P2;
    Pessoa Pessoas[10];
    
    Aluno1.Idade = 20;
    Aluno1.Peso = 55.5;
    Aluno1.Altura = 1.55;
    
    Pessoas[4].Idade = 21;
    Pessoas[4].Peso = 75.0;
    Pessoas[4].Altura = 1.75;
    
    P2 = Pessoas[4];
    P2.Idade++;
    
    // chama a função que recebe a struct como parâmetro
    ImprimePessoa(Aluno1);
    ImprimePessoa(Pessoas[4]);
    ImprimePessoa(P2);
return 0;
}
