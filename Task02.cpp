//#include <iostream>
//
//using namespace std;
//
//void init(int* pointer, int size) {
//	cout << "Input array elements:\n";
//	for (int i = 0; i < size; i++) {
//		cin >> *(pointer + i);
//	}
//}
//void print(int* pointer, int size) {
//	cout << "Array elements:\n";
//	for (int i = 0; i < size; i++) {
//		cout << *(pointer + i) << " ";
//	}
//}
//int getMax(int* pointer, int size) {
//	int max = *pointer;
//	for (int i = 1; i < size; i++) {
//		int t = *(pointer + i);
//		if (max < t) {
//			max = t;
//		}
//	}
//	return max;
//}

//int main() {
//	int size;
//
//	do {
//		cout << "Input size of array:\n";
//		cin >> size;
//	} while (size <= 0);
//
//	int* pArray = new int[size];
//	
//	init(pArray, size);
//	print(pArray, size);
//	cout << "\nMax value: " << getMax(pArray, size) << "\n";
//	
//	delete[] pArray;
//	return 0;
//}