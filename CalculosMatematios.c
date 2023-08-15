/*Essa nossa atividade consiste na constru��o de um aplicativo para c�lculos matem�ticos atendendo os seguintes requisitos:

O aplicativo deve ser operacionalizado por meio de menus, sendo obrigat�ria a exist�ncia de pelo menos um submenu;
Deve-se disponibilizar op��es para c�lculos aritm�ticos, geom�tricos e de fun��es (primeiro grau, segundo grau, etc);
O c�digo deve ser organizado de forma que cada menu e cada op��o esteja sendo implementada por meio de uma fun��o.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

//Fun��o para Adi��o
void adicao(){
    int contador, i;
    float n1=0,result=0;
    printf("\n----------------------------------------");
    printf("\n**************** ADI��O ****************");
    printf("\n----------------------------------------");
    printf("\n\nQuantidades de n�meros que ter� na adi��o: ");
    scanf("%d",&contador);
    if(contador>1){
        printf("\n----------------------------------------");
        for(i=0;i<contador; i++){
            printf("\nInforme o %d n�mero para a adi��o: ",i+1);
            scanf("%f", &n1);
            result = result+n1;
                    }
            printf("\n----------------------------------------");
            printf("\nO resultado da adi��o �: %0.2f",result);
                }
    else{
        printf("\n----------------------------------------");
        printf("\nQuantidade de n�meros iv�lida para fazer qualquer opera��o");
        }
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
                }

//Fun��o para Subtra��o
void subtracao(){
    float n1, n2, result;
    printf("\n----------------------------------------");
    printf("\n************** SUBTRA��O **************");
    printf("\n----------------------------------------");
    printf("\n1� n�mero: ");
        scanf("%f", &n1);
    printf("\n2� n�mero: ");
        scanf("%f", &n2);
        result= n1-n2;
    printf("\n----------------------------------------");
    printf("\nO resultado da subtra��o �: %0.2f", result);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Fun��o para Multiplica��o
void multiplicacao(){
   int contador, i;
    float n1=0,result=1;
    printf("\n----------------------------------------");
    printf("\n************ MULTIPLICA��O ************");
    printf("\n----------------------------------------");
    printf("\n\nQuantidades de n�meros para a multiplica��o: ");
    scanf("%d",&contador);
    if(contador>1){
        printf("\n----------------------------------------");
        for(i=0;i<contador; i++){
            printf("\nInforme o %d n�mero para a multiplica��o: ",i+1);
            scanf("%f", &n1);
            result = result*n1;
                    }
            printf("\n----------------------------------------");
            printf("\nO resultado da multiplica��o �: %0.2f",result);
                }
    else{
        printf("\n----------------------------------------");
        printf("\nQuantidade de n�meros iv�lida para fazer qualquer opera��o");
        }
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Fun��o para Divis�o
void divisao(){
float n1, n2, result;
     printf("\n----------------------------------------");
     printf("\n*************** DIVIS�O ***************");
     printf("\n----------------------------------------");
    printf("\nInforme o dividendo: ");
        scanf("%f", &n1);
    printf("\nInforme o divisor: ");
        scanf("%f", &n2);
        if(n2==0)printf("\nN�meros incorretos, o divisor deve ser diferente de 0");

        else
            result= n1/n2;
    printf("\n----------------------------------------");
    printf("\nO resultado da Divis�o �: %0.2f", result);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Fun��o para Porcentagem
void porcentagem(){
    int op;
    float n1, n2, result;
    printf("\n----------------------------------------");
    printf("\n************* PORCENTAGEM *************");
    printf("\n----------------------------------------");
    printf("\n Deseja fazer qual opera��o com porcentagem?");
    printf("\n- 1 => Calcular a porcentagem de um n�mero em rela��o a outro.");
    printf("\n- 2 => Calcular quanto ser� o n�mero de acordo com a porcentagem e o total.");
    printf("\nSua escolha : ");
    scanf("%d", &op);
        if(op==1)
                {
                printf("\n----------------------------------------");
                printf("\nN�mero total(100%%): ");
                    scanf("%f", &n1);
                printf("\nA quantidade que deseja saber a porcentagem: ");
                    scanf("%f", &n2);
                        result= (n2*100)/n1;
                printf("\n----------------------------------------");
                printf("\nO resultado da Porcentagem �: %0.2f %%", result);
            }

 else if(op==2){
                printf("\n----------------------------------------");
                printf("\nN�mero total(100%%): ");
                    scanf("%f", &n1);
                printf("\nPorcentagem(%) que quer: ");
                    scanf("%f", &n2);
                        result= (n2/100)*n1;
                printf("\n----------------------------------------");
                printf("\nA parte retirada ser� de: %0.2f", result);
 }
 else printf("\nOp��o Inv�lida \nPressione qualquer tecla para continuar");

 printf("\n----------------------------------------");
 printf("\n\nAperte qualquer tecla para continuar");
}

//Fun��o para Potencializa��o
void potenciacao(){
float n1, n2, result;
     printf("\n----------------------------------------");
     printf("\n************* POT�NCIA��O *************");
     printf("\n----------------------------------------");
    printf("\n1� n�mero(Base): ");
        scanf("%f", &n1);
    printf("\n2� n�mero(Expoente): ");
        scanf("%f", &n2);
        pow(n1,n2);
            result= pow(n1,n2);
    printf("\n----------------------------------------");
    printf("\nO resultado da Pot�ncia��o �: %0.2f", result);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Fun��o para Raiz Quadrada
void raiz(){
float n1, result;
     printf("\n----------------------------------------");
     printf("\n************* RAIZ QUADRADA *************");
     printf("\n----------------------------------------");
     printf("\nN�mero que ser� realizado a raiz quadrada(x�): ");
        scanf("%f", &n1);
            result= sqrt(n1);
     printf("\n----------------------------------------");
     printf("\nO resultado da raiz quadrada de %0.2f �: %0.2f",n1,result);
     printf("\n----------------------------------------");
     printf("\n\nAperte qualquer tecla para continuar");

}

//Fun��o para calcular a geometria do quadrado
void quadrado(){
float n1, per, area;
    printf("\n----------------------------------------");
    printf("\n************** QUADRADO **************");
    printf("\n----------------------------------------");
    printf("\nInforme o valor do lado do quadrado (em cm): ");
        scanf("%f", &n1);
        per= n1*4;
        area= n1*n1;
    printf("\n----------------------------------------");
    printf("\nO per�metro do quadrado �: %0.2f cm", per);
    printf("\nA �rea do quadrado �: %0.2f cm�", area);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Fun��o para calcular a geometria do ret�ngulo
void retangulo(){
float n1,n2, per, area;
    printf("\n----------------------------------------");
    printf("\n************** QUADRADO **************");
    printf("\n----------------------------------------");
    printf("\nInforme o valor da largura do ret�ngulo (em cm): ");
        scanf("%f", &n1);
    printf("\nInforme o valor do comprimento do ret�ngulo (em cm): ");
        scanf("%f", &n2);
        per= (2*n1)+(2*n2);
        area= n1*n2;
    printf("\n----------------------------------------");
    printf("\nO per�metro do quadrado �: %0.2f cm", per);
    printf("\nA �rea do quadrado �: %0.2f cm�", area);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Fun��o para calcular a geometria do tri�ngulo
void triangulo(){
int op;
float n1,n2, per, area, l1,l2;
    printf("\n----------------------------------------");
    printf("\n************** QUADRADO **************");
    printf("\n----------------------------------------");
    printf("\nInforme o valor da base do tri�ngulo (em cm): ");
        scanf("%f", &n1);
    printf("\nInforme o valor da altura do tri�ngulo (em cm): ");
        scanf("%f", &n2);
        area= (n1*n2)/2;
    printf("\nInforme o valor do 1� lado (em cm): ");
        scanf("%f",&l1);
    printf("\nInforme o valor do 2� lado (em cm): ");
        scanf("%f",&l2);
        per = n1+l1+l2;
    printf("\n----------------------------------------");
    printf("\nO per�metro do quadrado �: %0.2f cm", per);
    printf("\nA �rea do quadrado �: %0.2f cm�", area);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Fun��o para calcular a geometria do trap�zio
void trapezio(){
int op;
float n1,n2, per, area, altura, le,ld;
    printf("\n----------------------------------------");
    printf("\n************** QUADRADO **************");
    printf("\n----------------------------------------");

    printf("\nInforme o valor da base menor do trap�zio (em cm): ");
        scanf("%f", &n2);

    printf("\nInforme o valor da base maior do trap�zio (em cm): ");
        scanf("%f", &n1);

    printf("\nInforme o valor da altura do trap�zio (em cm): ");
        scanf("%f",&altura);

    printf("\nInforme o valor do 1� lado (em cm): ");
        scanf("%f",&le);

    printf("\nInforme o valor do 2� lado (em cm): ");
        scanf("%f",&ld);


        area= ((n1+n2)*altura)/2;
        per = n1+n2+le+ld;
    printf("\n----------------------------------------");
    printf("\nO per�metro do quadrado �: %0.2f cm", per);
    printf("\nA �rea do quadrado �: %0.2f cm�", area);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Fun��o para fun��es de 1�grau
void grau1(){
    int a,b, result, cont=3,i, fx;
    printf("\n----------------------------------------");
    printf("\n************ FUN��O 1�GRAU ************");
    printf("\n----------------------------------------");
    printf("\nInforme o valor da posi��o - A: ");
    scanf("%d", &a);
    printf("\nInforme o valor da posi��o - B: ");
    scanf("%d", &b);
    printf("\n----------------------------------------");
    printf("\nTabela de valores poss�veis valores de x e y");
    printf("\n-------------");
    printf("\n X  |   Y\n");
        while(cont>-3){
            result = (cont*a) + b;
            printf(" %d", cont);
            printf("      %d", result);
            printf("\n");
            cont--;
    }
    printf("\n-------------");
    printf("\n\n----------------------------------------");
    printf("\nFun��o ser�: f(x)=%dx + %d ",a,b);
    printf("\n----------------------------------------");
    printf("\nDeseja escrever algum n�mero para fazer a opera��o?");
    printf("\nSim - 1    |    N�o - Qualquer tecla para continuar\n");
    printf("Sua escolha: ");
    scanf("%d",&i);
    printf("\n----------------------------------------");
        if(i==1){printf("\nDigite o valor de f(x): ");
            scanf("%d",&fx);
            result = (fx*a) + b;
            printf("\n\n----------------------------------------");
            printf("\nFun��o ser�: (%d,%d)",fx,result);
            printf("\n\n----------------------------------------");
    }
 printf("\n\nAperte qualquer tecla para continuar");
 printf("\n\n----------------------------------------");
}

//Fun��o para fun��es de 2�grau
void grau2(){
int a,b,c,result,cont=3,i,fx;
    printf("\n----------------------------------------");
    printf("\n************ FUN��O 2�GRAU ************");
    printf("\n----------------------------------------");
    printf("\nInforme o valor da posi��o - A: ");
        scanf("%d", &a);
    printf("\nInforme o valor da posi��o - B: ");
        scanf("%d", &b);
    printf("\nInforme o valor da posi��o - C: ");
        scanf("%d", &c);

    printf("\n----------------------------------------");
    printf("\nTabela de valores poss�veis valores de x e y");
    printf("\n-------------");
    printf("\n X  |   Y\n");
        while(cont>-3){
            result = (a*(cont*cont))+(cont*b) + c;
            printf(" %d", cont);
            printf("      %d", result);
            printf("\n");
            cont--;
    }
    printf("\n-------------");
    printf("\n\n----------------------------------------");
    printf("\nFun��o ser�: f(x)= %dx� + %dx + %d ",a,b,c);
    printf("\n----------------------------------------");
    printf("\nDeseja escrever algum n�mero para fazer a opera��o?");
    printf("\nSim - 1   |   N�o - Qualquer tecla para continuar\n");
    printf("\nSua escolha: ");
    scanf("%d",&i);
    printf("\n----------------------------------------");
        if(i==1){printf("\nDigite o valor de f(x): ");
            scanf("%d",&fx);
            result = ((fx*fx)*a)+(fx*b) + c;
            printf("\nFun��o ser�: (%d,%d)",fx,result);
            printf("\n\n----------------------------------------");
    }
 printf("\n\nAperte qualquer tecla para continuar");
 printf("\n\n----------------------------------------");
}

void calculoAritmetico(){
int n;
do{
        system("cls");
        printf("\n*** MENU CALCULO ARITM�TICO ***");
        printf("\n1 - Adi��o");
        printf("\n2 - Subtra��o");
        printf("\n3 - Multiplica��o");
        printf("\n4 - Divis�o");
        printf("\n5 - Porcentagem");
        printf("\n6 - Pot�ncia��o");
        printf("\n7 - Raiz Quadrada");
        printf("\n8 - Voltar");
        printf("\nOp��o escolhida: ");
        scanf("%d",&n);
         switch(n){
            case 1:
                printf("\nUsu�rio escolheu a op��o 1");
                adicao();
                getch();
                break;

            case 2:
                printf("\nUsu�rio escolheu a op��o 2");
                subtracao();
                getch();
                break;

            case 3:
                printf("\nUsu�rio escolheu a op��o 3");
                multiplicacao();
                getch();
                break;

            case 4:
                printf("\nUsu�rio escolheu a op��o 4");
                divisao();
                getch();
                break;

            case 5:
                printf("\nUsu�rio escolheu a op��o 5");
                porcentagem();
                getch();
                break;

            case 6:
                printf("\nUsu�rio escolheu a op��o 6");
                potenciacao();
                getch();
                break;

            case 7:
                printf("\nUsu�rio escolheu a op��o 7");
                raiz();
                getch();
                break;

            case 8:
            printf("\nPrecione qualquer tecla para voltar ao MENU PRINCIPAL");
                break;


            default:
                printf("\nOp��o inv�lida!");
                break;
        }
    }
    while(n!=8);
}

void calculoGeometrico(){
    int n;
do{
        system("cls");
        printf("\n*** MENU CALCULO GEOM�TRICO ***");
        printf("\n1 - Quadrado");
        printf("\n2 - Ret�ngulo");
        printf("\n3 - Tri�ngulo");
        printf("\n4 - Trap�zio");
        printf("\n5 - Voltar");
        printf("\nOp��o escolhida: ");
        scanf("%d",&n);
         switch(n){
            case 1:
                printf("\nUsu�rio escolheu a op��o 1");
                quadrado();
                getch();
                break;

            case 2:
                printf("\nUsu�rio escolheu a op��o 2");
                retangulo();
                getch();
                break;

            case 3:
                printf("\nUsu�rio escolheu a op��o 3");
                triangulo();
                getch();
                break;

            case 4:
                printf("\nUsu�rio escolheu a op��o 4");
                trapezio();
                getch();
                break;

            case 5:
            printf("\nPrecione qualquer telca para voltar ao MENU PRINCIPAL");
                break;

            default:
                printf("\nOp��o inv�lida!");
                break;
        }
    }
    while(n!=5);
}

void funcoes(){
    int n;
do{
        system("cls");
        printf("\n*** MENU CALCULO DE FUN��O ***");
        printf("\n1 - 1� grau");
        printf("\n2 - 2� grau");
        printf("\n3 - Voltar");
        printf("\nOp��o escolhida: ");
        scanf("%d",&n);
         switch(n){
            case 1:
                printf("\nUsu�rio escolheu a op��o 1");
                grau1();
                getch();
                break;

            case 2:
                printf("\nUsu�rio escolheu a op��o 2");
                grau2();
                getch();
                break;

            case 3:
            printf("\nVoltando ao MENU PRINCIPAL");
                break;

            default:
                printf("\nOp��o inv�lida!");
                break;
        }
    }
    while(n!=3);
}

int main()
{
    int numero;
    setlocale(LC_ALL, "Portuguese");
    do{
        system("cls");
        printf("\n*** MENU PRINCIPAL ***");
        printf("\n1 - C�lculo Aritm�tico");
        printf("\n2 - C�lculo Geom�trico");
        printf("\n3 - Fun��es");
        printf("\n4 - Sair");
        printf("\nDigite sua op��o: ");
        scanf("%d", &numero);
        switch(numero){
            case 1:
                printf("\nUsu�rio escolheu a op��o 1");
                calculoAritmetico();
                getch();
                break;
            case 2:
                printf("\nUsu�rio escolheu a op��o 2");
                calculoGeometrico();
                getch();
                break;
            case 3:
                printf("\nUsu�rio escolheu a op��o 3");
                funcoes();
                break;
            case 4:
                break;
            default:
                printf("\nOp��o inv�lida!");
                break;
        }
    }while(numero!=4);
    return 0;
}
