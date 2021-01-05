#include <iostream>

using namespace std;

void fonk(int*, int*);

int main() {

	int a = 5, b = 10;

	cout << a << ",";

	cout << b << ",";

	fonk(&a, &b);

	cout << a << ",";

	cout << b;

	return 0;

}

void fonk(int* n1, int* n2)

{
	*n1 = 11;

	*n2 = 6;
}