#include <iostream>
using namespace std;
template <class T>  // Aqui está se trabalhando com a classe Árvores Binárias, T(maiúsculo) significa tree, ou seja, árvore em Inglês.
class ArvoreNo {    // Um nó utilizado tanto em C quanto em C++ segundo definição livro - Estrututura de Dados em C.
};

struct no *Esquerda, *Direita;  // Definindo os dois ponteiros-chave de uma árvore com dois filhos.
};
typedef struct;                 // A partir daqui, partem as sub-árvores ou corpo da questão. O nó raiz fica em cima como se a árvore fosse de cabeça para baixo.
     No raiz;
}ArvB;

// Agora, implantarei a não recursividade como Proposta de Implementação 1 dos slides trabalhados no Google Sala de Aula.

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

// Garantindo valores do nó da árvore caso a raiz(nó) seja nula ou vazia.
     if(raiz == NULL) {
             raiz = node;
     }else if (node -> getElement() <template -> getElement()) {
             template -> esquerda = node;
     }else if (node -> getElement() <template -> getElement()) {
             template -> direita = node;
     } else {
            cout << "<!> ALERTA: NÓS DUPLICADOS. <!>" << endl <<
            "O valor \" " << node -> getElement() <<
            "\" ainda ou já existe na árvore." << endl << endl
     }
     
// Agora, implantarei a recursão como Proposta de Implementação 2 dos slides trabalhados no Google Sala de Aula.

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
          cout << "<!> ALERTA: NÓS DUPLICADOS. <!>" << endl <<
          "O valor \"" << node -> getElement() <<
          "\" ainda ou já existe na árvore." << endl << endl
    }else {
          raiz = node;
   }
};

/* Explicação das estruturas abaixo: criação de novos nós com suas sub-árvores(filhos dos nós),
retornando o endereço do nó raiz criado. Isto é, o escopo da questão demonstrada. */

typedef struct noArv NoArv;

NoArv* arv_criavazia (void);
NoArv* arv_cria(char c, NoArv* e, NoArv* d);
NoArv* arv_libera(NoArv* a);
int arv_vazia(NoArv* a);
int arv_pertence(NoArv* a, char c);
int arv_imprime(NoArv* a);


NoArv* arv_cria(char c, NoArv* sae, NoArv* sad) {
       NoArv* p = (NoArv*)malloc(sizeof(NoArv));   // Endereço modificado de um nó raiz.
       if (p == NULL) exit(1);
       p -> valor = c;
       p -> esq = sae;
       p -> dir = sad;
       return p;                                   // Função de retorno do malloc.
}
             
     
     
           
           
