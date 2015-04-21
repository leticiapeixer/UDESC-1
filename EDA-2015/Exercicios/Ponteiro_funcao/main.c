#include <stdio.h>
#include <stdlib.h>

int compara_int(int x, int y){
    return x-y;
}

int main(){
  int a,b;
  scanf("%i %i", &a, &b);
  int(*f1)(int,int);
  
  f1=compara_int;
  if(f1(a,b)==0)
     printf("Iguais.\n");
  else
     printf("Diferentes.\n");
      
  system("PAUSE");	
  return 0;
}
