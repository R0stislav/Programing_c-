#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	int a, b, c;
	
	


	cout << "Введіть a: ";
	cin >> a;

	cout << "Введіть b: ";
	cin >> b;

	cout << "Введіть c: ";
	cin >> c;

	if ((b + c) > (a + b) && (a + c) > b)
	{
		cout << (b + c) + (a + c);
	}
	else if ((b + c) < (a + b) && (a + c) < b)
	{
		cout << (a + b) + b;
	}
	else if ((b + c) > (a + b) && (a + c) < b)
	{
		cout << (b + c) + b;
	}
	else if ((b + c) < (a + b) && (a + c) > b)
	{
		cout << (a + b) + (a + c);
	}

	





}

