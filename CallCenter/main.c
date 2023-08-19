/*------------------------------------------------------------------
Nomes dos desenvolvedores:
João Victor Zanolli Crespo
Tiago Zardetto Hourneau
Samuel Munhoz Tunes
---------------------------------------------------------------------
Orientadores:
Prof. Claudio Correa
Prof. João Benedito
---------------------------------------------------------------------
*/

#include <stdio.h> //inclui a biblioteca stdio
#include <conio.h>//inclui a biblioteca conio
#include <stdlib.h>//inclui a biblioteca stdlib
#include <locale.h>//inclui a biblioteca locale
#include <string.h>//inclui a biblioteca string
#include <windows.h>//inclui a biblioteca windows para a parte gráfica

struct cliente{//estrutura de lista com nome cliente
    struct cliente *ant;//variavel de controle dos registros anteriores, com o tipo da própria struct, para poder manipular a struct;
    long int numero; // cria a variável com o tipo long int para o número de telefone;
    char nome[20]; // cria a variável com o tipo char para o nome do cliente;
    char sobrenome[20]; // cria a variável com o tipo char para o sobrenome do cliente;
    long int rg; // cria a variável com o tipo long int para o RG;
    int idade; // cria a variável com o tipo int para a idade;
    char servico[10]; // cria a variável com o tipo char para guardar o serviço escolhido;
    struct cliente *prox;//variavel de controle dos próximos registros, com o tipo da própria struct, para poder manipular a struct;
};

typedef struct{//cria um estrutura para definir o começo e o fim da lista;
    struct cliente *inicio;//varivel para definir o incio da lista;
    struct cliente *fim;//varivel para definir o fim da lista;
} listacircularde;

int verifcad = 0;//variável para controlar a geração dos próximos contatos;

int main()
{
     setlocale(LC_ALL, "Portuguese");//função para adaptar o programa para a lingua portuguesa;
    listacircularde *lista; // pegando a struct e criando um caminho para a lista;
    cria(&lista);   //chamando a função cria, enviando para ela a lista, para poder cria-la;
    paginaInicial(&lista);//função para abrir a parte visual do projeto, onde estará o conteúdo;
}

int paginaInicial(struct listacircularde *lista){ //função inicial, onde recebe o endereço da lista criada;
int opcao, contador = 0;//declaração de variáveis inteiros, para servir de apoio;
    do{ // do e whille para criar o menu;
            system("cls");//código do terminal para limpar a tela;
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
            scanf("%d", &opcao);//entrada de dados para a opção escolhida;

            switch(opcao)//estrutura condicional da escolha feita no menu;
            {
                case 1://caso a escolha seja '1';
                    Inicio(lista, contador); // inicia a função Inicio, e envia para ela a lista e o contador;
                    break;//sair do switch;
                case 2://caso a escolha seja '2';
                    VisualizarClientes(lista);// inicia a função VisualizarClientes e envia a lista;
                    break;//sair do switch;
                case 3://caso a escolha seja '3';
                    system("cls");//código do terminal para limpar a tela;
                    //Os créditos, mensagem final do projeto;
                    printf("=============================================\n");
                    printf("===         SISTEMA DE CALL CENTER        ===\n");
                    printf("=============================================\n");
                    printf("                    Sobre:                   \n");
                    printf("        Trabalho Final Laboratório de        \n");
                    printf("       Algoritmo e Estrutura de Dados ||     \n\n");
                    printf("                   Autores:                  \n");
                    printf("           João Victor Zanolli Crespo        \n");
                    printf("            Tiago Zardetto Hourneaux         \n");
                    printf("              Samuel Munhoz Tunes            \n\n");
                    printf("                  Orientador:                \n");
                    printf("              Prof. Claudio Correa           \n");
                    printf("=============================================\n");
                    system("pause");//código do terminal para dar um pausar a execução momentaneamente;
                    return 0; //sai da condicional;
                default:// Se nenhuma das alternativas anteriores foi escolhida
                    MessageBox(0, "OPÇÃO INVÁLIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que a opção escolhida é inválida
            }
    }while(opcao != 3);//Estrutura de repetição constante que verifica a opção escolhida do menu;
                        //no momento que opcao se tornar 3 sai da repetição;
    return(0);//finaliza o projeto
}
int NumerosAleatorios()//Função que gera o número de telefone do cliente;
{
    long int i, numg; // Criação de variável do tipo long int, que guarda o número gerado
    do//do e while que verifica se a quantidade de digitos é maior que 4;
    {
        numg = (rand() % 10000);// gera um número aleatório até 10000 e aloca em numg;
    }while(numg < 1000);//repetirá até que o numg seja maior que 1000;
    return numg;//retorna o número gerado
}

int VisualizarClientes(struct listacircularde *lista)//função ára vizualizar os clientes cadastrados;
{
    int opcaov; //controlador da escolha do menu
    do{//do e while do menu até a escolha das opções
            system("cls");//código do terminal para limpar a tela;
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
            scanf("%d", &opcaov);//entrada de dados para a opção escolhida;

            switch(opcaov)//estrutura condicional da escolha feita no menu;
            {
                case 1://caso a escolha seja '1'
                    mostra(lista, 0);//chama a função mostra e manda a lista e o 0(que é para o contador)
                    printf("\n\n");
                    system("pause");//código do terminal para dar um pausar a execução momentaneamente;
                    break;//sair do switch
                case 2://caso a escolha seja '2'
                    break;//sair do switch
                default:// Se nenhuma das alternativas anteriores foi escolhida
                    MessageBox(0, "OPÇÃO INVÁLIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que a opção escolhida é inválida
            }

    }while(opcaov != 2);//no momento que opcao se tornar 2 sai da repetição;
    return(0);//retorna a função anterior
}

int ContatoMessageBox()//função para criar a caixa de mensagem para o próximo cliente;
{
    int msgboxID = MessageBox(  // gera a caixa de mensagem com os parâmetros abaixo e aloco o retorno para a variável inteira mgboxID
        NULL,
        "Tem certeza que deseja ir para o proximo contato?",//Conteúdo da caixa de mensagem;
        "Aviso",    // Título da caixa de mensagem;
        MB_ICONEXCLAMATION | MB_YESNO// Botões da caixa de mensagem;
    );
    return msgboxID; // retorna a variável msgboxID
}

int Inicio(struct listacircularde *lista, int contador)//função que cadastra os clientes, recebendo a lista e o contador;
{
    int opcaoini; //controlador da escolha do menu
    int msgboxID; //cria a variável msgboxID, para receber o retorno da caixa de mensagem
    verifcad=0;
    do{//do e while da função de cadastro;
        system("cls");//código do terminal para limpar a tela;
            //nome do projeto;
        printf("========================================================================\n");
        printf("  ____   _____   _      _        ____   ___   _  _   _____   ___   ___  \n");
        printf(" |  __| |  _  | | |    | |      |  __| | __| | || | |_   _| | __| | _ | \n");
        printf(" | |__  | |_| | | |__  | |__    | |__  | _|  | .` |   | |   | _|  |   / \n");
        printf(" |____| |_| |_| |____| |____|   |____| |___| |_||_|   |_|   |___| |_|_| \n\n");
        printf("========================================================================\n\n");
        printf("Ligue para o numero abaixo:\n");
        int num1, num2;//cria as variáveis num1 e num2, que serão o número de telefone;
        long int concatenado;// variável para receber os valores num1 e num2 e será o número de telefone;
        if(verifcad == 0){//verifica se o cliente quer trocar de número;
            num1 = NumerosAleatorios();//chama a função para gerar os números e alocar em num1;
            num2 = NumerosAleatorios();//chama a função para gerar os números e alocar em num2;
            verifcad = 1;//aloca o valor 1 na variável verifcad;
        }
        printf("Numero de telefone 9%d-%d\n", num1, num2);
        concatenado = num1 * 10000 + num2;//junta as duas variáveis e aloca dentro de concatenado;número de telefone;
        //Menu para cadastrar os clientes
        printf("\n[1] Cadastrar Cliente");
        printf("\n[2] Proximo Contato");
        printf("\n[3] Encerrar");
        printf("\n[4] Voltar ao menu inicial\n");

        printf("\nDigite sua escolha = ");
        scanf("%d", &opcaoini);//entrada de dados para a opção escolhida;

        switch(opcaoini)//estrutura condicional da escolha feita no menu;
        {
            case 1://caso a escolha seja '1';
                CadastrarCliente(lista,concatenado);//chama a função apra cadastrar os clientes e envia a lista e o número de telefone;
                contador++;//soma o contador em um, para saber a quantidade de números cadastrados dentro da função 'Inicio';
            break;//sair do switch;

            case 2://caso a escolha seja '2';
                msgboxID = ContatoMessageBox();//abre a caixa de mensagem e o retorno guarda na variável msgboxID;
                if (msgboxID == IDYES)//Verifica se o botão pressionado foi o Yes;
                {
                    verifcad = 0;//Coloca o valor da variável verifcad para 0, assim gera um novo número de telefone;
                }
                break;//sair do switch;

            case 3://caso a escolha seja '3'
                if(contador!=0)//verifica se o contador é diferente de 0(contador é a quantidade de registros dentro da função Inicio no momento);
                    mostra(lista,contador);//chama a função mostra e envia a lista e o contador(quantidade de registros);
                else//caso não seja diferente de 0 então não tem nenhum registro na função Inicio dessa vez;
                    printf("Sem Cadastro");

                printf("\n\n");//pula duas linhas;
                system("pause");//código do terminal para dar um pausar a execução momentaneamente;
                break;//sair do switch;

            case 4://caso a escolha seja '4';
                break;//sair do switch;
            default:// Se nenhuma das alternativas anteriores foi escolhida;
                MessageBox(0, "OPÇÃO INVÁLIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que a opção escolhida é inválida;
        }


    }while(opcaoini != 4);//no momento que opcao se tornar 4 sai da repetição;
    return(0);//retorna a função anterior;
}

CadastrarCliente(listacircularde *q,long int concatenado)//função cadastrar clientes, onde recebe o endereço da lista e o número de telefone;
{
    //cria as variáveis que guardará a entrada de dados do usuário;
    char nome[20],sobrenome [20], servico[20];
    long int rg,numero;
    int idade;
    //----------------------------------------------------------------
    int opcaoserv=0;////controlador da escolha do menu;
    numero = concatenado;//Aloca a variável concatenado ao numero;

    printf("Digite o nome do cliente = ");
    fflush(stdin);//limpa o buffer;
    gets(nome);//guarda a entrada de dados a variável nome;
    printf("Digite o sobrenome do cliente = ");
    fflush(stdin);//limpa o buffer;
    gets(sobrenome);//guarda a entrada de dados a variável sobrenome;

    do{//do while para verificar a quantidade de digitos do rg;
        printf("Digite o rg do cliente = ");
        scanf("%li", &rg);//guarda a entrada de dados a variável rg;
        if(rg < 10000000 || rg > 100000000)
        {
            MessageBox(0, "RG INVÁLIDO","ERRO", 0);//Abri um caixa de mensagem, mostrando que o valor do rg é inválido;
        }
    }while(rg < 10000000 || rg > 100000000);//no momento que a RG tiver 8 digitos sai da repetição;

    do{//do while para verificar a idade é maior que 18 e menor que 110;
        printf("Digite a idade do cliente = ");
        scanf("%d", &idade);//guarda a entrada de dados a variável idade;
        if(idade < 18 || idade > 110)
        {
            MessageBox(0, "IDADE INVÁLIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que o valor da idade é inválido;
        }
    }while(idade < 18 || idade > 110);//no momento que a idade se tornar entre 18 e 110 sai da repetição;

    while((opcaoserv!=1) && (opcaoserv!=2) && (opcaoserv!=3)) {//estrutura de repetição que só parará quando umas das ecolhas do menu for feita;
      //Menu de serviços
        printf("\n[1] Internet");
        printf("\n[2] Telefone");
        printf("\n[3] TV a Cabo");

        printf("\nDigite sua escolha = ");
        scanf("%d", &opcaoserv);//entrada de dados para a opção escolhida;

         switch(opcaoserv)//estrutura condicional da escolha feita no menu;
        {
            case 1://caso a escolha seja '1'
                strncpy(servico,"Internet",9);//aloca o plano "Internet", dentro da variável servico;
            break;//sair do switch

            case 2://caso a escolha seja '1'
                strncpy(servico,"Telefone",9);//aloca o plano "Telefone", dentro da variável servico;
            break;//sair do switch

            case 3://caso a escolha seja '1'
                strncpy(servico,"TV a Cabo",10);//aloca o plano "TV a Cabo", dentro da variável servico;
            break;//sair do switch

            default://Se nenhuma das alternativas anteriores foi escolhida
                MessageBox(0, "OPÇÃO INVÁLIDA","ERRO", 0);//Abri um caixa de mensagem, mostrando que a opção escolhida é inválida;
        }
    }

    insere(q, numero, nome, sobrenome, rg,idade,servico);//chama a função insere e envia todos os dados do cliente para inserir na lista;
    MessageBox(0, "Cliente Cadastrado!","Sucesso", 0);//abre a caixa de mensagem, para mostrar que o cadastro foi feito;
    verifcad++;//soma o valor da variável verifcad em 1;
    printf("\n\n");
    return(0);//retorna para a função anterior
}

int cria(listacircularde *q)//função para criar a lista
{
    q->inicio = NULL;//cria o inicio da lista e da o valor NULL
    q->fim = NULL;//cria o fim da lista e da o valor NULL
    return(0);//retorna para a função anterior
}

//função insere que recebe todos os valores do registro e insere na lista;
int insere(listacircularde *q, long int numero, char nom[20], char sobre[20], long int rg, int idade, char servico[20])
{
    struct cliente *aux; //cria uma variável para auxiliar na lista, recebendo a estrutura da lista;
    aux = (struct cliente*) malloc(sizeof(struct cliente));// Faz uma alocação dinâmica de memória, da lista para a variavel aux;
    if (aux == NULL)//verifica se a lista não foi criada;
        return 0;//retorna para a função anterior;

    if (q->inicio == NULL)//verifica se não à um registro no inicio;
    {
        aux->numero = numero; // Guarda o valor da variável numero dentro da lista, em sua respectiva localização;
        strcpy(aux->nome, nom);// Guarda o valor da variável nome dentro da lista, em sua respectiva localização;
        strcpy(aux->sobrenome, sobre);// Guarda o valor da variável sobrenome dentro da lista, em sua respectiva localização;
        strcpy(aux->servico, servico);// Guarda o valor da variável servico dentro da lista, em sua respectiva localização;
        aux->rg = rg;// Guarda o valor da variável rg dentro da lista, em sua respectiva localização;
        aux->idade = idade;// Guarda o valor da variável idae dentro da lista, em sua respectiva localização;

        q->inicio = aux;//Insere no início da lista todos os registros
        q->fim = aux;//Insere no final da lista todos os registros
        aux->prox = q->inicio;//Insere o registro do inicio para o próximo, para ter um próximo registro
        aux->ant = q->fim;//Insere o registro do fim para o anterior, para ter um registro anterior
        return 1;//retorna a função anterior
    }

    aux->numero = numero;// Guarda o valor da variável numero dentro da lista, em sua respectiva localização;
    strcpy(aux->nome, nom);// Guarda o valor da variável nome dentro da lista, em sua respectiva localização;
    strcpy(aux->sobrenome, sobre);// Guarda o valor da variável sobrenome dentro da lista, em sua respectiva localização;
    strcpy(aux->servico, servico);// Guarda o valor da variável servico dentro da lista, em sua respectiva localização;
    aux->rg = rg;// Guarda o valor da variável rg dentro da lista, em sua respectiva localização;
    aux->idade = idade;// Guarda o valor da variável idae dentro da lista, em sua respectiva localização;

    aux->ant = q->fim;//Insere o registro do fim para o anterior, para ter um registro anterior
    q->fim->prox = aux;//aloca o registro no próximo valor para o final, para que tenha um valor anterior
    aux->prox = q->inicio;//Insere o registro do inicio para o próximo, para ter um próximo registro
    q->inicio->ant = aux;//aloca o registro anterior para inicio, para que tenha um próximo valor
    q->fim = aux;//Insere no final da lista todos os registros
    return 1;//retorna para a função anterior;
}

int mostra(listacircularde *q,int contador)//função para mostrar os clientes, recebe o endereço da lista e o contador;
{
    struct cliente *aux;  //cria uma variável para auxiliar na lista, recebendo a estrutura da lista;
    int i; // variável de apoio no for;
    if (q->inicio == NULL){//verifica se a lista está vazia;
        printf("Lista vazia...\n\n");
        return 0;//retorna para a função anterior;
        }

    if(contador == 0){//verifica se o contador é igual 0, assim a lista começara a ser mostrada pelo início;
        aux = q->inicio;// da a variável aux o valor da lista pelo inicio;
          do//do e while para mostrar todos os registros
           {
                printf("\nCliente: \nNúmero: 9%d\nNome: %s %s \nRG: %ld \nIdade: %d \nServiço Adquirido: %s.\n\n",aux->numero, aux->nome,aux->sobrenome,aux->rg,aux->idade, aux->servico);
                //Mostra os dados do cliente

                aux = aux->prox;//a variável aux recebe o valor do próximo regitro;
            } while (aux != q->inicio);//verifica se a lista já não tem mais registros;

    }
    else//Se o contador é maior que 0, então começará pelo final e mostrará apenas os últimos registros de acordo com o contador
    {

        aux = q->fim;// da a variável aux o valor da lista pelo fim;
        for(i=0;i<contador;i++){//Repeti até que a variável i eja igual ao contador;
                                //contador é a quantidade dos registros feitos, antes de voltar a função inicial
            printf("Cliente com o número 9%d, com nome de %s %s, adquiriu o serviço de %s.\n\n",aux->numero, aux->nome,aux->sobrenome,aux->servico);
            aux = aux->ant;//a variável aux recebe o valor do regitro anterior;
        }
    }
    return(0);//retorna para a função anterior;
}
/*Referências:
https://docs.microsoft.com/en-us/previous-versions//aa383749(v=vs.85)?redirectedfrom=MSDN
*/

