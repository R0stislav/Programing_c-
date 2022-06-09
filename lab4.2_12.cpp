#include <iostream>
#include <cmath>
#include <time.h>


using namespace std;
    int main()
    {
        const int n = 24, m = 10;
        int a[n];
        long long int b[m] = { 0 };
        srand(time(0));
        for (int i = 0; i < n; i++)
            a[i] = rand() % 50 + 1;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                b[i] += pow(a[j], double(i + 1));
        for (int i = 0; i < n; i++)
            cout << "a[" << i + 1 << "]=" << a[i] << " " << endl;
        cout << endl;
        for (int i = 0; i < m; i++)
            cout << "b[" << i + 1 << "]=" << b[i] << " " << endl;
        cout << endl;
        return 0;
    }


