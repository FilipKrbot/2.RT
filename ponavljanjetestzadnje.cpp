#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// ispisuje brojeve jedan ispod drugog u datoteku
int main() {
    string ime = "datoteka.txt";
    ofstream datoteka(ime);
    int broj;
    while (cin >> broj && broj != 0) {
        datoteka << broj << endl;
    }
    datoteka.close();
    return 0;
}

// ispisuje brojeve iz datoteke u konzolu
int main() {
    string ime = "datotekakonzola.txt";
    ifstream datoteka(ime);
    int broj;
    while (datoteka >> broj && broj != 0) {
        cout << broj << endl;
    }
    datoteka.close();
    return 0;
}

// ispisuje koliko je znakova napisano u datoteci
int main() {
    string ime = "datoteka.txt";
    ifstream datoteka(ime);
    char znak;
    int broj_znakova = 0;
    while (datoteka.get(znak)) {
        broj_znakova++;
    }
    cout << broj_znakova << endl;
    datoteka.close();
    return 0;
}


// ispisuje velièinu od 1 do 20 u datoteku bez ruènog unosa
int main() {
    string ime = "datokeka.txt";
    ofstream datoteka(ime);
    const int VELICINA_POLJA = 20;
    int polje[VELICINA_POLJA];
    for (int i = 0; i < VELICINA_POLJA; i++) {
        polje[i] = i + 1;
    }
    for (int i = 0; i < VELICINA_POLJA; i++) {
        datoteka << polje[i] << endl;
    }
    datoteka.close();
    return 0;
}
