#include <stdlib.h>
#include <stdbool.h>
//-----------------------------------------------
typedef int tipelemento;
//-----------------------------------------------
typedef struct noh
{
    tipelemento info;
    struct noh *prox;
} noh;
typedef noh* Pilha;
//-----------------------------------------------
noh* CriarPilha()
{
    noh *p = NULL;
    return p;
}
//-----------------------------------------------
bool PilhaVazia(const Pilha *p)
{
    return (*p == NULL);
}
//-----------------------------------------------
void Empilhar(Pilha *p, tipelemento x)
{
    noh *aux = (noh*)malloc(sizeof(noh));
    aux->info = x;
    aux->prox = *p;
    *p = aux;
}
//-----------------------------------------------
void Desempilhar(Pilha *p)
{
    if (!PilhaVazia(p))
    {
        noh *aux = *p;
        *p = (*p)->prox;
        free(aux);
    }
}
//-----------------------------------------------
tipelemento Topo(const Pilha *p)
{
    return (*p)->info;
}
//-----------------------------------------------
void ApagarPilha(Pilha *p)
{
    while (!PilhaVazia(p))
        Desempilhar(p);
}

