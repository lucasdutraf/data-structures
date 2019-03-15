#include <bits/stdc++.h>
#include "lista_circular.hpp"

using namespace std;

CircularList::CircularList() {
    head = NULL;
}

void CircularList::push(int element) {
    Node3 node;
    if (head == nullptr) {
      head = node;
      head->next =  NULL;
    }
    else {
      node->next = head->next;
      head->next = node;
    }
}

void CircularList::pop() {
    auto aux = head->next->next;
    delete head->next;
    head->next = aux;
    // Remove o nó após o head
    // Complexidade: O(1)
}

void CircularList::clear() {
    // Remove todos os nós da lista
    // Complexidade: O(n)
}

bool CircularList::find(int element) {
    // Procura se existe um nó cujo o valor seja igual ao de element
    // Complexidade: O(n)

    return false;
}

unsigned int CircularList::size() {
    // Retorna o número de nós que existem na lista
    // Complexidade: O(n)

    return 0;
}

bool CircularList::empty() {
    if (head == NULL) {
      return true;
    }
    else {
      return false;
    }

}

void CircularList::print() {
    Node3 * node = head;
    Node3 * node = tail;

    cout << "--List Begin [" << head << "]-- Size = " << size() << "\n";

    do {
        if (!head) break;

        cout << "(";

        cout << node->value << ", ";

        cout << node->next;
        if (node->next) cout << " [" << node->next->value << "]";

        cout << ")\n";

        node = node->next;
    } while(node != head);

    cout << "--List End--\n\n";
}
