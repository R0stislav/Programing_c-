#include <iostream>

using namespace std;


int main()
{
    const int n = 3;
    int a[n][n] =
    {
        {1,2,3},
        {1,3,2},
        {3,2,1}
    };
    int tmp;
    for (int i = 0; i < n; i++)
    {
        tmp = a[i][0];
        a[i][0] = a[i][n - i - 1];
        a[i][n - i - 1] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}


