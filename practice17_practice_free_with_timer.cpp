#include <iostream>
#include <thread>
#include <time.h>
using namespace std;

template <typename T> class timer_smartptr
{
private:
    T* ptr;
    thread t;
public:
    // thread funtion
    void timer(int time) {
        clock_t endwait;
        endwait = clock() + time * CLOCKS_PER_SEC;
        while (clock() < endwait) {}
    }
  
  timer_smartptr(T *p = 0, int time = 10): ptr(p){
    // set the thread
    t = thread(&timer_smartptr::timer, this, time);
  }

  ~timer_smartptr() { }

  T& operator*() { return *ptr; }
  T* operator->() { return ptr; }

  void join() {
    t.join();
  }
};


int main() {
  timer_smartptr<int> p1(new int, 10); // e.g., 10s

  p1.join(); // wait till the time is up! 
  cout << "Wow!" << endl;

}
