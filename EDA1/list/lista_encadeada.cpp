#include <bits/stdc++.h>
#include "lista_encadeada.hpp"

using namespace std;

LinkedList::LinkedList() {
    tail = head = nullptr;
    _size = 0;
}

LinkedList::~LinkedList() {
  auto p = head;
  while (p) {
    auto next = p->next;
    delete p;
    p = next;
  }
}

void LinkedList::push_back(int element) {
  auto n = new Node(element, nullptr);
  tail ? tail->next = n : head = n;
  tail = n;
  _size++;

}

void LinkedList::pop_back() {
    if (!head) {
      throw "lista vazia";
    }
    auto prev = head;
    while (prev->next && prev->next != tail) {
      prev = prev->next;
    }
    delete tail;

    tail == head ? (head = tail = nullptr) : (tail = prev, tail->next = nullptr);
    _size--;
}

void LinkedList::push_front(int element) {
    auto n = new Node(element, head);
    tail = (head ? tail : n);
    head = n;
    _size++;
}

void LinkedList::pop_front() {
    if (!head) {
      throw "Lista vazia";
    }
    auto aux = head;
    head = head->next;
    delete aux;

    tail = head ? tail : nullptr;
    _size--;
}

void LinkedList::insert(int element, unsigned int index)
{
    // Adiciona um novo nó no indice index da lista
    // Complexidade: O(n)

}

void LinkedList::erase(unsigned int index)
{
    // Remove o nó de indice index da lista
    // Complexidade: O(n)

}

int LinkedList::front() {
    if (!head) {
      return -1;
    }
    return head->value;
}

int LinkedList::back() {
    if (!tail) {
      return -1;
    }
    return tail->value;
}

void LinkedList::clear() {
    _size = 0;
    delete head;
    delete tail;
}

bool LinkedList::find(int element) {
    // Procura se existe um nó cujo o valor seja igual ao de element
    // Complexidade: O(n)

    return false;
}

bool LinkedList::empty()
{
    if (_size == 0) {
      return true;
    }
    else {
      return false;
    }

}

void LinkedList::print()
{
    Node1 * node = head;

    cout << "--List Begin [" << head << "]-- Size = " << size() << "\n";

    while(node)
    {
        cout << "(" << node->value << ", " << node->next;
        if (node->next) cout << " [" << node->next->value << "]";
        cout << ")\n";

        node = node->next;
    }

    cout << "--List End [" << tail << "]--\n\n";
}
