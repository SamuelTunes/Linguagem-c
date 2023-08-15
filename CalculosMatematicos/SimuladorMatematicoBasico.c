#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int arit = 0, geom = 0, func = 0, usu = 0, test = 0;

typedef struct {
   int num1;
   char sinal[2];
   int num2;
}
aritmetica;
aritmetica a[30];
typedef struct {
   int tipo;
   int num1;
   int num2;
   int num3;
}
geometrica;
geometrica g[30];
typedef struct {
   int num1;
   int num2;
   int num3;
}
funcao;
funcao f[30];
typedef struct {
   char nome[20];
   int id;
}
usuario;
usuario u[30];
typedef struct {
   int id;
   int nome;
   int certo;
   int tipo;
}
teste;
teste t[30];
void calculoAritmetico() {
   char conta[4][2] = {
      "+",
      "-",
      "*",
      "/"
   };
   //int i;
   // float result;
   setlocale(LC_ALL, "Portuguese");
   printf("\nDigite o 1º Número:\t");
   scanf("%d", & a[arit].num1);
   printf("\nDigite o 2º Número:\t");
   scanf("%d", & a[arit].num2);
   fflush(stdin);
   printf("\nInforme a operação a ser realizada:\t");
   gets(a[arit].sinal);
   /*
    printf("\n%d",a[arit].num1);
    printf(" %s",a[arit].sinal);
    printf(" %d",a[arit].num2);
    if (strcmp (a[arit].sinal,conta[0])==0){ result = a[arit].num1 + (float)a[arit].num2;}
    if (strcmp (a[arit].sinal,conta[1])==0){ result = a[arit].num1 - (float)a[arit].num2;}
    if (strcmp (a[arit].sinal,conta[2])==0){ result = a[arit].num1 * (float)a[arit].num2;}
    if (strcmp (a[arit].sinal,conta[3])==0){ result = a[arit].num1 / (float)a[arit].num2;}
    printf("\n\nResultado: %0.2f",result);*/
   arit++;
}
void menuAritmetica() {
   int n;
   do {
      system("cls");
      printf(" ---------------------------------------");
      printf("\n |\t******* MENU ARITMÉTICO *******\t |");
      printf("\n |\t1 - Cadastrar testes\t\t |");
      printf("\n |\t2 - Voltar\t\t\t |");
      printf("\n ---------------------------------------");
      printf("\nOpção escolhida: ");
      scanf("%d", & n);
      switch (n) {
      case 1:
         printf("\nUsuário escolheu a opção 1");
         calculoAritmetico();
         getch();
         break;
      case 2:
         printf("\nPrecione qualquer tecla para voltar ao MENU DE CADASTRO");
         break;
      default:
         printf("\nOpção inválida!");
         break;
      }
   }
   while (n != 2);
}
void calculoGeometrico() {
   setlocale(LC_ALL, "Portuguese");
   printf("Geométrico");
   printf("\n -1 Quadrado");
   printf("\n -2 Retângulo");
   printf("\n -3 Triângulo");
   printf("\n -4 Trapézio");
   printf("\nInforme qual cálculo da forma geométrica será usado:\t");
   scanf("%d", & g[geom].tipo);
   if (g[geom].tipo == 1) {
      printf("\nDigite o lado do Quadrado:\t");
      scanf("%d", & g[geom].num1);
   }
   if (g[geom].tipo == 2) {
      printf("\nDigite o comprimento do retângulo:\t");
      scanf("%d", & g[geom].num1);
      printf("\nDigite a largura do retângulo:\t");
      scanf("%d", & g[geom].num2);
   }
   if (g[geom].tipo == 3) {
      printf("\nDigite a base do triângulo:\t");
      scanf("%d", & g[geom].num1);
      printf("\nDigite a altura do triângulo:\t");
      scanf("%d", & g[geom].num2);
   }
   if (g[geom].tipo == 4) {
      printf("\nDigite a base maior do trapézio:\t");
      scanf("%d", & g[geom].num1);
      printf("\nDigite a base menors do trapézio:\t");
      scanf("%d", & g[geom].num2);
      printf("\nDigite a altura trapézio:\t");
      scanf("%d", & g[geom].num3);
   }
   geom++;
}
void menuGeometrico() {
   int n;
   do {
      system("cls");
      printf(" ---------------------------------------");
      printf("\n |\t******* MENU GEOMÉTRICO *******\t |");
      printf("\n |\t1 - Cadastrar testes\t\t |");
      printf("\n |\t2 - Voltar\t\t\t |");
      printf("\n ---------------------------------------");
      printf("\nOpção escolhida: ");
      scanf("%d", & n);
      switch (n) {
      case 1:
         printf("\nUsuário escolheu a opção 1");
         calculoGeometrico();
         getch();
         break;
      case 2:
         printf("\nPrecione qualquer tecla para voltar ao MENU DE CADASTRO");
         break;
      default:
         printf("\nOpção inválida!");
         break;
      }
   }
   while (n != 2);
}
void calculoFuncoes() {
   float result;
   setlocale(LC_ALL, "Portuguese");
   printf("\nFunções");
   printf("\nDigite o valor de a:\t");
   scanf("%d", & f[func].num1);
   printf("\nDigite o valor de b:\t");
   scanf("%d", & f[func].num2);
   printf("\nDigite o valor de c:\t");
   scanf("%d", & f[func].num3);
   func++;
}
void menuFuncoes() {
   int n;
   do {
      system("cls");
      printf(" ---------------------------------------");
      printf("\n |\t******* MENU FUNÇÕES *******\t |");
      printf("\n |\t1 - Cadastrar testes\t\t |");
      printf("\n |\t2 - Voltar\t\t\t |");
      printf("\n ---------------------------------------");
      printf("\nOpção escolhida: ");
      scanf("%d", & n);
      switch (n) {
      case 1:
         printf("\nUsuário escolheu a opção 1");
         calculoFuncoes();
         getch();
         break;
      case 2:
         printf("\nPrecione qualquer tecla para voltar ao MENU DE CADASTRO");
         break;
      default:
         printf("\nOpção inválida!");
         break;
      }
   }
   while (n != 2);
}
void cadastroUsuario() {
   // float result;
   setlocale(LC_ALL, "Portuguese");
   u[usu].id = usu;
   fflush(stdin);
   printf("\nInforme seu nome:\t");
   gets(u[usu].nome);
   usu++;
}
void menuUsuario() {
   int n;
   do {
      system("cls");
      printf(" ---------------------------------------");
      printf("\n |\t******* MENU USUÁRIO *******\t |");
      printf("\n |\t1 - Cadastrar usuários\t\t |");
      printf("\n |\t2 - Voltar\t\t\t |");
      printf("\n ---------------------------------------");
      printf("\nOpção escolhida: ");
      scanf("%d", & n);
      switch (n) {
      case 1:
         printf("\nUsuário escolheu a opção 1");
         cadastroUsuario();
         getch();
         break;
      case 2:
         printf("\nPrecione qualquer tecla para voltar ao MENU DE CADASTRO");
         break;
      default:
         printf("\nOpção inválida!");
         break;
      }
   }
   while (n != 2);
}
void realizarTeste() {
   char conta[4][2] = {
      "+",
      "-",
      "*",
      "/"
   };
   int i, op = 0, id = 0;
   float respo = 0, resultado = 0;
   // float result;
   setlocale(LC_ALL, "Portuguese");
   t[test].id = test;
   printf("\nInforme o id do Usúario:\t");
   scanf("%d", & t[test].id);
   printf("\nTipos de Questões:\n");
   printf("\n -1 Questão Aritméticas");
   printf("\n -2 Questão Geométricas");
   printf("\n -3 Questão de Funções");
   printf("\n\nSua Escolha:\t");
   scanf("%d", & t[test].tipo);
   if (t[test].tipo == 1) {
      op = rand() % arit;
      printf("\n%d", a[op].num1);
      printf(" %s", a[op].sinal);
      printf(" %d", a[op].num2);
      if (strcmp(a[op].sinal, conta[0]) == 0) {
         resultado = a[op].num1 + (float) a[op].num2;
      }
      if (strcmp(a[op].sinal, conta[1]) == 0) {
         resultado = a[op].num1 - (float) a[op].num2;
      }
      if (strcmp(a[op].sinal, conta[2]) == 0) {
         resultado = a[op].num1 * (float) a[op].num2;
      }
      if (strcmp(a[op].sinal, conta[3]) == 0) {
         resultado = a[op].num1 / (float) a[op].num2;
      }
   }
   if (t[test].tipo == 2) {
      op = rand() % geom;
      if (g[op].tipo == 1) {
         printf("Qual a área do Quadrado de lado: %d", g[op].num1);
         resultado = g[op].num1 * (float) g[op].num1;
      }
      if (g[op].tipo == 2) {
         printf("Qual a área do Retângulo de comprimento: %d", g[op].num1);
         printf("\nE largura: %d", g[op].num2);
         resultado = g[op].num1 * (float) g[op].num2;
      }
      if (g[op].tipo == 3) {
         printf("Qual a área do Triângulo de base: %d", g[op].num1);
         printf("\nE altura: %d", g[op].num2);
         resultado = (g[op].num1 * (float) g[op].num2) / 2;
      }
      if (g[op].tipo == 4) {
         printf("Qual a área do Trapézio de Base maior: %d", g[op].num1);
         printf("\nE base menor: %d", g[op].num2);
         printf("\nE altura: %d", g[op].num3);
         resultado = ((g[op].num1 + (float) g[op].num2) * g[op].num3) / 2;
      }
   }
   if (t[test].tipo == 3) {
      op = rand() % func;
      if (f[op].num1 == 0)
         printf("\nAche o delta da seguinte função:");
      else printf("\nResolva a seguinte operação: ");
      printf("\n%dx²", f[op].num1);
      printf(" + %dx", f[op].num2);
      printf(" + %d", f[op].num3);
      if (f[op].num1 == 0) resultado = (float) - f[op].num3 / f[op].num2;
      else resultado = ((float) f[op].num2 * f[op].num2) + (-4 * f[op].num3 * f[op].num1);
   }
   printf("\nResposta: ");
   scanf("%f", & respo);
   if (respo == resultado) t[test].certo = 1;
   else t[test].certo = 0;
   printf("-------------------------------");
   printf("\nTeste finalizado\n");
   printf("Nome : %s\n", u[t[test].id].nome);
   if (t[test].tipo == 1) printf("Questão de Aritmética: ");
   else if (t[test].tipo == 2) printf("Questão Geométrica: ");
   else if (t[test].tipo == 3) printf("Questão de Função: ");
   if (respo == resultado) printf("Acertou");
   else printf("Errou");
   test++;
}
void menuTeste() {
   int n;
   do {
      system("cls");
      printf(" ---------------------------------------");
      printf("\n |\t******* MENU TESTE *******\t |");
      printf("\n |\t1 - Realizar Teste\t\t |");
      printf("\n |\t2 - Voltar\t\t\t |");
      printf("\n ---------------------------------------");
      printf("\nOpção escolhida: ");
      scanf("%d", & n);
      switch (n) {
      case 1:
         printf("\nUsuário escolheu a opção 1");
         realizarTeste();
         getch();
         break;
      case 2:
         printf("\nPrecione qualquer tecla para voltar ao MENU DE CADASTRO");
         break;
      default:
         printf("\nOpção inválida!");
         break;
      }
   }
   while (n != 2);
}
void cadastrados() {
   int i;
   printf("\nAritmética");
   for (i = 0; i < arit; i++) {
      printf("\nTeste %d: ", i + 1);
      printf("%d", a[i].num1);
      printf(" %s", a[i].sinal);
      printf(" %d\n", a[i].num2);
   }
   printf("\n\nGeométrico");
   for (i = 0; i < geom; i++) {
      printf("\nTeste %d: ", i + 1);
      if (g[i].tipo == 1) {
         printf("lado: %d", g[i].num1);
      }
      if (g[i].tipo == 2) {
         printf("comprimento: %d", g[i].num1);
         printf("\n\tlargura: %d\n", g[i].num2);
      }
      if (g[i].tipo == 3) {
         printf("base: %d", g[i].num1);
         printf("\n\taltura: %d\n", g[i].num2);
      }
      if (g[i].tipo == 4) {
         printf("Base maior: %d", g[i].num1);
         printf("\n\tBase menor: %d", g[i].num2);
         printf("\n\tBase altura: %d\n", g[i].num3);
      }
   }
   printf("\n\nFunções");
   for (i = 0; i < func; i++) {
      printf("\nTeste %d: ", i + 1);
      if (f[i].num1 != 0) {
         printf("%dx²", f[i].num1);
         printf(" + %dx", f[i].num2);
         printf(" + %d\n", f[i].num3);
      } else {
         printf("%dx", f[i].num2);
         printf(" + %d\n", f[i].num3);
      }
   }
   printf("\n\nUsuários");
   for (i = 0; i < usu; i++) {
      printf("\n\nUsuario %d: ", i + 1);
      printf(" %s", u[i].nome);
      printf(" | código: %d", u[i].id);
   }
   getch();
}
void menuCadastro() {
   int n;
   do {
      system("cls");
      printf(" ---------------------------------------");
      printf("\n |\t******* MENU CADASTRO *******\t |");
      printf("\n |\t1 - Aritmético\t\t\t |");
      printf("\n |\t2 - Geométrico\t\t\t |");
      printf("\n |\t3 - Funções\t\t\t |");
      printf("\n |\t4 - Usuário\t\t\t |");
      printf("\n |\t5 - Operações Cadastradas\t |");
      printf("\n |\t6 - Voltar\t\t\t |");
      printf("\n ---------------------------------------");
      printf("\nOpção escolhida: ");
      scanf("%d", & n);
      switch (n) {
      case 1:
         printf("\nUsuário escolheu a opção 1");
         menuAritmetica();
         getch();
         break;
      case 2:
         printf("\nUsuário escolheu a opção 2");
         menuGeometrico();
         getch();
         break;
      case 3:
         printf("\nUsuário escolheu a opção 3");
         menuFuncoes();
         getch();
         break;
      case 4:
         printf("\nUsuário escolheu a opção 4");
         menuUsuario();
         getch();
         break;
      case 5:
         printf("\nUsuário escolheu a opção 5");
         cadastrados();
         getch();
         break;
      case 6:
         printf("\nPrecione qualquer tecla para voltar ao MENU PRINCIPAL");
         break;
      default:
         printf("\nOpção inválida!");
         break;
      }
   }
   while (n != 6);
}
int main() {
   int numero;
   setlocale(LC_ALL, "Portuguese");
   do {
      system("cls");
      printf(" ----------------------------------------");
      printf("\n |************ MENU PRINCIPAL ************|");
      printf("\n | \t 1 - Cadastrar\t\t\t |");
      printf("\n | \t 2 - Teste\t\t\t |");
      printf("\n | \t 3 - Sair\t\t\t |");
      printf("\n ----------------------------------------\n");
      printf("Digite sua opção: ");
      scanf("%d", & numero);
      switch (numero) {
      case 1:
         printf("\nUsuário escolheu a opção 1");
         menuCadastro();
         getch();
         break;
      case 2:
         printf("\nUsuário escolheu a opção 2");
         menuTeste();
         getch();
         break;
      case 3:
         break;
      default:
         printf("\nOpção inválida!");
         break;
      }
   } while (numero != 3);
   return 0;
}
