#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
	double i, j;

	cout << "input i: ";
	cin >> i;

	cout << "input j: ";
	cin >> j;

	cout << (100 * (100 + 1) / 2) * (50 * (50 + 1) / 2) * (i + j);

}


