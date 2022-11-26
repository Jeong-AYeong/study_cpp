#include <iostream>
using namespace std;

int main() {
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int* ptr = (int*)&arr;

	cout << *(ptr + 0) << *(ptr + 1) << *(ptr + 2) << *(ptr + 3) << endl;
	cout << *(ptr + 4) << *(ptr + 5) << *(ptr + 6) << *(ptr + 7) << endl;
	cout << *(ptr + 8) << *(ptr + 9) << *(ptr + 10) << *(ptr + 11) << endl;
	return 0;
}