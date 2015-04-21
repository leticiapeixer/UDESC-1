#include "conta.h"
#include <stdio.h>

void init_conta(Conta *c, int n, float s){
     c -> codigo = n;
     c -> saldo = s; 
}

void saque(Conta *c, float valor){
     c -> saldo = valor;
}

void deposito(Conta *c, float valor){
     c -> saldo += valor;
}

void transf(Conta *origem, Conta *destino, float valor){
     saque(origem, valor);
     deposito(destino, valor);
}

void mostra_conta(Conta c){
     printf("Numero da conta: %i \n", c.codigo);
     printf("Saldo da conta: R$ %.2f \n", c.saldo);
}
