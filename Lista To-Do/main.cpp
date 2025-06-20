#include <iostream>
#include "todo.h"
using namespace std;

int main() {
    wczytaj();  

    while (true) {
        int wybor;

        cout << "\n--- MENU ---\n";
        cout << "1. Wyswietl zadania\n";
        cout << "2. Dodaj zadanie\n";
        cout << "3. Edytuj zadanie\n";
        cout << "4. Usun zadanie\n";
        cout << "5. Oznacz jako wykonane/niewykonane\n";
        cout << "6. Zapisz do pliku\n";
        cout << "0. Wyjscie\n";
        cout << "Twoj wybor: ";

        cin >> wybor;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "Niepoprawny wybor. Wpisz cyfre od 0 do 6.\n";
            continue; 
        }

        switch (wybor) {
            case 1: wyswietl(); break;
            case 2: dodaj(); break;
            case 3: edytuj(); break;
            case 4: usun(); break;
            case 5: wykonaj(); break;
            case 6: zapisz(); break;
            case 0:
                cout << "Koniec programu!\n";
            zapisz(); 
            return 0;
            default:
                cout << "Niepoprawna opcja. Wybierz od 0 do 6.\n";
        }
    }
}
