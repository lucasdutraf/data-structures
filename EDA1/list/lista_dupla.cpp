#include <bits/stdc++.h>
#include "lista_dupla.hpp"

using namespace std;

DoubleLinkedList::DoubleLinkedList() {
    tail = head = nullptr;
    _size = 0;
}

DoubleLinkedList::~DoubleLinkedList() {
    auto p = head;
    while (p) {
      auto next = p->next;
      delete p;
      p = next;
    }
}

void DoubleLinkedList::push_back(int element) {
    auto n = new Node(element, tail, nullptr);
    tail ? tail->next = n : head = n;
    tail = n;
    _size++;
}

void DoubleLinkedList::pop_back() {
    if (!tail) {
      throw "Lista vazia!";
    }
    auto temp = tail;
    tail = tail->prev;
    delete temp;

    tail ? tail->next = nullptr : head = nullptr;
    _size--;
}

void DoubleLinkedList::push_front(int element) {
    auto n = new Node(element, nullptr, head);

    head ? head->prev = n : tail = n;
    head = n;
    _size++;
}

void DoubleLinkedList::pop_front() {
    if (!head) {
      throw "Lista vazia!";
    }
    auto temp = head;
    head = head->next;
    delete temp;

    head ? head->prev =  nullptr : tail = nullptr;
    _size--;
}

int DoubleLinkedList::front() {
    if (!head) {
      throw "Lista vazia!";
    }
    return head->value;
}

int DoubleLinkedList::back() {
    if (!tail) {
      throw "Lista vazia!";
    }
    return tail->value;
}

void DoubleLinkedList::clear() {
    auto p = head;
    while (p) {
      auto next = p->next;
      delete p;
      p = next;
    }
}

unsigned int DoubleLinkedList::size() {
    return _size;
}

bool DoubleLinkedList::empty() {
    if (!head) {
      return true;
    }

    return false;
}

void DoubleLinkedList::print()
{
    Node2 * node = head;

    cout << "--List Begin [" << head << "]-- Size = " << size() << "\n";

    while(node)
    {
        cout << "(";

        cout << node->prev;
        if (node->prev) cout << " [" << node->prev->value << "]";

        cout << ", " << node->value << ", ";

        cout << node->next;
        if (node->next) cout << " [" << node->next->value << "]";

        cout << ")\n";

        node = node->next;
    }

    cout << "--List End [" << tail << "]--\n\n";
}
