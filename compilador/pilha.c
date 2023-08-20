#define MAX 1000
float Pilha[MAX];
float aux1, aux2;
int topo = 0;

void push(float valor){
    Pilha[topo++] = valor;
}

float pop(){
    return Pilha[--topo];
}
