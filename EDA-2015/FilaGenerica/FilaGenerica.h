#define ERRO_FILA_CHEIA -1
#define ERRO_FILA_VAZIA -2

typedef struct {
       void **dados;
       int capacidade,inicio,fim,num_ele,tamInfo;
       
}FilaGenerica;

void inicializa_fila(FilaGenerica *f,int c,int t);

int inserir(FilaGenerica *f,void *info);

int remover(FilaGenerica *f,void *info);

void mostra_fila(FilaGenerica f,void(*mostra)(void*));

int fila_cheia(FilaGenerica f);

int fila_vazia(FilaGenerica f);

