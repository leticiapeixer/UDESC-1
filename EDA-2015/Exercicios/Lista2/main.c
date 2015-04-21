#include <stdio.h>
#include "Ponto2D.h"

int main(){
    Ponto2D a, b;
    inicializa_ponto(&a, 5, 7);
    inicializa_ponto(&b, 0, 4);

    float dist = calcula_distancia(a,b);

    mostra_ponto(a);
    mostra_ponto(b);

    int x = le_cord_x(a);
    int y = le_cord_y(b);

    printf("Distancia %.2f\n", dist);
    printf("Ponto x de a %d\n", x);
    printf("Ponto y de b %d\n", y);

    system("PAUSE");
    return 0;
}
