#include <iostream>

template <typename T>
class BST {
private:
  struct Node {
    Node *left, *right;
    T info;
  }
  Node * root;

  //recebe um nó, função que apenas será usada em conjunto com a erase()
  void delete_by_merging (Node** n) {
    auto node = *n;
    //guarda uma referência para n

    if (node == nullptr) return;
    //se o nó for vazio, a função se encerra

    if (node->right == nullptr) {
      *n = node->left;
      //se o nó possuir apenas uma folha a esquerda, essa folha é atribuída a *n
    }
    else if (node->left == nullptr) {
      *n = node->right;
      //se o nó possuir apenas uma folha a direita, essa folha é atribuída a *n
    }
    else {
      //caso ele possua dois fihos
      auto temp = node->left;
      //atribui a variavel temp a subárvore da esquerda

      while (temp->right) {
        //enquanto houver um nó a direita na subárvore da esquerda
        temp = temp->right;
        //temp é atualizado com o próximo nó a direita
      }
      temp->right = node->right;
      //a variavel temp, mais precisamente o próximo nó a direita, receberá a subárvore da direita
      *n = node->left;
      //perguntar ao professor o que essa linha faz
    }
    delete node;
  }

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

  void erase(const T& info) {
    Node** node = &root;

    while (*node) {
      //laço para encontrar o nó que deve ser atribuído para ser excluído
      if ((*node)->info == info) {
        break;
        //para o laço pois a info contida no nó é a procurada
      }
      if (info < (*node)->info) {
        node = &(*node)->left;
        //se a info contida no nó atual for maior que a recebida do parâmetro, o valor do nó é atualizado para o próximo nó a esquerda
      }
      else {
        node = &(*node)->right;
        //se a info contida no nó atual for menor que a recebida do parâmetro, o valor do nó é atualizado para o próximo nó a direita
      }
      delete_by_merging(node);
      //chama a função privada para excluir o nó encontrado
    }
  }

};
