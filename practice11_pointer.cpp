/***********************************************************************************
1. Touring the 2D array with a pointer [Easy] 
- Print the elements of the following array using a pointer!
- You have to do it with the pointer address operation like ptr+1, not the array form.
- 포인터를 이용해 2차원 배열을 출력해보세요!
- 배열형이 아닌 ptr+1과 같은 pointer연산자를 이용하셔야합니다. 
**************************************************************************************/
	
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


/***********************************************************************************
2. my_memcpy [Normal]
- c.f. https://www.cplusplus.com/reference/cstring/memcpy/
- The memcpy is a widely used function for memory-to-memory copy.
 It copies n bytes from memory area src to memory area dest. Implement your own memcpy function.
- memcpy는 변수나 배열의 데이터를 있는 그대로 복사하기 위해 널리 사용되는 함수입니다.
아래와 같은 함수 형태에서 source의 값을 destination으로 n바이트 복사합니다. memcpy 함수를 직접 만들어보세요!

* Function prototype: void * my_memcpy ( void * destination, const void * source, size_t num );
- destination: Pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
- source: Pointer to the source of data to be copied, type-casted to a pointer of type const void*.
- num: Number of bytes to copy. size_t is an unsigned integral type.
**************************************************************************************/
#include <iostream>
using namespace std;

void* my_memcpy(void* destination, const void* source, size_t num)
{
    char* ptr = (char *)source;
    char* qtr = (char*)destination;
    for (int i = 0; i < num; i++) {
        *(qtr +i) = *(ptr + i);
    }
    destination = qtr;
    return destination;
}

int main() {
    char csrc[] = "Hello!";
    char cdst[16];

    int isrc = 12345678;
    int idst;

    my_memcpy(cdst, csrc, sizeof(csrc));
    my_memcpy(&idst, &isrc, sizeof(isrc));

    cout << cdst << endl;
    cout << idst << endl;

    return 0;
}
