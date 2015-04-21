#define ERROFILA_CHEIA -1
#define ERROFILA_VAZIA -2

typedef struct{
        int *dados;
        int inicio, fim, num_ele;
        int capacidade;
        }Fila;
        
        
        
void inicializa_fila(Fila *f, int c);

int inserir(Fila *f, int info);
     
int fila_cheia(Fila f);
     
int fila_vazia(Fila f);
     
int remover(Fila *f, int *info);

void mostra_fila(Fila f);
        
