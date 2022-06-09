#include <iostream>
#include <conio.h>
#include <clocale>

       int ascii_cod(char x); 

       using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "ukr");
    char c;
    cout << "         Введіть символ: ";
    cin >> c;
    int b = ascii_cod(c);
    cout << " ASCII код цього символа " << c << " = " << b << endl;

    cout << "____________________________________" << endl;

    int ch;
    cout << "Введить ASCII код: ";
    cin >> ch;
    cout << " символ:  ";
    cout.put(ch);

    getch();
}

int ascii_cod(char x)
{
    int a;
    a = x;
    return a;
}


    


