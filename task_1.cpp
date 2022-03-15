#include <iostream>
using namespace std;

void main() {
	int array[4][4];
	int sum_array[4] = { 0 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Enter array[" << i << "][" << j << "] value: ";
			cin >> array[i][j];
		}
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << "sum_array[" << j << "] + array[" << i << "][" << j << "] (" << array[i][j] << ')' << endl;
			sum_array[j] += array[i][j];
		}
	}

	cout << endl;
	for (int j = 0; j < 4; ++j) {
		cout << "Sum of " << j + 1 << " column: " << sum_array[j] << endl;
	}
}
