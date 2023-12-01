//koja se slova najvec pojavljuju

#include <iostream>
using namespace std;

char najcesceSlovo(char recenica[]) {
    int brojac[26] = { 0 };

    for (int i = 0; recenica[i]; i++) {
        char znak = recenica[i];
        if ((znak >= 'a' && znak <= 'z') || (znak >= 'A' && znak <= 'Z')) {
            if (znak >= 'A' && znak <= 'Z') {
                znak += 'a' - 'A';
            }
            brojac[znak - 'a']++;
        }
    }
    char najcesce = 'a';
    for (int i = 1; i < 26; ++i) {
        if (brojac[i] > brojac[najcesce - 'a']) {
            najcesce = 'a' + i;
        }
    }
    return najcesce;
}
int main() {
    cout << "unesi recenicu: ";
    char recenica[100];
    cin >> recenica;

    char rezultat = najcesceSlovo(recenica);

    cout << "najcesce slovo je " << rezultat << endl;

    return 0;
}


//napisi funkciju koja u nekom polju integera, koje završava nekim brojem sve negativne brojve pretvori u pozitivne. napiši funkciju za ispis polja te ispiši sve brojeve prije i poslije pretvorbe

#include <iostream>
using namespace std;

void pretvoriUPoz(int polje[], int velicina) {
    cout << "polje prije pretvorbe " << endl;
    for (int i = 0; i < velicina; ++i) {
        cout << polje[i] << " ";
    }
    cout << endl;
    cout << "polje poslije pretvorbe " << endl;
    for (int i = 0; i < velicina; ++i) {
        if (polje[i] < 0) {
            polje[i] = -polje[i];
        }
        cout << polje[i] << " ";
    }
    cout << endl;
}

int main() {
    int velicina = 5;
    int polje[5] = { -3, 5, -7, 8, -2 };

    pretvoriUPoz(polje, velicina);

    return 0;
}

//na isti nacin kod koji kao telefon s tipkama treba ispisati neko slovo npr 2 stisnemo 2 put pojavi se znak B

#include <iostream>
using namespace std;

char pritisnutaTipka(int tipka, int brojPritisaka) {
    const char tipke[][5] = {
        {' ', '0'},
        {'1'},
        {'a', 'b', 'c', '2'},
        {'d', 'e', 'f', '3'},
        {'g', 'h', 'i', '4'},
        {'j', 'k', 'l', '5'},
        {'m', 'n', 'o', '6'},
        {'p', 'q', 'r', 's', '7'},
        {'t', 'u', 'v', '8'},
        {'w', 'x', 'y', 'z', '9'}
    };

    if (tipka >= 0 && tipka <= 9 && brojPritisaka > 0 && brojPritisaka <= 5) {
        return tipke[tipka][brojPritisaka - 1];
    }
    else {
        return '\0';
    }
}

int main() {
    int tipka, brojPritisaka;

    cout << "unesi broj tipke: ";
    cin >> tipka;

    cout << "unesi broj kolko puta pritisnes: ";
    cin >> brojPritisaka;

    char rezultat = pritisnutaTipka(tipka, brojPritisaka);

    if (rezultat != '\0') {
        cout << "slovo " << rezultat << endl;
    }
    return 0;
}


//napisi funkciju koja vrati BROJ elemenata koji su dijeljivi s 4. Polje završava brojem 0

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int brojDijeljivihS4(int polje[]) {
    int i = 0, brojDijeljivih = 0;
    while (polje[i] != 0) {
        if (polje[i] % 4 == 0) {
            brojDijeljivih++;
        }
        i++;
    }
    return brojDijeljivih;
}

int main() {
    const int max_velicina = 1000;
    int polje[max_velicina];

    cout << "Unesi elemente polja (zavrsi s 0): ";
    int unos, i = 0;
    cin >> unos;
    while (unos != 0 && i < max_velicina) {
        polje[i] = unos;
        i++;
        cin >> unos;
    }

    int rezultat = brojDijeljivihS4(polje);
    cout << "Broj elemenata dijeljivih s 4: " << rezultat << endl;

    return 0;
}

// napisi funkciju koja sve elemente polja smanji za jedan. polje zavrsava brojem 0

#include <iostream>
using namespace std;

void smanjiZaJedan(int polje[]) {
    int i = 0;
    while (polje[i] != 0) {
        polje[i]--;
        i++;
    }
}

int main() {
    const int max_velicina = 1000;
    int polje[max_velicina];

    cout << "unesi elemente polja (zavrsi s 0): ";
    int unos, i = 0;
    cin >> unos;
    while (unos != 0 && i < max_velicina) {
        polje[i] = unos;
        i++;
        cin >> unos;
    }

    smanjiZaJedan(polje);

    cout << "nakon smanjenja za jedan: ";
    for (int j = 0; polje[j] != 0; j++) {
        cout << polje[j] << " ";
    }

    cout << endl;

    return 0;
}

//napisi funkciju koja vrati najmanji element u nekom polju. polje zavrsava brojem 0 i svaki broj je pozitivan

#include <iostream>
using namespace std;

int najmanjiElement(int polje[])










//napisi funkciju koja vrati broj znakova u nekome nizu znakova

#include <iostream>
using namespace std;












