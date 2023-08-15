/*Essa nossa atividade consiste na construção de um aplicativo para cálculos matemáticos atendendo os seguintes requisitos:

O aplicativo deve ser operacionalizado por meio de menus, sendo obrigatória a existência de pelo menos um submenu;
Deve-se disponibilizar opções para cálculos aritméticos, geométricos e de funções (primeiro grau, segundo grau, etc);
O código deve ser organizado de forma que cada menu e cada opção esteja sendo implementada por meio de uma função.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

//Função para Adição
void adicao(){
    int contador, i;
    float n1=0,result=0;
    printf("\n----------------------------------------");
    printf("\n**************** ADIÇÃO ****************");
    printf("\n----------------------------------------");
    printf("\n\nQuantidades de números que terá na adição: ");
    scanf("%d",&contador);
    if(contador>1){
        printf("\n----------------------------------------");
        for(i=0;i<contador; i++){
            printf("\nInforme o %d número para a adição: ",i+1);
            scanf("%f", &n1);
            result = result+n1;
                    }
            printf("\n----------------------------------------");
            printf("\nO resultado da adição é: %0.2f",result);
                }
    else{
        printf("\n----------------------------------------");
        printf("\nQuantidade de números iválida para fazer qualquer operação");
        }
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
                }

//Função para Subtração
void subtracao(){
    float n1, n2, result;
    printf("\n----------------------------------------");
    printf("\n************** SUBTRAÇÃO **************");
    printf("\n----------------------------------------");
    printf("\n1° número: ");
        scanf("%f", &n1);
    printf("\n2° número: ");
        scanf("%f", &n2);
        result= n1-n2;
    printf("\n----------------------------------------");
    printf("\nO resultado da subtração é: %0.2f", result);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Função para Multiplicação
void multiplicacao(){
   int contador, i;
    float n1=0,result=1;
    printf("\n----------------------------------------");
    printf("\n************ MULTIPLICAÇÃO ************");
    printf("\n----------------------------------------");
    printf("\n\nQuantidades de números para a multiplicação: ");
    scanf("%d",&contador);
    if(contador>1){
        printf("\n----------------------------------------");
        for(i=0;i<contador; i++){
            printf("\nInforme o %d número para a multiplicação: ",i+1);
            scanf("%f", &n1);
            result = result*n1;
                    }
            printf("\n----------------------------------------");
            printf("\nO resultado da multiplicação é: %0.2f",result);
                }
    else{
        printf("\n----------------------------------------");
        printf("\nQuantidade de números iválida para fazer qualquer operação");
        }
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Função para Divisão
void divisao(){
float n1, n2, result;
     printf("\n----------------------------------------");
     printf("\n*************** DIVISÃO ***************");
     printf("\n----------------------------------------");
    printf("\nInforme o dividendo: ");
        scanf("%f", &n1);
    printf("\nInforme o divisor: ");
        scanf("%f", &n2);
        if(n2==0)printf("\nNúmeros incorretos, o divisor deve ser diferente de 0");

        else
            result= n1/n2;
    printf("\n----------------------------------------");
    printf("\nO resultado da Divisão é: %0.2f", result);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Função para Porcentagem
void porcentagem(){
    int op;
    float n1, n2, result;
    printf("\n----------------------------------------");
    printf("\n************* PORCENTAGEM *************");
    printf("\n----------------------------------------");
    printf("\n Deseja fazer qual operação com porcentagem?");
    printf("\n- 1 => Calcular a porcentagem de um número em relação a outro.");
    printf("\n- 2 => Calcular quanto será o número de acordo com a porcentagem e o total.");
    printf("\nSua escolha : ");
    scanf("%d", &op);
        if(op==1)
                {
                printf("\n----------------------------------------");
                printf("\nNúmero total(100%%): ");
                    scanf("%f", &n1);
                printf("\nA quantidade que deseja saber a porcentagem: ");
                    scanf("%f", &n2);
                        result= (n2*100)/n1;
                printf("\n----------------------------------------");
                printf("\nO resultado da Porcentagem é: %0.2f %%", result);
            }

 else if(op==2){
                printf("\n----------------------------------------");
                printf("\nNúmero total(100%%): ");
                    scanf("%f", &n1);
                printf("\nPorcentagem(%) que quer: ");
                    scanf("%f", &n2);
                        result= (n2/100)*n1;
                printf("\n----------------------------------------");
                printf("\nA parte retirada será de: %0.2f", result);
 }
 else printf("\nOpção Inválida \nPressione qualquer tecla para continuar");

 printf("\n----------------------------------------");
 printf("\n\nAperte qualquer tecla para continuar");
}

//Função para Potencialização
void potenciacao(){
float n1, n2, result;
     printf("\n----------------------------------------");
     printf("\n************* POTÊNCIAÇÃO *************");
     printf("\n----------------------------------------");
    printf("\n1° número(Base): ");
        scanf("%f", &n1);
    printf("\n2° número(Expoente): ");
        scanf("%f", &n2);
        pow(n1,n2);
            result= pow(n1,n2);
    printf("\n----------------------------------------");
    printf("\nO resultado da Potênciação é: %0.2f", result);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Função para Raiz Quadrada
void raiz(){
float n1, result;
     printf("\n----------------------------------------");
     printf("\n************* RAIZ QUADRADA *************");
     printf("\n----------------------------------------");
     printf("\nNúmero que será realizado a raiz quadrada(x²): ");
        scanf("%f", &n1);
            result= sqrt(n1);
     printf("\n----------------------------------------");
     printf("\nO resultado da raiz quadrada de %0.2f é: %0.2f",n1,result);
     printf("\n----------------------------------------");
     printf("\n\nAperte qualquer tecla para continuar");

}

//Função para calcular a geometria do quadrado
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
    printf("\nO perímetro do quadrado é: %0.2f cm", per);
    printf("\nA área do quadrado é: %0.2f cm²", area);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Função para calcular a geometria do retângulo
void retangulo(){
float n1,n2, per, area;
    printf("\n----------------------------------------");
    printf("\n************** QUADRADO **************");
    printf("\n----------------------------------------");
    printf("\nInforme o valor da largura do retângulo (em cm): ");
        scanf("%f", &n1);
    printf("\nInforme o valor do comprimento do retângulo (em cm): ");
        scanf("%f", &n2);
        per= (2*n1)+(2*n2);
        area= n1*n2;
    printf("\n----------------------------------------");
    printf("\nO perímetro do quadrado é: %0.2f cm", per);
    printf("\nA área do quadrado é: %0.2f cm²", area);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Função para calcular a geometria do triângulo
void triangulo(){
int op;
float n1,n2, per, area, l1,l2;
    printf("\n----------------------------------------");
    printf("\n************** QUADRADO **************");
    printf("\n----------------------------------------");
    printf("\nInforme o valor da base do triângulo (em cm): ");
        scanf("%f", &n1);
    printf("\nInforme o valor da altura do triângulo (em cm): ");
        scanf("%f", &n2);
        area= (n1*n2)/2;
    printf("\nInforme o valor do 1º lado (em cm): ");
        scanf("%f",&l1);
    printf("\nInforme o valor do 2º lado (em cm): ");
        scanf("%f",&l2);
        per = n1+l1+l2;
    printf("\n----------------------------------------");
    printf("\nO perímetro do quadrado é: %0.2f cm", per);
    printf("\nA área do quadrado é: %0.2f cm²", area);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Função para calcular a geometria do trapézio
void trapezio(){
int op;
float n1,n2, per, area, altura, le,ld;
    printf("\n----------------------------------------");
    printf("\n************** QUADRADO **************");
    printf("\n----------------------------------------");

    printf("\nInforme o valor da base menor do trapézio (em cm): ");
        scanf("%f", &n2);

    printf("\nInforme o valor da base maior do trapézio (em cm): ");
        scanf("%f", &n1);

    printf("\nInforme o valor da altura do trapézio (em cm): ");
        scanf("%f",&altura);

    printf("\nInforme o valor do 1º lado (em cm): ");
        scanf("%f",&le);

    printf("\nInforme o valor do 2º lado (em cm): ");
        scanf("%f",&ld);


        area= ((n1+n2)*altura)/2;
        per = n1+n2+le+ld;
    printf("\n----------------------------------------");
    printf("\nO perímetro do quadrado é: %0.2f cm", per);
    printf("\nA área do quadrado é: %0.2f cm²", area);
    printf("\n----------------------------------------");
    printf("\n\nAperte qualquer tecla para continuar");
}

//Função para funções de 1°grau
void grau1(){
    int a,b, result, cont=3,i, fx;
    printf("\n----------------------------------------");
    printf("\n************ FUNÇÃO 1ºGRAU ************");
    printf("\n----------------------------------------");
    printf("\nInforme o valor da posição - A: ");
    scanf("%d", &a);
    printf("\nInforme o valor da posição - B: ");
    scanf("%d", &b);
    printf("\n----------------------------------------");
    printf("\nTabela de valores possíveis valores de x e y");
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
    printf("\nFunção será: f(x)=%dx + %d ",a,b);
    printf("\n----------------------------------------");
    printf("\nDeseja escrever algum número para fazer a operação?");
    printf("\nSim - 1    |    Não - Qualquer tecla para continuar\n");
    printf("Sua escolha: ");
    scanf("%d",&i);
    printf("\n----------------------------------------");
        if(i==1){printf("\nDigite o valor de f(x): ");
            scanf("%d",&fx);
            result = (fx*a) + b;
            printf("\n\n----------------------------------------");
            printf("\nFunção será: (%d,%d)",fx,result);
            printf("\n\n----------------------------------------");
    }
 printf("\n\nAperte qualquer tecla para continuar");
 printf("\n\n----------------------------------------");
}

//Função para funções de 2°grau
void grau2(){
int a,b,c,result,cont=3,i,fx;
    printf("\n----------------------------------------");
    printf("\n************ FUNÇÃO 2ºGRAU ************");
    printf("\n----------------------------------------");
    printf("\nInforme o valor da posição - A: ");
        scanf("%d", &a);
    printf("\nInforme o valor da posição - B: ");
        scanf("%d", &b);
    printf("\nInforme o valor da posição - C: ");
        scanf("%d", &c);

    printf("\n----------------------------------------");
    printf("\nTabela de valores possíveis valores de x e y");
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
    printf("\nFunção será: f(x)= %dx² + %dx + %d ",a,b,c);
    printf("\n----------------------------------------");
    printf("\nDeseja escrever algum número para fazer a operação?");
    printf("\nSim - 1   |   Não - Qualquer tecla para continuar\n");
    printf("\nSua escolha: ");
    scanf("%d",&i);
    printf("\n----------------------------------------");
        if(i==1){printf("\nDigite o valor de f(x): ");
            scanf("%d",&fx);
            result = ((fx*fx)*a)+(fx*b) + c;
            printf("\nFunção será: (%d,%d)",fx,result);
            printf("\n\n----------------------------------------");
    }
 printf("\n\nAperte qualquer tecla para continuar");
 printf("\n\n----------------------------------------");
}

void calculoAritmetico(){
int n;
do{
        system("cls");
        printf("\n*** MENU CALCULO ARITMÉTICO ***");
        printf("\n1 - Adição");
        printf("\n2 - Subtração");
        printf("\n3 - Multiplicação");
        printf("\n4 - Divisão");
        printf("\n5 - Porcentagem");
        printf("\n6 - Potênciação");
        printf("\n7 - Raiz Quadrada");
        printf("\n8 - Voltar");
        printf("\nOpção escolhida: ");
        scanf("%d",&n);
         switch(n){
            case 1:
                printf("\nUsuário escolheu a opção 1");
                adicao();
                getch();
                break;

            case 2:
                printf("\nUsuário escolheu a opção 2");
                subtracao();
                getch();
                break;

            case 3:
                printf("\nUsuário escolheu a opção 3");
                multiplicacao();
                getch();
                break;

            case 4:
                printf("\nUsuário escolheu a opção 4");
                divisao();
                getch();
                break;

            case 5:
                printf("\nUsuário escolheu a opção 5");
                porcentagem();
                getch();
                break;

            case 6:
                printf("\nUsuário escolheu a opção 6");
                potenciacao();
                getch();
                break;

            case 7:
                printf("\nUsuário escolheu a opção 7");
                raiz();
                getch();
                break;

            case 8:
            printf("\nPrecione qualquer tecla para voltar ao MENU PRINCIPAL");
                break;


            default:
                printf("\nOpção inválida!");
                break;
        }
    }
    while(n!=8);
}

void calculoGeometrico(){
    int n;
do{
        system("cls");
        printf("\n*** MENU CALCULO GEOMÉTRICO ***");
        printf("\n1 - Quadrado");
        printf("\n2 - Retângulo");
        printf("\n3 - Triângulo");
        printf("\n4 - Trapézio");
        printf("\n5 - Voltar");
        printf("\nOpção escolhida: ");
        scanf("%d",&n);
         switch(n){
            case 1:
                printf("\nUsuário escolheu a opção 1");
                quadrado();
                getch();
                break;

            case 2:
                printf("\nUsuário escolheu a opção 2");
                retangulo();
                getch();
                break;

            case 3:
                printf("\nUsuário escolheu a opção 3");
                triangulo();
                getch();
                break;

            case 4:
                printf("\nUsuário escolheu a opção 4");
                trapezio();
                getch();
                break;

            case 5:
            printf("\nPrecione qualquer telca para voltar ao MENU PRINCIPAL");
                break;

            default:
                printf("\nOpção inválida!");
                break;
        }
    }
    while(n!=5);
}

void funcoes(){
    int n;
do{
        system("cls");
        printf("\n*** MENU CALCULO DE FUNÇÃO ***");
        printf("\n1 - 1° grau");
        printf("\n2 - 2° grau");
        printf("\n3 - Voltar");
        printf("\nOpção escolhida: ");
        scanf("%d",&n);
         switch(n){
            case 1:
                printf("\nUsuário escolheu a opção 1");
                grau1();
                getch();
                break;

            case 2:
                printf("\nUsuário escolheu a opção 2");
                grau2();
                getch();
                break;

            case 3:
            printf("\nVoltando ao MENU PRINCIPAL");
                break;

            default:
                printf("\nOpção inválida!");
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
        printf("\n1 - Cálculo Aritmético");
        printf("\n2 - Cálculo Geométrico");
        printf("\n3 - Funções");
        printf("\n4 - Sair");
        printf("\nDigite sua opção: ");
        scanf("%d", &numero);
        switch(numero){
            case 1:
                printf("\nUsuário escolheu a opção 1");
                calculoAritmetico();
                getch();
                break;
            case 2:
                printf("\nUsuário escolheu a opção 2");
                calculoGeometrico();
                getch();
                break;
            case 3:
                printf("\nUsuário escolheu a opção 3");
                funcoes();
                break;
            case 4:
                break;
            default:
                printf("\nOpção inválida!");
                break;
        }
    }while(numero!=4);
    return 0;
}
