#include <iostream>
using namespace std;
template <class T>  // Aqui est� se trabalhando com a classe �rvores Bin�rias, T(mai�sculo) significa tree, ou seja, �rvore em Ingl�s.
class ArvoreNo {    // Um n� utilizado tanto em C quanto em C++ segundo defini��o livro - Estrututura de Dados em C.
};

struct no *Esquerda, *Direita;  // Definindo os dois ponteiros-chave de uma �rvore com dois filhos.
};
typedef struct;                 // A partir daqui, partem as sub-�rvores ou corpo da quest�o. O n� raiz fica em cima como se a �rvore fosse de cabe�a para baixo.
     No raiz;
}ArvB;

// Agora, implantarei a n�o recursividade como Proposta de Implementa��o 1 dos slides trabalhados no Google Sala de Aula.

void function inserir_sem_recursao(Node<Type>*node) {
     Node<Type> *p = raiz, *template = NULL;
     while(p != NULL) {
             template = *p;
     if(node -> getElement() < p -> getElement()) {
             p = p -> getEsquerda();
     }else {
           p = p -> getDireita();
     }
}    
     }

// Garantindo valores do n� da �rvore caso a raiz(n�) seja nula ou vazia.
     if(raiz == NULL) {
             raiz = node;
     }else if (node -> getElement() <template -> getElement()) {
             template -> esquerda = node;
     }else if (node -> getElement() <template -> getElement()) {
             template -> direita = node;
     } else {
            cout << "<!> ALERTA: N�S DUPLICADOS. <!>" << endl <<
            "O valor \" " << node -> getElement() <<
            "\" ainda ou j� existe na �rvore." << endl << endl
     }
     
// Agora, implantarei a recurs�o como Proposta de Implementa��o 2 dos slides trabalhados no Google Sala de Aula.

typedef struct noArv NoArv;

void function inserir_com_recursao(Node<Type> *node, Node<Type> *raiz) {
     if (raiz != NULL) {
              if (node -> getElement() < raiz -> getElement()) {
                   if (raiz -> getEsquerda() == NULL) {
                            raiz -> Esquerda = node;
                   }else {
                         function inserir_com_recursao(node, raiz -> getEsquerda())
                   }
     else if (node -> getElement() < raiz -> getElement()) {
          if (raiz -> getDireita() == NULL) {
                           raiz -> Direita = node;
          }else {
                function inserir_com_recursao(node, raiz -> getDireita())
          }
     }    
     else {
          cout << "<!> ALERTA: N�S DUPLICADOS. <!>" << endl <<
          "O valor \"" << node -> getElement() <<
          "\" ainda ou j� existe na �rvore." << endl << endl
    }else {
          raiz = node;
   }
};

/* Explica��o das estruturas abaixo: cria��o de novos n�s com suas sub-�rvores(filhos dos n�s),
retornando o endere�o do n� raiz criado. Isto �, o escopo da quest�o demonstrada. */

typedef struct noArv NoArv;

NoArv* arv_criavazia (void);
NoArv* arv_cria(char c, NoArv* e, NoArv* d);
NoArv* arv_libera(NoArv* a);
int arv_vazia(NoArv* a);
int arv_pertence(NoArv* a, char c);
int arv_imprime(NoArv* a);


NoArv* arv_cria(char c, NoArv* sae, NoArv* sad) {
       NoArv* p = (NoArv*)malloc(sizeof(NoArv));   // Endere�o modificado de um n� raiz.
       if (p == NULL) exit(1);
       p -> valor = c;
       p -> esq = sae;
       p -> dir = sad;
       return p;                                   // Fun��o de retorno do malloc.
}
             
     
     
           
           
