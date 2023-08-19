/*------------------------------------------------------------------
Nomes dos desenvolvedores:
Jo�o Victor Zanolli Crespo
Tiago Zardetto Hourneau
Samuel Munhoz Tunes
---------------------------------------------------------------------
Orientadores:
Prof. Claudio Correa
Prof. Jo�o Benedito
---------------------------------------------------------------------
*/

#include <stdio.h> //inclui a biblioteca stdio
#include <conio.h>//inclui a biblioteca conio
#include <stdlib.h>//inclui a biblioteca stdlib
#include <locale.h>//inclui a biblioteca locale
#include <string.h>//inclui a biblioteca string
#include <windows.h>//inclui a biblioteca windows para a parte gr�fica

struct cliente{//estrutura de lista com nome cliente
    struct cliente *ant;//variavel de controle dos registros anteriores, com o tipo da pr�pria struct, para poder manipular a struct;
    long int numero; // cria a vari�vel com o tipo long int para o n�mero de telefone;
    char nome[20]; // cria a vari�vel com o tipo char para o nome do cliente;
    char sobrenome[20]; // cria a vari�vel com o tipo char para o sobrenome do cliente;
    long int rg; // cria a vari�vel com o tipo long int para o RG;
    int idade; // cria a vari�vel com o tipo int para a idade;
    char servico[10]; // cria a vari�vel com o tipo char para guardar o servi�o escolhido;
    struct cliente *prox;//variavel de controle dos pr�ximos registros, com o tipo da pr�pria struct, para poder manipular a struct;
};

typedef struct{//cria um estrutura para definir o come�o e o fim da lista;
    struct cliente *inicio;//varivel para definir o incio da lista;
    struct cliente *fim;//varivel para definir o fim da lista;
} listacircularde;

int verifcad = 0;//vari�vel para controlar a gera��o dos pr�ximos contatos;

int main()
{
     setlocale(LC_ALL, "Portuguese");//fun��o para adaptar o programa para a lingua portuguesa;
    listacircularde *lista; // pegando a struct e criando um caminho para a lista;
    cria(&lista);   //chamando a fun��o cria, enviando para ela a lista, para poder cria-la;
    paginaInicial(&lista);//fun��o para abrir a parte visual do projeto, onde estar� o conte�do;
}

int paginaInicial(struct listacircularde *lista){ //fun��o inicial, onde recebe o endere�o da lista criada;
int opcao, contador = 0;//declara��o de vari�veis inteiros, para servir de apoio;
    do{ // do e whille para criar o menu;
            system("cls");//c�digo do terminal para limpar a tela;
            //nome do projeto;
            printf("========================================================================\n");
            printf("  ____   _____   _      _        ____   ___   _  _   _____   ___   ___  \n");
            printf(" |  __| |  _  | | |    | |      |  __| | __| | || | |_   _| | __| | _ | \n");
            printf(" | |__  | |_| | | |__  | |__    | |__  | _|  | .` |   | |   | _|  |   / \n");
            printf(" |____| |_| |_| |____| |____|   |____| |___| |_||_|   |_|   |___| |_|_| \n\n");
            printf("========================================================================\n\n");
            //menu inicial do projeto;
            printf("\n[1] Iniciar");
            printf("\n[2] Visualizar Clientes");
            printf("\n[3] Sair \n");

            printf("\nDigite sua escolha = ");
            scanf("%d", &opcao);//entrada de dados para a op��o escolhida;

            switch(opcao)//estrutura condicional da escolha feita no menu;
            {
                case 1://caso a escolha seja '1';
                    Inicio(lista, contador); // inicia a fun��o Inicio, e envia para ela a lista e o contador;
                    break;//sair do switch;
                case 2://caso a escolha seja '2';
                    VisualizarClientes(lista);// inicia a fun��o VisualizarClientes e envia a lista;
                    break;//sair do switch;
                case 3://caso a escolha seja '3';
                    system("cls");//c�digo do terminal para limpar a tela;
                    //Os cr�ditos, mensagem final do projeto;
                    printf("=============================================\n");
                    printf("===         SISTEMA DE CALL CENTER        ===\n");
                    printf("=============================================\n");
                    printf("                    Sobre:                   \n");
                    printf("        Trabalho Final Laborat�rio de        \n");
                    printf("       Algoritmo e Estrutura de Dados ||     \n\n");
                    printf("                   Autores:                  \n");
                    printf("           Jo�o Victor Zanolli Crespo        \n");
                    printf("            Tiago Zardetto Hourneaux         \n");
                    printf("              Samuel Munhoz Tunes            \n\n");
                    printf("                  Orientador:                \n");
                    printf("              Prof. Claudio Correa           \n");
                    printf("=============================================\n");
                    system("pause");//c�digo do terminal para dar um pausar a execu��o momentaneamente;
                    return 0; //sai da condicional;
                default:// Se nenhuma das alternativas anteriores foi escolhida
                    MessageBox(0, "OP��O INV�LIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que a op��o escolhida � inv�lida
            }
    }while(opcao != 3);//Estrutura de repeti��o constante que verifica a op��o escolhida do menu;
                        //no momento que opcao se tornar 3 sai da repeti��o;
    return(0);//finaliza o projeto
}
int NumerosAleatorios()//Fun��o que gera o n�mero de telefone do cliente;
{
    long int i, numg; // Cria��o de vari�vel do tipo long int, que guarda o n�mero gerado
    do//do e while que verifica se a quantidade de digitos � maior que 4;
    {
        numg = (rand() % 10000);// gera um n�mero aleat�rio at� 10000 e aloca em numg;
    }while(numg < 1000);//repetir� at� que o numg seja maior que 1000;
    return numg;//retorna o n�mero gerado
}

int VisualizarClientes(struct listacircularde *lista)//fun��o �ra vizualizar os clientes cadastrados;
{
    int opcaov; //controlador da escolha do menu
    do{//do e while do menu at� a escolha das op��es
            system("cls");//c�digo do terminal para limpar a tela;
            //nome do projeto;
            printf("========================================================================\n");
            printf("  ____   _____   _      _        ____   ___   _  _   _____   ___   ___  \n");
            printf(" |  __| |  _  | | |    | |      |  __| | __| | || | |_   _| | __| | _ | \n");
            printf(" | |__  | |_| | | |__  | |__    | |__  | _|  | .` |   | |   | _|  |   / \n");
            printf(" |____| |_| |_| |____| |____|   |____| |___| |_||_|   |_|   |___| |_|_| \n\n");
            printf("========================================================================\n\n");
            //Menu para visualizar os clientes
            printf("\n[1] Mostrar Clientes");
            printf("\n[2] Voltar \n");

            printf("\nDigite sua escolha = ");
            scanf("%d", &opcaov);//entrada de dados para a op��o escolhida;

            switch(opcaov)//estrutura condicional da escolha feita no menu;
            {
                case 1://caso a escolha seja '1'
                    mostra(lista, 0);//chama a fun��o mostra e manda a lista e o 0(que � para o contador)
                    printf("\n\n");
                    system("pause");//c�digo do terminal para dar um pausar a execu��o momentaneamente;
                    break;//sair do switch
                case 2://caso a escolha seja '2'
                    break;//sair do switch
                default:// Se nenhuma das alternativas anteriores foi escolhida
                    MessageBox(0, "OP��O INV�LIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que a op��o escolhida � inv�lida
            }

    }while(opcaov != 2);//no momento que opcao se tornar 2 sai da repeti��o;
    return(0);//retorna a fun��o anterior
}

int ContatoMessageBox()//fun��o para criar a caixa de mensagem para o pr�ximo cliente;
{
    int msgboxID = MessageBox(  // gera a caixa de mensagem com os par�metros abaixo e aloco o retorno para a vari�vel inteira mgboxID
        NULL,
        "Tem certeza que deseja ir para o proximo contato?",//Conte�do da caixa de mensagem;
        "Aviso",    // T�tulo da caixa de mensagem;
        MB_ICONEXCLAMATION | MB_YESNO// Bot�es da caixa de mensagem;
    );
    return msgboxID; // retorna a vari�vel msgboxID
}

int Inicio(struct listacircularde *lista, int contador)//fun��o que cadastra os clientes, recebendo a lista e o contador;
{
    int opcaoini; //controlador da escolha do menu
    int msgboxID; //cria a vari�vel msgboxID, para receber o retorno da caixa de mensagem
    verifcad=0;
    do{//do e while da fun��o de cadastro;
        system("cls");//c�digo do terminal para limpar a tela;
            //nome do projeto;
        printf("========================================================================\n");
        printf("  ____   _____   _      _        ____   ___   _  _   _____   ___   ___  \n");
        printf(" |  __| |  _  | | |    | |      |  __| | __| | || | |_   _| | __| | _ | \n");
        printf(" | |__  | |_| | | |__  | |__    | |__  | _|  | .` |   | |   | _|  |   / \n");
        printf(" |____| |_| |_| |____| |____|   |____| |___| |_||_|   |_|   |___| |_|_| \n\n");
        printf("========================================================================\n\n");
        printf("Ligue para o numero abaixo:\n");
        int num1, num2;//cria as vari�veis num1 e num2, que ser�o o n�mero de telefone;
        long int concatenado;// vari�vel para receber os valores num1 e num2 e ser� o n�mero de telefone;
        if(verifcad == 0){//verifica se o cliente quer trocar de n�mero;
            num1 = NumerosAleatorios();//chama a fun��o para gerar os n�meros e alocar em num1;
            num2 = NumerosAleatorios();//chama a fun��o para gerar os n�meros e alocar em num2;
            verifcad = 1;//aloca o valor 1 na vari�vel verifcad;
        }
        printf("Numero de telefone 9%d-%d\n", num1, num2);
        concatenado = num1 * 10000 + num2;//junta as duas vari�veis e aloca dentro de concatenado;n�mero de telefone;
        //Menu para cadastrar os clientes
        printf("\n[1] Cadastrar Cliente");
        printf("\n[2] Proximo Contato");
        printf("\n[3] Encerrar");
        printf("\n[4] Voltar ao menu inicial\n");

        printf("\nDigite sua escolha = ");
        scanf("%d", &opcaoini);//entrada de dados para a op��o escolhida;

        switch(opcaoini)//estrutura condicional da escolha feita no menu;
        {
            case 1://caso a escolha seja '1';
                CadastrarCliente(lista,concatenado);//chama a fun��o apra cadastrar os clientes e envia a lista e o n�mero de telefone;
                contador++;//soma o contador em um, para saber a quantidade de n�meros cadastrados dentro da fun��o 'Inicio';
            break;//sair do switch;

            case 2://caso a escolha seja '2';
                msgboxID = ContatoMessageBox();//abre a caixa de mensagem e o retorno guarda na vari�vel msgboxID;
                if (msgboxID == IDYES)//Verifica se o bot�o pressionado foi o Yes;
                {
                    verifcad = 0;//Coloca o valor da vari�vel verifcad para 0, assim gera um novo n�mero de telefone;
                }
                break;//sair do switch;

            case 3://caso a escolha seja '3'
                if(contador!=0)//verifica se o contador � diferente de 0(contador � a quantidade de registros dentro da fun��o Inicio no momento);
                    mostra(lista,contador);//chama a fun��o mostra e envia a lista e o contador(quantidade de registros);
                else//caso n�o seja diferente de 0 ent�o n�o tem nenhum registro na fun��o Inicio dessa vez;
                    printf("Sem Cadastro");

                printf("\n\n");//pula duas linhas;
                system("pause");//c�digo do terminal para dar um pausar a execu��o momentaneamente;
                break;//sair do switch;

            case 4://caso a escolha seja '4';
                break;//sair do switch;
            default:// Se nenhuma das alternativas anteriores foi escolhida;
                MessageBox(0, "OP��O INV�LIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que a op��o escolhida � inv�lida;
        }


    }while(opcaoini != 4);//no momento que opcao se tornar 4 sai da repeti��o;
    return(0);//retorna a fun��o anterior;
}

CadastrarCliente(listacircularde *q,long int concatenado)//fun��o cadastrar clientes, onde recebe o endere�o da lista e o n�mero de telefone;
{
    //cria as vari�veis que guardar� a entrada de dados do usu�rio;
    char nome[20],sobrenome [20], servico[20];
    long int rg,numero;
    int idade;
    //----------------------------------------------------------------
    int opcaoserv=0;////controlador da escolha do menu;
    numero = concatenado;//Aloca a vari�vel concatenado ao numero;

    printf("Digite o nome do cliente = ");
    fflush(stdin);//limpa o buffer;
    gets(nome);//guarda a entrada de dados a vari�vel nome;
    printf("Digite o sobrenome do cliente = ");
    fflush(stdin);//limpa o buffer;
    gets(sobrenome);//guarda a entrada de dados a vari�vel sobrenome;

    do{//do while para verificar a quantidade de digitos do rg;
        printf("Digite o rg do cliente = ");
        scanf("%li", &rg);//guarda a entrada de dados a vari�vel rg;
        if(rg < 10000000 || rg > 100000000)
        {
            MessageBox(0, "RG INV�LIDO","ERRO", 0);//Abri um caixa de mensagem, mostrando que o valor do rg � inv�lido;
        }
    }while(rg < 10000000 || rg > 100000000);//no momento que a RG tiver 8 digitos sai da repeti��o;

    do{//do while para verificar a idade � maior que 18 e menor que 110;
        printf("Digite a idade do cliente = ");
        scanf("%d", &idade);//guarda a entrada de dados a vari�vel idade;
        if(idade < 18 || idade > 110)
        {
            MessageBox(0, "IDADE INV�LIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que o valor da idade � inv�lido;
        }
    }while(idade < 18 || idade > 110);//no momento que a idade se tornar entre 18 e 110 sai da repeti��o;

    while((opcaoserv!=1) && (opcaoserv!=2) && (opcaoserv!=3)) {//estrutura de repeti��o que s� parar� quando umas das ecolhas do menu for feita;
      //Menu de servi�os
        printf("\n[1] Internet");
        printf("\n[2] Telefone");
        printf("\n[3] TV a Cabo");

        printf("\nDigite sua escolha = ");
        scanf("%d", &opcaoserv);//entrada de dados para a op��o escolhida;

         switch(opcaoserv)//estrutura condicional da escolha feita no menu;
        {
            case 1://caso a escolha seja '1'
                strncpy(servico,"Internet",9);//aloca o plano "Internet", dentro da vari�vel servico;
            break;//sair do switch

            case 2://caso a escolha seja '1'
                strncpy(servico,"Telefone",9);//aloca o plano "Telefone", dentro da vari�vel servico;
            break;//sair do switch

            case 3://caso a escolha seja '1'
                strncpy(servico,"TV a Cabo",10);//aloca o plano "TV a Cabo", dentro da vari�vel servico;
            break;//sair do switch

            default://Se nenhuma das alternativas anteriores foi escolhida
                MessageBox(0, "OP��O INV�LIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que a op��o escolhida � inv�lida;
        }
    }

    insere(q, numero, nome, sobrenome, rg,idade,servico);//chama a fun��o insere e envia todos os dados do cliente para inserir na lista;
    MessageBox(0, "Cliente Cadastrado!","Sucesso", 0);//abre a caixa de mensagem, para mostrar que o cadastro foi feito;
    verifcad++;//soma o valor da vari�vel verifcad em 1;
    printf("\n\n");
    return(0);//retorna para a fun��o anterior
}

int cria(listacircularde *q)//fun��o para criar a lista
{
    q->inicio = NULL;//cria o inicio da lista e da o valor NULL
    q->fim = NULL;//cria o fim da lista e da o valor NULL
    return(0);//retorna para a fun��o anterior
}

//fun��o insere que recebe todos os valores do registro e insere na lista;
int insere(listacircularde *q, long int numero, char nom[20], char sobre[20], long int rg, int idade, char servico[20])
{
    struct cliente *aux; //cria uma vari�vel para auxiliar na lista, recebendo a estrutura da lista;
    aux = (struct cliente*) malloc(sizeof(struct cliente));// Faz uma aloca��o din�mica de mem�ria, da lista para a variavel aux;
    if (aux == NULL)//verifica se a lista n�o foi criada;
        return 0;//retorna para a fun��o anterior;

    if (q->inicio == NULL)//verifica se n�o � um registro no inicio;
    {
        aux->numero = numero; // Guarda o valor da vari�vel numero dentro da lista, em sua respectiva localiza��o;
        strcpy(aux->nome, nom);// Guarda o valor da vari�vel nome dentro da lista, em sua respectiva localiza��o;
        strcpy(aux->sobrenome, sobre);// Guarda o valor da vari�vel sobrenome dentro da lista, em sua respectiva localiza��o;
        strcpy(aux->servico, servico);// Guarda o valor da vari�vel servico dentro da lista, em sua respectiva localiza��o;
        aux->rg = rg;// Guarda o valor da vari�vel rg dentro da lista, em sua respectiva localiza��o;
        aux->idade = idade;// Guarda o valor da vari�vel idae dentro da lista, em sua respectiva localiza��o;

        q->inicio = aux;//Insere no in�cio da lista todos os registros
        q->fim = aux;//Insere no final da lista todos os registros
        aux->prox = q->inicio;//Insere o registro do inicio para o pr�ximo, para ter um pr�ximo registro
        aux->ant = q->fim;//Insere o registro do fim para o anterior, para ter um registro anterior
        return 1;//retorna a fun��o anterior
    }

    aux->numero = numero;// Guarda o valor da vari�vel numero dentro da lista, em sua respectiva localiza��o;
    strcpy(aux->nome, nom);// Guarda o valor da vari�vel nome dentro da lista, em sua respectiva localiza��o;
    strcpy(aux->sobrenome, sobre);// Guarda o valor da vari�vel sobrenome dentro da lista, em sua respectiva localiza��o;
    strcpy(aux->servico, servico);// Guarda o valor da vari�vel servico dentro da lista, em sua respectiva localiza��o;
    aux->rg = rg;// Guarda o valor da vari�vel rg dentro da lista, em sua respectiva localiza��o;
    aux->idade = idade;// Guarda o valor da vari�vel idae dentro da lista, em sua respectiva localiza��o;

    aux->ant = q->fim;//Insere o registro do fim para o anterior, para ter um registro anterior
    q->fim->prox = aux;//aloca o registro no pr�ximo valor para o final, para que tenha um valor anterior
    aux->prox = q->inicio;//Insere o registro do inicio para o pr�ximo, para ter um pr�ximo registro
    q->inicio->ant = aux;//aloca o registro anterior para inicio, para que tenha um pr�ximo valor
    q->fim = aux;//Insere no final da lista todos os registros
    return 1;//retorna para a fun��o anterior;
}

int mostra(listacircularde *q,int contador)//fun��o para mostrar os clientes, recebe o endere�o da lista e o contador;
{
    struct cliente *aux;  //cria uma vari�vel para auxiliar na lista, recebendo a estrutura da lista;
    int i; // vari�vel de apoio no for;
    if (q->inicio == NULL){//verifica se a lista est� vazia;
        printf("Lista vazia...\n\n");
        return 0;//retorna para a fun��o anterior;
        }

    if(contador == 0){//verifica se o contador � igual 0, assim a lista come�ara a ser mostrada pelo in�cio;
        aux = q->inicio;// da a vari�vel aux o valor da lista pelo inicio;
          do//do e while para mostrar todos os registros
           {
                printf("\nCliente: \nN�mero: 9%d\nNome: %s %s \nRG: %ld \nIdade: %d \nServi�o Adquirido: %s.\n\n",aux->numero, aux->nome,aux->sobrenome,aux->rg,aux->idade, aux->servico);
                //Mostra os dados do cliente

                aux = aux->prox;//a vari�vel aux recebe o valor do pr�ximo regitro;
            } while (aux != q->inicio);//verifica se a lista j� n�o tem mais registros;

    }
    else//Se o contador � maior que 0, ent�o come�ar� pelo final e mostrar� apenas os �ltimos registros de acordo com o contador
    {

        aux = q->fim;// da a vari�vel aux o valor da lista pelo fim;
        for(i=0;i<contador;i++){//Repeti at� que a vari�vel i eja igual ao contador;
                                //contador � a quantidade dos registros feitos, antes de voltar a fun��o inicial
            printf("Cliente com o n�mero 9%d, com nome de %s %s, adquiriu o servi�o de %s.\n\n",aux->numero, aux->nome,aux->sobrenome,aux->servico);
            aux = aux->ant;//a vari�vel aux recebe o valor do regitro anterior;
        }
    }
    return(0);//retorna para a fun��o anterior;
}
/*Refer�ncias:
https://docs.microsoft.com/en-us/previous-versions//aa383749(v=vs.85)?redirectedfrom=MSDN
*/

