#include <iostream>
using namespace std;

template <typename T>
struct list {
    T value;
    list* next;
};

template <typename T>
list<T>* append(T value) {
    list<T>* n = new(list<T>);
    n->value = value;
    n->next = NULL;

    return n;
}

template <typename T>
list<T>* append(list<T>* tail, T value) {
    list<T>* n = new(list<T>);
    n->value = value;
    n->next = NULL;

    tail = tail->next = n;
    return tail;
}

template <typename T>
list<T>* reverse(list<T>* head) {
    list<T>* p, * q, * r;
    p = head;
    q = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    return q;
}

int main() {
    list<int>* head = NULL;
    list<int>* loop = NULL;
    list<int>* tail = NULL;
    list<int>* r_head = NULL;

    tail = head = append(10);
    tail = append(tail, 20);
    tail = append(tail, 30);
    tail = append(tail, 40);

    for (loop = head; loop != NULL; loop = loop->next)
    {
        cout << loop->value << endl;
    }

    r_head = reverse(head); // ก็ Write this function

    cout << "Reversed" << endl;

    for (loop = r_head; loop != NULL; loop = loop->next)
    {
        cout << loop->value << endl;
    }
}