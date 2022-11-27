/*******************************************************************************************************************************************
1. Linked list with classes [Normal]
- Make the linked list as a class. This code will be used for next daily practices.
- 링크드리스트를 클래스로 만드세요! 요건 다음에도 사용될 예정이니 코드를 잘 보관하세요!

- It should support append and next functions as the member and they are chainable (append와 next 함수를 지원해야하며, 체이닝이 되어야 합니다)
- It should remember the length of the list, current(last) referencing position (이것은 리스트의 길이 마지막으로 참조한 위치를 기억해야합니다)
- If a rewind function is called, it goes back to the first position of the list (Rewind 함수가 호출되면 리스트의 처음으로 돌아갑니다).
*******************************************************************************************************************************************/
#include <iostream>
using namespace std;

unsigned int idx;

struct node {
	int data;
	node* next;
	node* prev;
};

class my_list {
private:
	node* head, * tail;
	unsigned int size;
public:
	my_list() {
		head = NULL;
		tail = NULL;
		size = 0;
		idx = 0;
	}
	my_list& append(int v) {
		node* tmp = new node;
		tmp->data = v;
		tmp->next = NULL;
		if (head == NULL) {
			head = tmp;
			tail = tmp;
		}
		else {
			tail->next = tmp;
			tail = tail->next;
		}
		size++;
		return *this;
	}
	my_list& next() {
		idx++;
		return *this;
	}
	int get() {
		node* temp;
		temp = head;
		int newidx = idx;

		while (newidx > 0) {
			temp = temp->next;
			newidx--;
		}
		return temp->data;
	}
	void rewind() {
		idx = 0;
	}
	void info() {
		cout << "length: " << size << ", current: " << idx << endl;
	}
};

int main() {
	my_list l;
	l.append(10).append(20).append(30).append(40);

	l.next().next();
	cout << l.get() << endl;

	l.info();

	l.rewind();

	cout << l.get() << endl;
	return 0;
}
