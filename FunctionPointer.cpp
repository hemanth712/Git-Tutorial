#include <iostream>
using namespace std;
// Function Pointers
void func() {
	cout << "Inside func()" << endl;
}
void main() {
	void (*fp)();
	fp = func();
	(*fp)();
	void (*fp2) () = func();
	(*fp2)();
}