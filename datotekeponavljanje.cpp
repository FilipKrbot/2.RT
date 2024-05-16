////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;
//za rijeci
int main() {
    // definiraj ime datoteke
    string ime = "datoteka.txt";

    // otvori datoteku za pisanje
    FILE *datoteka = fopen(ime.c_str(), "w");

    // deklariraj varijablu za pohranu riječi
    string rijec;

    // cita riječi s ulaza dok ne dojde na "0"
    while (cin >> rijec && rijec != "0") {
        // Zapiši riječ u datoteku
        fprintf(datoteka, "%s\n", rijec.c_str());
    }

    // zatvara datoteku
    fclose(datoteka);

    // vrati 0 kako bi označio uspješno izvođenje programa
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;
//za znakove

int main() {
    // definira ime datoteke
    string ime = "datoteka.txt";

    // otvori datoteku za pisanje
    FILE *datoteka = fopen(ime.c_str(), "w");

    // deklarira varijablu za pohranu slova
    char slovo;

    // citaj slova s ulaza dok ne naiđeš na '0'
    while (cin >> slovo && slovo != '0') {
        // Zapiši slovo u datoteku
        fprintf(datoteka, "%c\n", slovo);
    }

    // Zatvori datoteku
    fclose(datoteka);

    // Vrati 0 kako bi označio uspješno izvođenje programa
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main() {
    // definiraj ime datoteke
    string ime = "datoteka.txt";

    // otvori datoteku za pisanje
    FILE *datoteka = fopen(ime.c_str(), "w");

    // deklariraj varijablu za pohranu brojeva
    int broj;

    // citaj brojeve s ulaza dok ne naiðeš na nulu
    while (cin >> broj && broj != 0) {
        // Zapiši broj u datoteku, svaki ispod prethodnog
        fprintf(datoteka, "%d\n", broj);
    }

    // zatvori datoteku
    fclose(datoteka);

    return 0;
}
