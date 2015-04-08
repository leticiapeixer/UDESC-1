#define ERRO_FILA_CHEIA 2
#define ERRO_FILA_VAZIA 3


typedef struct {
       int *dados;
       int inicio,fim,num_ele;
       int capacidade;
}Fila;

void inicializa_fila(Fila *f,int c);

int inserir(Fila *f,int info);

int remover(Fila *f,int *info);

void mostra_fila(Fila *f);

int fila_cheia(Fila f);

int fila_vazia(Fila f);
