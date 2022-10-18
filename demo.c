#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{  //Cria a estrutura de armazenamento de dados
	int numero;
	struct nodo *proximo;
}Nodo;
typedef struct{ 
	Nodo *inicio;
}Fila;
Fila *criarFila(){     //Criando a estrutura FILA
	Fila *fila=(Fila*)malloc(sizeof(Fila));
	fila->inicio=NULL;
	return fila;
}
void inserir (Fila *fila, int num){    //Inserindo dados na estrutura de Fila
	Nodo *novo=(Nodo*)malloc(sizeof(Nodo));
	novo->numero=num;
	novo->proximo=NULL;
	if(fila->inicio==NULL){
		fila->inicio=novo;
	}
	else{
		Nodo *aux=fila->inicio;
		while(aux->proximo!=NULL){
			aux=aux->proximo;
		}
		aux->proximo=novo;
	}
}
int quantNum (Fila *fila){   //Verificar a qunatidade de elementos presentes na estrutura
	int cont=0;
	Nodo *aux= fila->inicio;
	while(aux!=NULL){
		cont++;
		aux=aux->proximo;
	}
	return cont;
}
int maiorNum (Fila *fila){    //Verificar o maior elemento da estrutura
	Nodo *aux= fila->inicio;
	int maior= aux->numero;
	while(aux!=NULL){
		if(aux->numero > maior){
			maior=aux->numero;
		}
		aux=aux->proximo;
	}
	return maior;
}
int posicaoNum (Fila *fila){     //Encontrar a posição do maior elemento
	int maior= maiorNum (fila);
	int total= 1;
	Nodo *aux=fila->inicio;
	while(aux!=NULL && aux->numero!=maior){
		total++;
		aux=aux->proximo;	
	}
	return total;
}
int imprimir (Fila *fila){    //Imprimindo a fila
	Nodo *aux= fila->inicio;
	int valor= aux->numero;
	fila->inicio= aux->proximo;
	free(aux);
	return valor;
}
int estavazia (Fila *fila){   //Analisando caso a Fila esteja vazia ou não
	if(fila->inicio==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
