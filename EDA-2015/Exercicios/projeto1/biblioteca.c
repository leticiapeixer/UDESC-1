#include "biblioteca.h"

int fatorial (int x){
    int fat=1;
    while(x>0){
     fat *= x;
     x--;
    }
    return fat;
}
