#ifndef LISTA_DUPLA_HPP
#define LISTA_DUPLA_HPP

struct Node {
    int value;
    Node * next;
    Node * prev;
    Node (int v, Node *p, Node *n) : value(v), prev(p), next(n) {}
};

class DoubleLinkedList {
private:
  unsigned long _size;

public:
    Node * head;
    Node * tail;

    DoubleLinkedList();

    ~DoubleLinkedList();

    void push_back(int element);
    void pop_back();

    void push_front(int element);
    void pop_front();

    void insert(int element, unsigned int index);
    void erase(unsigned int index);

    int front();
    int back();

    void clear();

    bool find(int element);

    unsigned int size();
    bool empty();

    void print();
};

#endif
