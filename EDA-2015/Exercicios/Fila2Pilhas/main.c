#include <stdio.h>
#include <stdlib.h>
#include "Filha.h"

void mostra_float(void *info)
{
     printf("%.2f\n",*(float *)info);
 }
int main(){
Filha f1;
inicializa(&f1,10,sizeof(float));
float x=2;   
inserir(&f1,&x) ;
x=4;   
inserir(&f1,&x);
x=8;   
inserir(&f1,&x);
mostra_filha(f1,mostra_float);
float y;
remover(&f1,&y);
mostra_filha(f1,mostra_float);
system("pause");
return 0;
}
