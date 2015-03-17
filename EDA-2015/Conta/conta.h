
typedef struct{
		int codigo;
		float saldo;
}Conta;

void init_conta(Conta *c, int n, float s);
void saque(Conta *c, float valor);
void deposito(Conta *c, float valor);
void transf(Conta *origem, Conta *destino, float valor);
void mostra_conta(Conta c);
