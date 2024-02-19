#include <iostream>

using namespace std;

int main() {
	int size = 10;
	int* pSize = &size;

	cout << size << "\n" << pSize << "\n" << *pSize;

	return 0;
}