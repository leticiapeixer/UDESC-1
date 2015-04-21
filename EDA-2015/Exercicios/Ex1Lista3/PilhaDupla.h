#define ERRO_PILHA_VAZIA -1
#define ERRO_PILHA_CHEIA -2 
typedef struct{
 void **dados;
 int topo1, topo2;
 int capacidade;
 int tamInfo;
} PilhaDupla;

void inicializa(PilhaDupla *p, int c, int t);

int pilha1_vazia(PilhaDupla p);

int pilha2_vazia(PilhaDupla p);

int pilhas_cheias(PilhaDupla p);

int empilha1(PilhaDupla *p, void *info);

int empilha2(PilhaDupla *p, void *info);

int desempilha1(PilhaDupla*p, void *info);

int desempilha2(PilhaDupla*p, void *info);

void mostra_pilha1(PilhaDupla p, void(*mostra)(void*));

void mostra_pilha2(PilhaDupla p, void(*mostra)(void*));

