#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double X; cin >> X;
    printf(" Y P P1 G ");
    X = 1.0 / X;
    int n; cin >> n;
    for (int i = 2; i <= n; i++)
    {
        double Y = log(1.0 + (i - 1.0) / i); 
        double P = X * (1.0 - (X / 2.0)) + X * X * X * (1.0 / 3.0 - X * (0.25 + X / 5.0));  

        double C = 1.0 - (X / 2.0);
        double B = 0.25 + (X / 5.0);
        double F = 1.0 / 3.0 - X * B;
        
        double P1 = X * C + X * X * X * F * B;
        
        double G = fabs(Y - P);
        cout << i << '\t' << Y << '\t' << P << '\t' << P1 << '\t' << G << endl;

    }
    cout << endl;
    system("pause");
    return 0;
}
    



