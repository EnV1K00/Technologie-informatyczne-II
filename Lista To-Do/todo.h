#ifndef TODO_H
#define TODO_H

#include <string>
#include <vector>

struct Zadanie {
    std::string tytul;
    std::string opis;
    bool wykonane;
};

extern std::vector<Zadanie> lista;

void wczytaj();
void zapisz();
void wyswietl();
void dodaj();
void edytuj();
void usun();
void wykonaj();

#endif
