#include <iostream>

using namespace std;

int main()
{
    int n;
    double a, p = 1.0, sum = 0.0;
    cout << "n="; cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        p *= -1.0 / i;
        sum += a * p;
    }

    cout << "sum=" << sum << "\n";
    system("pause");
    return 0;
}


