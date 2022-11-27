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