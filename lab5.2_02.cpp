#include <iostream>

using namespace std;

int main()
{
    string a = "Мотор, Рот, Тир, Монітор";
    istringstream ss(a);
    string t;
    int n = 0;
    while (ss >> t)
    {
        if (n++ % 2 == 0)
            cout << t << endl;
    }
}

