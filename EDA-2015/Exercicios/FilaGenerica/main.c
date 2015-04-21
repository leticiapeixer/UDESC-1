#include "FilaGenerica.h"
#include <stdlib.h>
#include <stdio.h>
void mostra_float(void *info)
{
     printf("%.2f\n",*(float *)info);
 }
int main(){
FilaGenerica f1;
inicializa_fila(&f1,10,sizeof(float));
float x=2;   
inserir(&f1,&x) ;
x=4;   
inserir(&f1,&x);
x=8;   
inserir(&f1,&x);
mostra_fila(f1,mostra_float);
float y;
remover(&f1,&y);
mostra_fila(f1,mostra_float);
system("pause");
return 0;
}


