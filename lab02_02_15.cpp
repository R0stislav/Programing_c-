#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;


int main()
{
	SetConsoleOutputCP(1251);

	double a = 5, x;

	cout << "Введіть x: ";
	cin >> x;

	cout << sqrt(x * x * x + a) << endl;



	
}

