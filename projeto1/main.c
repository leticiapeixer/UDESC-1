#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char *argv[])
{
 int n;
 scanf("%i", &n);
 int f = fatorial(n);
 printf("%i! e %i\n", n,f);
 system("PAUSE");
 
 return 0;
 
}
