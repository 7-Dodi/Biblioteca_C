//Chamando a fun��es e as especificando para a cria��o da biblioteca
typedef struct nodo Nodo;

typedef struct fila Fila;

Fila *criarFila();

void inserir (Fila *fila, int num);

int quantNum (Fila *fila);

int maiorNum (Fila *fila);

int posicaoNum (Fila *fila);

int imprimir (Fila *fila);

int estavazia (Fila *fila);
