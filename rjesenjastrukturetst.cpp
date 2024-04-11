//prvi nacin

#include <iostream>
using namespace std;

struct Vozilo {
    string proizvodac;
    string model;
    int godinaproizvodnje;
    int snaga;
};

void ipisSvojstva(Vozilo o) {
    cout << endl << "Vozilo je modela: " << o.model << endl;
    cout << endl << "Vozilo je napravio: " << o.proizvodac << endl;
    cout << endl << "Vozilo je napravljeno godine: " << o.godinaproizvodnje << endl;
    cout << endl << "Vozilo je snage : " << o.snaga << endl;
}

int main() {
    // Kreiranje primjera struktura Vozilo
    Vozilo auto1, auto2, auto3;

    // Unos podataka za prvi automobil
    cout << "Unesite podatke za prvi automobil:" << endl;
    cout << "Proizvodac: ";
    cin >> auto1.proizvodac;
    cout << "Model: ";
    cin >> auto1.model;
    cout << "Godina proizvodnje: ";
    cin >> auto1.godinaproizvodnje;
    cout << "Snaga: ";
    cin >> auto1.snaga;

    // Unos podataka za drugi automobil
    cout << "\nUnesite podatke za drugi automobil:" << endl;
    cout << "Proizvodac: ";
    cin >> auto2.proizvodac;
    cout << "Model: ";
    cin >> auto2.model;
    cout << "Godina proizvodnje: ";
    cin >> auto2.godinaproizvodnje;
    cout << "Snaga: ";
    cin >> auto2.snaga;

    // Unos podataka za treci automobil
    cout << "\nUnesite podatke za treci automobil:" << endl;
    cout << "Proizvodac: ";
    cin >> auto3.proizvodac;
    cout << "Model: ";
    cin >> auto3.model;
    cout << "Godina proizvodnje: ";
    cin >> auto3.godinaproizvodnje;
    cout << "Snaga: ";
    cin >> auto3.snaga;

    // Ispis svojstava svakog automobila
    cout << "\nPrvi automobil:" << endl;
    ipisSvojstva(auto1);

    cout << "\nDrugi automobil:" << endl;
    ipisSvojstva(auto2);

    cout << "\nTreci automobil:" << endl;
    ipisSvojstva(auto3);

    return 0;
}
//drugi nacin
#include <iostream>
using namespace std;

struct Vozilo {
    string proizvodac;
    string model;
    int godinaproizvodnje;
    int snaga;
};

void ipisSvojstva(Vozilo o) {
    cout << endl << "Vozilo je modela: " << o.model << endl;
    cout << endl << "Vozilo je napravio: " << o.proizvodac << endl;
    cout << endl << "Vozilo je napravljeno godine: " << o.godinaproizvodnje << endl;
    cout << endl << "Vozilo je snage : " << o.snaga << endl;
}

int main() {
    int brojAutomobila;
    cout << "Unesite broj automobila: ";
    cin >> brojAutomobila;

    Vozilo* automobili = new Vozilo[brojAutomobila];

    for (int i = 0; i < brojAutomobila; i++) {
        cout << "\nUnesite podatke za " << i + 1 << ". automobil:" << endl;
        cout << "Proizvodac: ";
        cin >> automobili[i].proizvodac;
        cout << "Model: ";
        cin >> automobili[i].model;
        cout << "Godina proizvodnje: ";
        cin >> automobili[i].godinaproizvodnje;
        cout << "Snaga: ";
        cin >> automobili[i].snaga;
    }

    cout << "\nPodaci o unesenim automobilima:" << endl;
    for (int i = 0; i < brojAutomobila; i++) {
        cout << "\nAutomobil " << i + 1 << ":" << endl;
        ipisSvojstva(automobili[i]);
    }

    delete[] automobili;

    return 0;
}

bool smanjiSnagu(Vozilo *o) {
        if ((*o).snaga > 0) {
                (*o).snaga--;
                return 1;
        }
        return 0;
}

// opce za osobu vozila itd

#include <iostream>
#include <string>
using namespace std;

struct Osoba {
    string ime;
    string prezime;
    string datumRodenja;
};

void ispisiOsobu(const Osoba& o) {
    cout << "Osoba: " << o.ime << " " << o.prezime << ", datum rodenja: " << o.datumRodenja << endl;
}

int main() {
    int brojOsoba;
    cout << "Unesite broj osoba: ";
    cin >> brojOsoba;

    Osoba* osobe = new Osoba[brojOsoba];

    // Unos podataka za osobe
    for (int i = 0; i < brojOsoba; i++) {
        cout << "Unos podataka za osobu #" << i + 1 << ":" << endl;
        cout << "Ime: ";
        cin >> osobe[i].ime;
        cout << "Prezime: ";
        cin >> osobe[i].prezime;
        cout << "Datum rodenja: ";
        cin >> osobe[i].datumRodenja;
    }

    // Ispis podataka o osobama
    cout << "\nPodaci o osobama:" << endl;
    for (int i = 0; i < brojOsoba; i++) {
        ispisiOsobu(osobe[i]);
    }

    delete[] osobe;

    return 0;
}
