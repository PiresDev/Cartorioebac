#include <stdio.h> //biblioteca de comunicacao com o usuario
#include <stdlib.h> //biblioteca de alocacao de espaco de memoria
#include <locale.h> //biblioteca de alocacao de texto por regiao
#include <string.h>
int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("digite o cpf a ser cadastrado: ");
	scanf("%s",cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;// cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf);// salva o valor da variavel
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o sobre nome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado: ");
	scanf("%S",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
}
int consulta()
{
	char cpf[40];
	char conteudo[200];
	printf("digite o cpf a ser consultado:");
	scanf("%s" ,cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL){
		printf("Nao foi possivel abrir o arquivo, nao localizado!.");
	}
	while(fgets(conteudo, 200, file) != NULL){
		printf("\n Essas sao as informacoes do usuario:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}
int deletar()
{
	
	char cpf[40];
	
	printf("Digite o cpf a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL){
		printf("O usuario nao se encontra no sistema!. \n");
		printf("pause");
	}
	
	
	
	
}

	


int main()
{
	int opcao=0; //Definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	
	system("cls");
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	printf("### Cartorio da EBAC ###\n\n");
	printf("Escolha a opcao desejada do menu:\n\n"); //Inicio do menu
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("\t4 - sair do sistema\n\n");
	printf("Opcao:");//Fim do menu
	
	scanf("%d", &opcao); //armazenando a escolha do usuario
	
	system("cls");
	
	
	switch(opcao)
	{
	   case 1:
	   	registro();
		break;
		
		case 2:	
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf(" Obrunigado por sair do sistema");
		return 0;
		break;	
		
		default:
		if(opcao>=4 || opcao<=0)
	
		printf("Essa opcao nao esta disponivel! \n");
		system("pause");
		break;	
	}	
	
  }
}
	
	//Fim da selecao

	
	

