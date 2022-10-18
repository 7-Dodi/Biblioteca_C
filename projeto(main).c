#include <stdio.h>	//Bibliotecas da Linguagem C
#include <stdlib.h>

#include "demo.h"  //Biblioteca criada, para ler e exercutar a estruturas e funções da FILA
void main(){
	int num; //Ler um numero, escolhido pelo usuario, sendo este diferente de 0
	Fila *fila= criarFila(); //Chamando a função CRIARFILA
	printf("\n\n############################ ENTRADA ###################################\n");
	printf("\n1-Esse programa eh baseado em Fila, lendo e apresentando alguns dados;\n2-Sera retornado, a quantidade, maior termo da Fila bem como sua posicao;\n3-Imprimir todos os termos informaodos.\n");
	printf("------------------------------------------------------------------------------");	
	printf("\nTudo certo?... Clique em qualquer tecla para  prosseguir");
	getch();
	printf("\n\nInforme um numero inteiro:");
	scanf("%d", & num);
	while(num!=0){
		inserir(fila, num);  //Adicionando o numero na estrutura Fila
		printf("\nInforme um numero inteiro:");
		scanf("%d", & num);
	}
	printf("\n\n########### IMPRIMINDO OS DADOS ###############\n\n");     //////
	printf("\nA quantidade de numeros da Fila eh: %d\n", quantNum(fila));     //
	printf("\nO maior numero informado eh: %d\n", maiorNum(fila));           //// Imprimindo os dados da estrutura;
	printf("\nA posicao do maior numero eh:%d\n", posicaoNum(fila));        //
	printf("\n\n############# IMPRIMINDO A LISTA ##############\n\n");  /////
	while(estavazia(fila)==0){
		num=imprimir(fila);
		printf("%d ", num);
	}
	printf("\nPrograma sendo finalizado.... Clique em qualquer tecla para encerrar"); //Encerrando o Programa;
}

