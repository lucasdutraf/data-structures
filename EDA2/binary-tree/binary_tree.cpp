#include <iostream>

template <typename T>
class BST {
private:
  struct Node {
    Node *left, *right;
    T info;
  }
  Node * root;

public:
  BST() : root(nullptr) {}

  // o que o const assegura?
  void insert(const T& info) {
    Node *node = root, *prev = nullptr;
    //cria o nó e atribui a raíz a ele, para assim, começar a busca de qual lugar ele se encaixa
    while (node) {
      prev = node;
      //armazena a posição em que o algoritmo parou para que seja usada futuramente como ponteiro para a inserção do novo nó
      if (node->info == info) {
        return;
        //caso específico de implementação, aborta a função caso o valor já esteja na árvore
      }
      else if (node->info < info) {
        node = node->right;
        //compara a info passada como parâmetro com a info do nó que está sendo avaliado, caso a do parâmetro seja maior o nó é atualizado para o nó a direita do atual
      }
      else {
        node = node->left;
        //compara a info passada como parâmetro com a info do nó que está sendo avaliado, caso a do parâmetro seja menor o nó é atualizado para o nó a esquerda do atual
      }
    }

    node = new Node {info, nullptr, nullptr};
    //após encontrada qual a ultima posição anterior a inserção do nó, o nó é criado e atribuído a node->info o valor do parâmetro

    if (!root) {
      root = node;
      //verifica se há uma raíz, e caso não tenha iguala o ponteiro raiz ao node recém criado
    }
    else if (info > prev->info) {
      prev->right = node;
      //caso o valor do parâmetro seja maior que o node->info do último nó avaliado, o nó recém criado é adicionado a direita
    }
    else {
      prev->left = node;
      //caso o valor do parâmetro seja menor que o node->info do último nó avaliado, o nó recém criado é adicionado a esquerda
    }

  }
};
