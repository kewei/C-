// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <random>
#include <conio.h>

// TODO: add headers that you want to pre-compile here
void init(int arr[4][4]);
void print_all(int arr[4][4]);
void display();
void update(int ele, int arr[4][4]);
int randomNum(int a=1, int b=1);
void key_up(int arr[4][4]);
void key_down(int arr[4][4]);
void key_left(int arr[4][4]);
void key_right(int arr[4][4]);
void gameOver();


#endif //PCH_H
