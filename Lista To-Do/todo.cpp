#include "todo.h"
#include <iostream>
#include <fstream>
using namespace std;

vector<Zadanie> lista;

void wczytaj() {
    lista.clear();
    ifstream plik("zadania.txt");
    Zadanie z;
    int status;
    while (getline(plik, z.tytul)) {
        getline(plik, z.opis);
        plik >> status;
        plik.ignore();
        z.wykonane = status;
        lista.push_back(z);
    }
    plik.close();
}

void zapisz() {
    ofstream plik("zadania.txt");
    for (auto& z : lista)
        plik << z.tytul << "\n" << z.opis << "\n" << z.wykonane << "\n";
    plik.close();
}

void wyswietl() {
    if (lista.empty()) {
        cout << "Brak zadan.\n";
        return;
    }
    for (int i = 0; i < lista.size(); i++) {
        cout << i << ": [" << (lista[i].wykonane ? 'x' : ' ') << "] ";
        cout << lista[i].tytul << " - " << lista[i].opis << "\n";
    }
}

void dodaj() {
    Zadanie z;
    cin.ignore();
    cout << "Tytul: ";
    getline(cin, z.tytul);
    cout << "Opis: ";
    getline(cin, z.opis);
    z.wykonane = false;
    lista.push_back(z);
    cout << "Dodano zadanie.\n";
}

void edytuj() {
    if (lista.empty()) {
        cout << "Brak zadan do edycji.\n";
        return;
    }
    wyswietl();
    int i;
    cout << "Numer zadania do edycji: ";
    cin >> i;
    if (i >= 0 && i < lista.size()) {
        cin.ignore();
        cout << "Nowy tytul: ";
        getline(cin, lista[i].tytul);
        cout << "Nowy opis: ";
        getline(cin, lista[i].opis);
        cout << "Zmieniono zadanie.\n";
    } else {
        cout << "Zly numer!\n";
    }
}

void usun() {
    if (lista.empty()) {
        cout << "Brak zadan do usuniecia.\n";
        return;
    }
    wyswietl();
    int i;
    cout << "Numer zadania do usuniecia: ";
    cin >> i;
    if (i >= 0 && i < lista.size()) {
        lista.erase(lista.begin() + i);
        cout << "Usunieto zadanie.\n";
    } else {
        cout << "Zly numer!\n";
    }
}

void wykonaj() {
    if (lista.empty()) {
        cout << "Brak zadan do oznaczenia.\n";
        return;
    }
    wyswietl();
    int i;
    cout << "Numer zadania do zmiany statusu: ";
    cin >> i;
    if (i >= 0 && i < lista.size()) {
        lista[i].wykonane = !lista[i].wykonane;
        cout << "Zmieniono status.\n";
    } else {
        cout << "Zly numer!\n";
    }
}
