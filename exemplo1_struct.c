
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Aluno {
	char nome[100];
	float nota1, nota2, nota3, nota4; 
};

int main(){
    setlocale(LC_ALL, "portuguese");
	struct Aluno aluno;
	
	strcpy(aluno.nome, "João da Silva");
	aluno.nota1 = 7.5;
	aluno.nota2 = 8.5;
	aluno.nota3 = 9.5;
	aluno.nota4 = 10;
	
	printf("Nome: %s\n", aluno.nome);
	printf("Nota 1: %.2f\n", aluno.nota1);
	printf("Nota 2: %.2f\n", aluno.nota2);
	printf("Nota 3: %.2f\n", aluno.nota3);
	printf("Nota 4: %.2f\n", aluno.nota4); 
}