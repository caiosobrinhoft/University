#define MAX 1000    //estimativa para tamanho m�ximo
#define TRUE 1      //define tipo boleano
#define FALSE 0
#define boolean int
#define indice int

//Estruturas e tipos empregados
/*(Obs: aqui n�o est� usando encapsulamento, no entanto, 
pode-se usar fins did�ticos e em casos pr�ticos)*/
//------------------------------------------------------
//Tipo chave
typedef int tipo_chave; 

//Tipo registro
typedef struct
{
   char nome[30];
   //... (caso tenha mais campos)
} tipo_dado;

//Tipo elemento (registro + chave)
typedef struct
{
   //tipo_chave chave;
   tipo_dado info;
} tipo_elem;

//Tipo lista (seq. encadeada)
typedef struct
{
   tipo_elem A[MAX+1];
   indice topo;
} pilha;
//-------------------------------------------


//Declara��es de fun��es/opera��es
//------------------------------------------------------
//Cria pilha vazia (deve ser usada antes de qualquer outra opera��o)
void Define(pilha *P);

//Insere item no topo da pilha. Retorna true se sucesso, false c.c.
boolean Push(tipo_dado elem, pilha *P);

//Retorna true se pilha � vazia, false c.c.
boolean Vazia(pilha *P);

//Reinicializa pilha
void Desvaziar(pilha *P);

//Devolve o elemento do topo sem remove-lo. Chamada apenas se pilha � n�o vazia
tipo_elem top(pilha *P);

//Remove item do topo da pilha. Chamada apenas se pilha � n�o vazia
void Pop_up(pilha *P);

//Remove e retorna o item do topo da pilha. Chamada apenas se pilha nao vazia
tipo_elem pop(pilha *P);
//------------------------------------------------------

