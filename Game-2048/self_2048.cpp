// self_2048.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

using namespace std;
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main()
{
	int contents[4][4] = {0};
	int a = 1, b = 2;
	int charInt=0;
	int ele = 0;
	init(contents);
	
	while (1) {
		charInt = 0;
		ele = 0;
		//std::random_device random_d;
		switch ((charInt=_getch())) {
		case KEY_UP:
			ele = randomNum(1, 2); // 2^1, 2^2
			ele = 2 * ele;
			key_up(contents);
			update(ele, contents);
			
			break;
		case KEY_DOWN:
			ele = randomNum(1, 2);
			ele = 2 * ele;
			key_down(contents);
			update(ele, contents);
/*			system("cls");
			print_all(contents); */
			break;
		case KEY_LEFT:
			ele = randomNum(1, 2);
			ele = 2 * ele;
			key_left(contents);
			update(ele, contents);
/*			system("cls");
			print_all(contents); */
			break;
		case KEY_RIGHT:
			ele = randomNum(1, 2);
			ele = 2 * ele;
			key_right(contents);
			update(ele, contents);
/*			system("cls");
			print_all(contents); */
			break;
		default:
			break;
		}
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
