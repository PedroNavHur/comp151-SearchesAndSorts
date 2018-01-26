#include <iostream>

using namespace std;


int BinarySearch(int[], int, int);

int main() {
	int test[] = {
		1,
		3,
		6,
		8,
		15,
		46,
		57,
		63,
		72,
		87,
		91};

	int size = 11;
	int target = 72;

	int index = BinarySearch(test, size, target);
	cout << index;



}

int BinarySearch(int array[], int size, int target) {
	int f = 0;
	int l = size - 1;
	int m;

	bool found = false;
	int pos = -1;

	while (found != true && f <= l) {
		m = (f + l) / 2;

		if (array[m] == target) {
			found = true;
			pos = m;
		}
		else if (array[m] > target) {
			l = m - 1;
		}
		else {
			f = m + 1;
		}

	}

	return pos;
}
