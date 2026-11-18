#ifndef PILHA_H

#define PILHA_H
//------------------------------------------------
typedef int tipelemento ;
typedef struct noh;
typedef struct  noh* Pilha;
//------------------------------------------------
noh* CriarPilha();
bool PilhaVazia(const Pilha *p);
void Empilhar(Pilha *p, tipelemento x);
void Desempilhar(Pilha *p);
tipelemento Topo(const Pilha *p);
void ApagarPilha(Pilha *p);
//------------------------------------------------
#endif
