#include "conta.h"	
int main(){

Conta a, b;
init_conta(&a, 123, 1000);
init_conta(&b, 456, 500);

     float v=100;

     saque(&a, v);

     v = 50;
	
	deposito(&b, v);
	
	transf(&a, &b, 600);

	mostra_conta(a);

	system("PAUSE");
    return 0;
}

