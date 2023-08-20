#include <stdio.h>
#include <ctype.h>


#define NUM 256
int tokenval;
int linha=1, coluna=1;

int analex() {
int ch;
  tokenval = -1;
  while(1) {
	ch = getchar();
	
	while (ch == ' ') {
	  ch = getchar();
	  coluna++;
    }
    
    while (ch == '\t') {
	  ch = getchar();
	  coluna=+ 4;
    }
    
    while (ch == '\n') {
	  ch = getchar();
	  coluna=1;
	  linha++;
    }
    
    if (ch == '+')
	  return '+';
	
	if (ch == '-')
	  return '-';
	
	if (ch == '*')
	  return '*';
	
	if (ch == '/')
	  return '/';
	
	if (ch == '(')
	  return '(';
	
	if (ch == ')')
	  return ')';	 
	   
	if (ch == ';')
	  return ';';
	
	if (isdigit(ch)) {	    
	   tokenval = ch -'0';
	   ch = getchar();
	   while(isdigit(ch)) {
	   	 tokenval = tokenval*10 + ch-'0';
	   	 ch = getchar();
	   }
	   ungetc(ch,stdin);
	   return NUM;
	}
	
	if (ch == EOF) {
		return EOF;
	}
	
	printf("Erro lexico na linha %d!!\n", linha);  
  } 
	    
}


