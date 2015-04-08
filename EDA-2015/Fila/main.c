#include "Fila.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
Fila f1;
inicializa_fila(&f1,10);
int x=2;   
inserir(&f1,x) ;
x=4;   
inserir(&f1,x);
x=8;   
inserir(&f1,x);
mostra_fila(&f1);
int y;
remover(&f1,&y);
printf("\n\n-------");
mostra_fila(&f1);
system("pause");
return 0;
}


