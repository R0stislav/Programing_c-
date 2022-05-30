#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	int x, y;

	cout << "Введіть X: ";
	cin >> x;

	cout << "Введіть Y: ";
	cin >> y;

	if (y <= 1 && y >= 0 && y >= 1 * x - 1 && y >= -1 * x - 1)
	{
		cout << "належить";
	}
	else
	{
		cout << "не належить";
	}


	
}

