/******************************************************************************************************************************************************
1. mystrcat [Easy]
- Write a function 'mystrcat' that concatenates two character arrays.
It should dynamically allocate memory equal to the sum of the lengths of the two arrays, and concatenate them into that space, and return its address.
- 두 문자열 배열을 합치는 mystrcat함수를 작성하세요.
이것은 두 배열의 길이만큼 동적으로 메모리를 할당받아야하며, 그 공간을 통해 그것들을 합치고, 해당 주소를 반환해야 합니다. 
****************************************************************************************************************************************************/




/****************************************************************
2. Reverse linked list [Normal]
- Write a function that reverses the order of the linked list. 
- If you want, you can write your own linked list.
- 링크드 리스트의 순서를 뒤집는 함수를 만들어봅시다 :)
- 필요하다면 링크드 리스트는 새로 만드셔도 됩니다.
********************************************************************/
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

    r_head = reverse(head); // ¡ç Write this function

    cout << "Reversed" << endl;

    for (loop = r_head; loop != NULL; loop = loop->next)
    {
        cout << loop->value << endl;
    }
}
