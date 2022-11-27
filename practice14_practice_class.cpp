/*****************************************************************************************************************
1. Calculator with a class [Easy]
- Write a calculator class. It receives two numbers via the initialization list.
Then, the program calculates the two numbers with the member functions for each operator. In the case of division,
the program must check if the value is divided by zero. 

- 계산기 클래스를 작성하세요. 이것은 초기화리스트를 통해 두가지 숫자를 입력받아야 합니다.
그리고 각 연산자에 대한 멤버삼수를 통해 두 숫자에 대한 연산을 합니다. 나누기의 경우 0으로 나누는지를 확인하여야 합니다.
*******************************************************************************************************************/
#include <iostream>
using namespace std;

class my_calc {
private:
	int first;
	int second;
	// your code

public:
	my_calc(int a, int b) : first(a), second(b) {
	}
	int add() { return first + second; }
	int sub() { return first - second; }
	int mul() { return first * second; }
	int div() {
		if (second != 0) { return first / second; }
		else {
			cout << "WARNING! YOU CANNOT BE DIVIDED BY 0" << endl;
			return 0;
		}
	}
};

int main() {
	my_calc c(10, 20);

	cout << c.add() << endl;
	cout << c.sub() << endl;
	cout << c.mul() << endl;
	cout << c.div() << endl;

	return 0;
}

/****************************************************************************************
2. Queue [Normal]
- Queue: https://en.wikipedia.org/wiki/Queue_(abstract_data_type)
- A queue is a linear data structure that serves as a container of objects
that are inserted and removed according to the FIFO(First-in, First out) principle.

Queue has three main operations; enqueue, dequeue, and peek. 
  *Enqueue: Insert a new element at the rear of the queue.
  *Dequeue: Removes the front element of the queue.
  *Peek: Returns the front element present in the queue without dequeueing it.

- Write a queue class. 
- 큐는 선입선출형의 자료구조입니다.
Enqueue (큐의 꼬리에 데이터를 집어 넣는 것), Dequeue (큐의 머리에서 데이터를 가져 오는 것),
Peek (머리의 데이터만 참조하는 것)을 멤버로 가지는 큐 클래스를 만들어 보세요!
******************************************************************************************/
