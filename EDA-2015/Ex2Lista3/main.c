#include <stdio.h>
#include <stdlib.h>
#include "../PilhaGenerica/PilhaGenerica.h" 
int main()
{
  PilhaGenerica p;
  inicializa_pilha(&p,32,sizeof(int));
  int n;
  scanf("%i",&n);
  while(n!=0){
     int resto = n%2;
     empilha(&p,&resto);
     n=n/2;
  }
  while(!pilha_vazia(p)){
     int x;
     desempilha(&p,&x);
     printf("%i", x);
  }
  printf("\n");
  system("PAUSE");	
  return 0;
}
