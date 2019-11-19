// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"


using namespace std;
/*std::random_device random_d;
std::mt19937 random_eng((unsigned int)time(0));;  // the Mersenne Twister with a popular choice of parameters
*/
void print_all(int arr[][4]) {
	cout << "******************************************************************************" << endl;
	cout << "                         2048 number game!" << endl;
	cout << "******************************************************************************" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "|";
			cout << setw(4);
			if (arr[i][j] != 0) {
				cout << arr[i][j];
			}
			else {
				cout << "";
			}
			cout << setw(4);
			
		}
		cout << "|";
		cout << endl;
		cout << endl;
	}
}
void init(int arr[][4]) {
	int val1;// val2;
	val1 = randomNum(1, 2);
	//val2 = randomNum(1, 2);
	update(2*val1, arr);
	//update(2*val2, arr);
}

bool checkZeroSpace(int arr[][4]) {
	int n = 0;
	for (int i = 0; i < 4; i++) {
		int *p;
		p = find(arr[i], arr[i] + 4, 0);
		if (p != arr[i] + 4)
			return true;
	}
	return false;
}

int randomNum(int a, int b) {

	//default_random_engine generator;
	std::mt19937 random_eng((unsigned long int)time(0));;
	uniform_int_distribution<int> distribution(a, b);
	return distribution(random_eng);
}

void update(int newValue, int arr[][4]) {
	int n = 0; // number of empty space
	int ind = 0;
	vector<int> index1;
	vector<int> index2;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == 0) {
				n++;
				index1.push_back(i);
				index2.push_back(j);
			}
		}
	}
	if (n == 0) {
		gameOver();
	}
	else {
		ind = randomNum(0, index1.size()-1);
		arr[index1[ind]][index2[ind]] = newValue;
		system("cls");
		print_all(arr);
	}
	
}

void key_up(int arr[][4]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == arr[i + 1][j]) {
				arr[i][j] = 2 * arr[i][j];
				arr[i + 1][j] = 0;
			}
			
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == 0) {
				arr[i][j] = arr[i + 1][j];
				arr[i + 1][j] = 0;
			}
		}
	}
	//return arr;
}

void key_down(int arr[][4]) {
	for (int i = 3; i > 0; i--) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == arr[i - 1][j]) {
				arr[i][j] = 2 * arr[i][j];
				arr[i - 1][j] = 0;
			}
			
		}
	}

	for (int i = 3; i > 0; i--) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == 0) {
			arr[i][j] = arr[i - 1][j];
			arr[i - 1][j] = 0;
			}
		}
	}
	//return arr;
}

void key_left(int arr[][4]) {
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			if (arr[i][j] == arr[i][j+1]) {
				arr[i][j] = 2 * arr[i][j];
				arr[i][j+1] = 0;
			}
			
		}
	}

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			if (arr[i][j] == 0) {
			arr[i][j] = arr[i][j + 1];
			arr[i][j + 1] = 0;
			}
		}
	}
	//return arr;
}

void key_right(int arr[][4]) {
	for (int j = 3; j > 0; j--) {
		for (int i = 0; i < 4; i++) {
			if (arr[i][j] == arr[i][j-1]) {
				arr[i][j] = 2 * arr[i][j];
				arr[i][j-1] = 0;
			}
			
		}
	}

	for (int j = 3; j > 0; j--) {
		for (int i = 0; i < 4; i++) {
			if (arr[i][j] == 0) {
			arr[i][j] = arr[i][j - 1];
			arr[i][j - 1] = 0;
			}
		}
	}
	//return arr;
}
void gameOver() {
	cout << "******************************************************************************" << endl;
	cout << "                         Game Over!!!" << endl;
	cout << "******************************************************************************" << endl;
}
// In general, ignore this file, but keep it around if you are using pre-compiled headers.
