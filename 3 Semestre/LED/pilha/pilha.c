#include <stdlib.h> //Para usar malloc, free, exit ...
#include <stdio.h>  //Para usar printf ,... 
#include "pilha.h"  //Carrega o arquivo .h criado

//Implementa��o: pilha seq.

//Opera��es
//-------------------------------------------
//Define (P): cria uma pilha P vazia
void Define(pilha *P)
{
   P->topo = 0;
}

//Insere x no topo de P (empilha): Push (x, P)
boolean Push(tipo_dado x, pilha *P)
{
   if(P->topo == MAX)
       return FALSE;    //Pilha cheia

   P->topo ++;
   P->A[P->topo].info = x;

   return TRUE;
}

//Testa se P est� vazia
boolean Vazia (pilha *P)
{
   return(P->topo == 0);
}

//Acessa o elemento do topo da pilha (sem remover) 
//Obs: testar antes se a pilha n�o est� vazia
tipo_elem Top (pilha *P)
{
   return P->A[P->topo];
}

//Remove o elemento no topo de P sem retornar valor (desempilha, v. 1)
//Obs: testar antes se pilha n�o est� vazia.
void Pop_up (pilha *P)
{
   P->topo --;
}

//Remove e retorna o elemento (todo o registro) eliminado (desempilha, v. 2)
//Obs: testar antes se pilha n�o est� vazia.
tipo_elem Pop (pilha *P)
{
   tipo_elem x = P->A[P->topo];
   P->topo --;
   return x;
}
//-------------------------------------------

