#ifndef LISTA_ENCADEADA_HPP
#define LISTA_ENCADEADA_HPP


class LinkedList {

private:
    struct Node{
      int value;
      Node1 * next;

      Node(const int& i, Node *n) : value(i), next(n) {}
    };

    Node *head, *tail;
    unsigned long _size;

public:
    Node1 * head;
    Node1 * tail;

    LinkedList() : head(nullptr), tail(nullptr), _size(0) {}

    ~LinkedList() {
      auto p = head;
      while (p) {
        auto next = p->next;
        delete p;
        p = next;
      }
    }

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
