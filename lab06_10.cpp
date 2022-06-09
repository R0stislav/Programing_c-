#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>


using namespace std;

const int route = 8;
bool p = true;
int cont;

struct MARSH {
    string startMarsh;
    string endMarsh;
    int numberMarsh;
};





int main()
{
    setlocale(LC_CTYPE, "ukr");

    MARSH marsh[route];

    for (int i = 0; i < route; i++) 
    {
        cout  << i + 1 << "\n";

        cout << "початковий маршут:";
        getline(cin, marsh[i].startMarsh);

        cout << "кiнцевий маршут:";
        getline(cin, marsh[i].endMarsh);

        cout << "Номер маршрута:";
        cin >> marsh[i].numberMarsh;
        cin.ignore();

        while (p) {
            p = false;
            for (int i = 1; i < route; i++) {
                if (marsh[i].numberMarsh < marsh[i - 1].numberMarsh) {
                    swap(marsh[i].startMarsh, marsh[i - 1].startMarsh);
                    swap(marsh[i].endMarsh, marsh[i - 1].endMarsh);
                    swap(marsh[i].numberMarsh, marsh[i - 1].numberMarsh);
                    p = true;
                }
            }
        }

        for (int i = 0; i < route; i++) {
            cout  << i + 1 << ": " << endl;
            cout << "Початковий пункт маршруту: " << marsh[i].startMarsh;
            cout << "Кiнцевий пункт маршруту: " << marsh[i].endMarsh;
            cout << "номер маршруту: " << marsh[i].numberMarsh;
            cout << endl;
        }

        cout << "\n" << "Пошук маршуту" << "\n";
        int point;
        bool found;
        do {
            cout << "Введiть номер маршуту:";
            cin >> point;

            found = false;
            for (int i = 0; i < route; i++) {
                if (marsh[i].numberMarsh == point) {
                    cout << "---" << endl;
                    cout << "\tПочатковий пункт: " << marsh[i].numberMarsh;
                    cout << "\n\tКiнцевий пункт: " << marsh[i].numberMarsh;
                    cout << "\n\tМаршут номер: " << marsh[i].numberMarsh;
                    cout << endl;
                    found = true;
                    cout << "\n" << "Продовжити пошук? (1 - так 0 - нi):";
                    cin >> cont;
                    cin.ignore();
                }
            }
            if (!found) {
                cout << "Маршут за таким номером не знайдено." << "\n";

                cout << "\n" << "Продовжити пошук? (1 - так 0 - нi):";
                cin >> cont;
                cin.ignore();
            }
        } while (cont != 0);
        cout << "\n" << "Гарного дня :)";
        return(0);
    }
}

    


