#include<stdio.h>
#include<locale.h>

void soma_mais_um(int* num) { //pega o endere�o do parametro
	*num = *num + 1;
	printf("Dentro da fun��o: x[4] = %d\n", *num);

}

void ponteirosevetores() {
	int x[] = { 2,16,15,3,10 };
	int *pont;

	pont = &x[0]; // ponteiro apontando para a primeira posi��o do vetor
	
	//o valor do vetor na posi��o 0 ser� alterada nas linhas abaixo;
	*pont = 9; // onde era 2, agora � 9
	*pont = 8; // onde era 9 agora � 8
	*pont = 7; // onde era 8 agora � 7
	*pont = x[4]; // onde era 7 agora � 10 (valor em x[4])

	pont = &x[4]; // ponteiro apontando para a ultima posi��o do vetor

	//o valor do vetor na quinta posi��o( entendida como posi��o 4 ) ser� alterada nas linhas abaixo;
	*pont = 9; // onde era 10, agora � 9
	*pont = 8; // onde era 9 agora � 8
	*pont = 7; // onde era 8 agora � 7
	*pont = x[0]; // onde era 7 agora � 10 (valor em x[0])

	soma_mais_um(&x[4]);

	printf("Fora da fun��o: x[4] = %d\n", x[4]);

}

void ponteiro() {

	int ponteiro1, ponteiro2, ponteiro3, *aponta;

	aponta = &ponteiro1;
	*aponta = 51;

	/*%p para ponteiros*/
	printf("O endere�o de ponteiro1: %p \n", &ponteiro1);
	printf("O endere�o de ponteiro1: %p \n", aponta);
	printf("O valor de ponteiro1: %d \n", *aponta);
	printf("O valor de ponteiro1: %d \n", ponteiro1);
	printf("O endere�o de ponteiro2: %p \n", &ponteiro2);
	printf("O endere�o de ponteiro3: %p \n", &ponteiro3);

}



int main() {

	setlocale(LC_ALL, "Portuguese");
	int* x, * y, c = 5, d = 3;

	x = &c; // 5 -> x aponta para c
	y = &d; //3 -> y aponta para d
	*y = 8; //8 -> alterado o valor existente na vari�vel d
	*x = *y; // 8 -> copia o valor de 'd' (apontado por 'y') para 'c' (apontado por 'x')

	//ENDERE�OS DE MEM�RIA
	/*
		int variavel, *ponteiro; 
		ponteiro = &variavel;
		*ponteiro = 10 // variavel = 10
		variavel = 5 // *ponteiro = 5
		// 0 ao limite de mem�ria(bytes)
	*/
	

	ponteiro();

	//	PONTEIROS E VETORES

	ponteirosevetores();

	return 0;
}