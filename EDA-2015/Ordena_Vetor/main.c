#include <stdio.h>
#include <stdlib.h>

int compara_int(int x, int y){
    return x-y;
}

void ordena_vetor(int v[], int tam, int(*compara)(int,int)){
     int i,j;
     for(i=0;i<tam-1;i++){
        int i_menor=i;
        for(j=i+1;j<tam;j++){
           if(compara(v[j],v[i_menor])<0){
              i_menor = j;
           }
        }
        int aux=v[i];
        v[i]=v[i_menor];
        v[i_menor]=aux;                          
     }                          
}

void mostra_vetor(int v[], int n){
   int i;
   for(i=0;i<n;i++){
      printf("%i\n",v[i]);
   }                 
}

int main(int argc, char *argv[])
{
  int v[]={4,6,-1,0,10,8};
  int n=6;
  
  ordena_vetor(v,n,compara_int);
  mostra_vetor(v,n);
  
  system("PAUSE");	
  return 0;
}
