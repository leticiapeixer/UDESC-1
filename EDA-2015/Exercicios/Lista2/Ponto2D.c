#include "Ponto2D.h"
#include <stdio.h>
#include <math.h>

void inicializa_ponto(Ponto2D *ponto, int x, int y){

    ponto -> pontoX = x;
    ponto -> pontoY = y;

}

float calcula_distancia(Ponto2D a, Ponto2D b){
    float dist;

    dist = sqrt(pow(b.pontoX - a.pontoX, 2) + pow(b.pontoY - a.pontoY, 2));

    return dist;
}

int le_cord_x(Ponto2D ponto){
    return ponto.pontoX;
}

int le_cord_y(Ponto2D ponto){
    return ponto.pontoY;
}

void mostra_ponto(Ponto2D ponto){
    printf("As coordenadas são (%d,%d)\n", ponto.pontoX, ponto.pontoY);
}
