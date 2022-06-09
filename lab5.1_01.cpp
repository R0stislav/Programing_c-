#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    char str[50]; 
    int i;
    int n_p; 
    int n_m; 

    

    n_p = 0;
    n_m = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '+')
            n_p++;
        if (str[i] == '-')
            n_m++;
    }

