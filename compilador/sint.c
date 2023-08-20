#include <stdio.h>
#include <stdlib.h>
#include "analex.c"
#include "pilha.h"

int token;

void E();
void T();
void E_linha();
void T_linha();
void F();

void erro() {
	printf("Erro sintatico na linha %d\n", linha);
	exit(1);
}

void reconhecer(int tok) {
	if (tok == token)
	  token = analex();
	else
	  erro();
}

void E() {
	T();
	E_linha();
}

void E_linha() {
	if (token == '+') {
		reconhecer('+');
		T();
		printf(" + ");
		aux1 = pop();
		aux2 = pop();
		push(aux2+aux1);
		E_linha();
	}
	else if (token == '-') {
		reconhecer('-');
		T();
		printf(" - ");
		aux1 = pop();
		aux2 = pop();
		push(aux2-aux1);
		E_linha();
	}
	else ;
}

void T() {
	F();
	T_linha();
}

void T_linha() {
	if (token == '*') {
		reconhecer('*');
		F();
		printf(" * ");
		aux1 = pop();
		aux2 = pop();
		push(aux2*aux1);
		T_linha();
	}
	else if (token == '/') {
		reconhecer('/');
		F();
		printf(" / ");
		aux1 = pop();
		aux2 = pop();
		push(aux2/aux1);
		T_linha();
	}
	else ;
}

void F() {
	if(token == NUM) {
	printf(" %d ", tokenval);
	push(tokenval);
	  reconhecer(NUM);
    }
    else if (token == '(') {
      reconhecer('(');
	  E();
	  reconhecer(')');
	}
	else erro();
}

main() {
   token = analex();
   E();
   if (token != ';')
     erro();
     else
     printf("\n%f\n", pop());
}

