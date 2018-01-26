#include <iostream>

using namespace std;


int BinarySearch(int[], int, int);

int main() {

	//int driver[50];
	//int num;
	//cout << "Input your number of elements . [1-50]";
	//cin >> num;

	//cout << "Input your numbers, separate them by space";
	//for (size_t i = 0; i < num; i++){
	//	cin >> driver[i];
	//}

	int test[] = {
		10,
		15,
		25,
		35,
		40,
		45,
		50,
		60,
		70,
		75,
		85,
		90,
		95,
		100 };

	int size = 14;
	int target;

	while (target != -1) {
		cout << "What's your target?";
		cin >> target;

		int index = BinarySearch(test, size, target);
		if (index == -1) {
			"Target Not Found";
		}

		cout << "Target found at Index: " << index << endl;

	}
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
