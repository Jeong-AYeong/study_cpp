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