#include <stdio.h> /// carregando a biblioteca Standard Input Output /// diretiva de compilação 
#include <conio.h> ///  diretiva para compilar c on imput output para usar o comando getchar 
#include <stdlib.h> /// diretiva de compilação standrd library para usar o comando system 

float saldo; //declarando a variavel "saldo" do tipo real na memoria do computador 

void Depositar(float quanto) { // função depositar (o que esta entre parentese e uma assinatura da função) 
	if (quanto <= 0){
		printf("\n Atencao!!! Coloca dinheiro nessa bagaça ai !!!" );
	}
	else {
	saldo = saldo + quanto;
	printf ("\n Deposito realizado com sucesso!!!");
	}
}
	
void Sacar (float quanto ) {
	if (quanto <= 0){
		printf("\n Atencao!!! seu quebro voce nao tem dinheiro !!!" );
	}
	if (quanto <= saldo) {
		saldo = saldo - quanto;
		printf ("\n Saque realizado com sucesso!!!");
	}
	else 
	printf ("\n Saldo insuficiente na conta?! ");
}

void consultarSaldo () {
	printf("\n O saldo em conta corrente -> %2.2f",saldo );
}

int impriMenu(){
	system ("cls");
	printf(" \n\n Esse foi ou esta sendo um programa !!");
	printf(" \n ");
	printf(" \n 1 - Consultar Saldo ");
	printf(" \n 2 - Depositar ");
	printf(" \n 3 - Sacar ");
	printf(" \n 4 - Sair");
	printf(" \n ");
	printf(" \n Informe a sua opcao:");
	int resposta;
	scanf ("%d" ,&resposta);
	return(resposta);
}

int main () {  /// metodo principal do programa. retorna inteiro 
	int opcao;
	float valor;
	do {
	
		opcao = impriMenu ();
		if (opcao == 1){
			consultarSaldo();
		}
	else if (opcao == 2){
		printf(" \n Informe o valor a depositar: ");
		scanf ("%f" ,&valor);
		Depositar(valor);
		}
	
	else if (opcao == 3) {
		printf (" \n fala o valor abestado: ");
		scanf("%f" ,&valor);
		Sacar(valor);
	}
	getch();
}
	while (opcao < 4);
	printf ("\n\n sai fora do meu banco!!! ");
	getch ();
	
	
}
