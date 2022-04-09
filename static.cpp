#include <iostream>
using namespace std;
// Statics Version 3
void fun() {
	static int i = 0;
	cout << "i = " << i << endl;
}

void main() {
	for (int i = 0;i < 10;i++)
		fun();
}