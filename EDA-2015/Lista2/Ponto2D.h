typedef struct{
    int pontoX;
    int pontoY;
}Ponto2D;

void inicializa_ponto(Ponto2D *ponto, int x, int y);

float calcula_distancia(Ponto2D pontoA, Ponto2D pontoB);

int le_cord_x(Ponto2D ponto);

int le_cord_y(Ponto2D ponto);

void mostra_ponto(Ponto2D ponto);
