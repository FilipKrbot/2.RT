#include <iostream>
#include <csdtlib<
#include <math.h>
#include <cmath>

using namespace std;

//1 razlika u temp
int main() {
    double x, y;
    cout << "Unesite temperaturu u 7 ujutro: ";
    cin >> x;

    cout << "Unesite temperaturu u 16 popodne: ";
    cin >> y;

    double razlika_u_temperaturi = y - x;
    cout << "Razlika u temperaturi je: " << razlika_u_temperaturi << endl;

    return 0;
}


//2 postotak snizenja
int main() {
    double stara_cijena, nova_cijena;

    cout << "Unesite staru cijenu proizvoda: ";
    cin >> stara_cijena;

    cout << "Unesite novu cijenu proizvoda: ";
    cin >> nova_cijena;

    double snizenje_cijene = stara_cijena - nova_cijena;
    double postotak_snizenja = (snizenje_cijene / stara_cijena) * 100;

    cout << "Cijena proizvoda je snižena za: " << postotak_snizenja << "%" << endl;

    return 0;
}


//3 zbroj znamenaka
int main() {
    int broj, zbroj = 0;

    cout << "Unesite broj: ";
    cin >> broj;

    while (broj != 0) {
        zbroj += broj % 10;
        broj /= 10;
    }

    cout << "Zbroj znamenaka je: " << zbroj << endl;

    return 0;
}


//4 program kelvin u celzijus i suprotno
double celzijus_u_kelvine(double celzijus) {
    return celzijus + 273.15;
}
ble kelvine_u_celzijuse(double kelvini) {
    return kelvini - 273.15;
}
int main() {
    double temperatura;
    cout << "Unesite temperaturu: ";
    cin >> temperatura;

    double kelvini = celzijus_u_kelvine(temperatura);
    cout << temperatura << " Celzijusa je " << kelvini << " Kelvina." << endl;

    cout << "Unesite temperaturu u Kelvinima: ";
    cin >> temperatura;

    double celzijus = kelvine_u_celzijuse(temperatura);
    cout << temperatura << " Kelvina je " << celzijus << " Celzijusa." << endl;

    return 0;
}


//5 povrsina travnjaka oko fontane (isto kak i ono s prstenima s testa)

double travnjakFontanw(double r1, double r2) {
    return 3.14 * (pow(r1, 2) - pow(r2, 2));
}

int main() {
    double r1, r2;
    cin >> r1 >> r2;

    double povrsina = travnjakFontanw(r1, r2);
    cout << "Povrsina travnjaka oko fontane iznosi: " << povrsina << " kvadratnih metara." << endl;

    return 0;
}

// 6 broj okretaja kotaca zg split

int main() {
    double promjer_kotaca, opseg_kotaca, udaljenost;

    cout << "Unesite promjer kotača: ";
    cin >> promjer_kotaca;

    opseg_kotaca = 3.14 * promjer_kotaca;

    cout << "Unesite udaljenost u km: ";
    cin >> udaljenost;

    int broj_okretaja = udaljenost / opseg_kotaca;

    cout << "Broj okretaja kotača na " << udaljenost << " km iznosi " << broj_okretaja << endl;

    return 0;
}

// 7 program dva broja a+b ab a:b aritmeticka sredina

int main() {
    double a, b;

    cout << "Unesite prvi broj (a): ";
    cin >> a;

    cout << "Unesite drugi broj (b): ";
    cin >> b;

    double suma = a + b;
    double umnozak = a * b;
    double omjer = a / b;
    double aritmeticka_sredina = (a + b) / 2;

    cout << "a + b = " << suma << endl;
    cout << "a * b = " << umnozak << endl;
    cout << "a : b = " << omjer << endl;
    cout << "aritmeticka sredina = " << aritmeticka_sredina << endl;

    return 0;
}

// 8 popust npr 100 eur covek dojde v 14 pa je racun 86 eura

#include <iostream>
using namespace std;

int main() {
    double pocetni, zavrsni;

    cout << "Unesite pocetni iznos (potroseni novac): ";
    cin >> pocetni;

    cout << "Unesite zavrsni iznos (iznos na racunu): ";
    cin >> zavrsni;

    double umanjenje = pocetni - zavrsni;
    double postotak_umanjenja = (umanjenje / pocetni) * 100.0;

    cout << "nova cijena iznosi: " << zavrsni_iznos << " eura" << endl;
    cout << "cijena se umanjila za " << postotak_umanjenja << "posto" << endl;

    return 0;
}

// 9 marko karla ivana petar svi cetvrtina bombona

int main() {
    int broj_bombona = 25;

    int marko = broj_bombona / 4;
    int karla = (broj_bombona - marko) / 4;
    int ivana = (broj_bombona - marko - karla) / 4;
    int petar = (broj_bombona - marko - karla - ivana) / 4;

    cout << "marko je pojeo " << marko << " bombona" << endl;
    cout << "karla je pojeo " << karla << " bombona" << endl;
    cout << "ivana je pojeo " << ivana << " bombona" << endl;
    cout << "petar je pojeo " << petar << " bombona" << endl;

    return 0;
}

//10 6 brojeva koji je jednako udaljeni od njih dva

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;

    int prvi_broj = a * 100 + b * 10 + c;
    int drugi_broj = d * 100 + e * 10 + f;
    int udaljeni_broj = (a + d) * 100 + (b + e) * 10 + (c + f);

    cout << "prvi broj " << prvi_broj << endl;
    cout << "drugi broj " << drugi_broj << endl;
    cout << "udaljeni broj " << udaljeni_broj << endl;

    return 0;
}

// 11 "tajanstveni" broj po formuli onoj i broj znamenka u broju 

int main() {
    int unos;
    cout << "Unesite troznamenkasti broj: ";
    cin >> unos;

    int stotice = unos / 100;
    int desetice = (unos % 100) / 10;
    int jedinice = unos % 10;

    cout << "Broj svih znamenki: " << stotice + desetice + jedinice << endl;

    int tajanstveni_broj = round(pow(stotice, 3) + pow(desetice, 2) + pow(jedinice, 1) / (3 + 2 * 2 + 3 * 1));

    cout << "Tajanstveni broj: " << tajanstveni_broj << endl;

    return 0;
}

//12 kosina po formuli

int main() {
    double faktor_trenja, masa, ubrzanje_sile_teze, visina, duljina_podloge;

    cout << "unesite faktor trenja ";
    cin >> faktor_trenja;

    cout << "unesite masu tijela ";
    cin >> masa;

    ubrzanje_sile = 9.81

    cout << "unesite visinu ";
    cin >> visina;

    cout << "unesite duljinu podloge ";
    cin >> duljina_podloge;

    double kosina = faktor_trenja * masa * ubrzanje_sile_teze * visina / duljina_podloge;

    cout << "kosina " << kosina << endl;

    return 0;
}

//13 keopsova piramida volumen ono before vs after od trosenja

int main() {
    double pocetni_volumen, trenutni_volumen;

    cout << "unesite pocetni volumen keopsove piramide: ";
    cin >> pocetni_volumen;

    cout << "unesite trenutni volumen keopsove piramide ";
    cin >> trenutni_volumen;

    if (trenutni_volumen >= pocetni_volumen) {
        cout << "pogreska" << endl;
        return 1;
    }

    double smanjenje_volumena = pocetni_volumen - trenutni_volumen;
    double postotak_smanjenja = (smanjenje_volumena / pocetni_volumen) * 100;

    cout << "volumen keopsove piramide se smanjio za " << postotak_smanjenja << "posto" << endl;

    return 0;
}

//14 carina stjepanu tri put po petinu

int main() {
    double marko = 1000.0;
    marko *= 0.8;
    marko *= 0.8;
    marko *= 0.8;
    cout << "marko je nakon tri puta davanja stjepanu  " << marko << " eura" << endl;
    return 0;
}

//15 kalkulaotr razlomka zbroj pa decimalno i razlomak ( s funkcijama jer je lakse)

int najveciZajednickiDjelitelj(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void zbrojiRazlomke(int brojnik1, int nazivnik1, int brojnik2, int nazivnik2) {
    int zajednickiNazivnik = nazivnik1 * nazivnik2;
    int noviBrojnik = brojnik1 * (zajednickiNazivnik / nazivnik1) + brojnik2 * (zajednickiNazivnik / nazivnik2);

    int nzd = najveciZajednickiDjelitelj(noviBrojnik, zajednickiNazivnik);

    noviBrojnik /= nzd;
    zajednickiNazivnik /= nzd;

    cout << "Zbroj razlomaka: " << noviBrojnik << " / " << zajednickiNazivnik << endl;
    cout << "Rezultat kao decimalni broj: " << static_cast<double>(noviBrojnik) / zajednickiNazivnik << endl;
}

int main() {
    int brojnik1, nazivnik1, brojnik2, nazivnik2;

    cout << "Unesite prvi razlomak (brojnik nazivnik): ";
    cin >> brojnik1 >> nazivnik1;

    cout << "Unesite drugi razlomak (brojnik nazivnik): ";
    cin >> brojnik2 >> nazivnik2;

    zbrojiRazlomke(brojnik1, nazivnik1, brojnik2, nazivnik2);

    return 0;
}

//16 rezultantna sila po formuli

int main() {
    double f1, f2;

    cout << "unesi prvu silu f1: ";
    cin >> f1;

    cout << "unesi drugu silu f2: ";
    cin >> f2;

    double rezultantna_sila = sqrt(pow(f1, 2) + pow(f2, 2));

    cout << "rezultantna sila" << rezultantna_sila << endl;

    return 0;
}

//17 kino sekunde pa onda h m i sekunde

int main() {
    int trajanje_u_sekundama;

    cout << "Unesite trajanje filma u sekundama: ";
    cin >> trajanje_u_sekundama;

    int sati = trajanje_u_sekundama / 3600;
    int minute = (trajanje_u_sekundama % 3600) / 60;
    int sekunde = trajanje_u_sekundama % 60;

    cout << "Trajanje filma: " << sati << " sati, " << minute << " minuta, " << sekunde << " sekundi." << endl;

    return 0;
}

//18 koordinatni sustav trokut

double udaljenost(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1, y1, x2, y2, x3, y3;

    cout << "unesi koordinate prvog vrha trokuta (x1 y1): ";
    cin >> x1 >> y1;

    cout << "unesi koordinate drugog vrha trokuta (x2 y2): ";
    cin >> x2 >> y2;

    cout << "unesi koordinate trećeg vrha trokuta (x3 y3): ";
    cin >> x3 >> y3;

    double opseg = udaljenost(x1, y1, x2, y2) + udaljenost(x2, y2, x3, y3) + udaljenost(x3, y3, x1, y1);

    double s = opseg / 2; 
    double povrsina = sqrt(s * (s - udaljenost(x1, y1, x2, y2)) * (s - udaljenost(x2, y2, x3, y3)) * (s - udaljenost(x3, y3, x1, y1)));

    cout << "Opseg trokuta: " << opseg << endl;
    cout << "Povrsina trokuta: " << povrsina << endl;

    return 0;
}

//19 telefon s bugom sve -292

int main() {
    int uneseni_broj;

    cout << "unesite telefonski broj: ";
    cin >> uneseni_broj;

    int ispravljen_broj = uneseni_broj + 292;

    cout << "ispravljeni telefonski broj " << ispravljen_broj << endl;

    return 0;
}

//20 kondenzatori

int main() {
    double ulazni_napon, kapacitet_prvi, kapacitet_drugi;

    cout << "unesi ulazni napon (u voltima): ";
    cin >> ulazni_napon;

    cout << "unesi kapacitet prvog kondenzatora (u faradima): ";
    cin >> kapacitet_prvi;

    cout << "unesi kapacitet drugog kondenzatora (u faradima): ";
    cin >> kapacitet_drugi;

    double kapacitet_serijski = kapacitet_prvi + kapacitet_drugi;
    double naboj_serijski = ulazni_napon * kapacitet_serijski;
    double napon_serijski_prvi = ulazni_napon * (kapacitet_drugi / kapacitet_serijski);
    double napon_serijski_drugi = ulazni_napon * (kapacitet_prvi / kapacitet_serijski);

    double kapacitet_paralelni = 1 / (1/kapacitet_prvi + 1/kapacitet_drugi);
    double naboj_paralelni_prvi = ulazni_napon * kapacitet_prvi;
    double naboj_paralelni_drugi = ulazni_napon * kapacitet_drugi;

    cout << "serijski spoj:" << endl;
    cout << "kapacitet: " << kapacitet_serijski << " F" << endl;
    cout << "naboj: " << naboj_serijski << " C" << endl;
    cout << "napon na prvom kondenzatoru: " << napon_serijski_prvi << " V" << endl;
    cout << "napon na drugom kondenzatoru: " << napon_serijski_drugi << " V" << endl;

    cout << "paralelni spoj:" << endl;
    cout << "kapacitet: " << kapacitet_paralelni << " F" << endl;
    cout << "maboj na prvom kondenzatoru: " << naboj_paralelni_prvi << " C" << endl;
    cout << "naboj na drugom kondenzatoru: " << naboj_paralelni_drugi << " C" << endl;

    return 0;
}

//jednostruko grananje

//1 veci od dvaju ucitanih brojeva

int main() {
    int prvi_broj, drugi_broj;

    cout << "unesi prvi broj: ";
    cin >> prvi_broj;

    cout << "unesi drugi broj: ";
    cin >> drugi_broj;

    if (prvi_broj > drugi_broj) {
        cout << prvi_broj << " je veci od " << drugi_broj << endl;
    } else if (prvi_broj < drugi_broj) {
        cout << drugi_broj << " je veci od " << prvi_broj << endl;
    } else {
        cout << "brojevi su isti" << endl;
    }

    return 0;
}

//2 parnost zadnje znamenke

int main() {
    int broj;

    cout << "unesite cijeli broj: ";
    cin >> broj;

    int zadnja_znamenka = broj % 10;

    if (zadnja_znamenka % 2 == 0) {
        cout << "zadnja znamenka (" << zadnja_znamenka << ") je parna" << endl;
    } else {
        cout << "zadnja znamenka (" << zadnja_znamenka << ") nije parna" << endl;
    }

    return 0;
}

//3 je li trokut jednakokracan
int main() {
    int a, b, c;

    cout << "unesite duljinu stranice a: ";
    cin >> a;

    cout << "unesite duljinu stranice b: ";
    cin >> b;

    cout << "unesite duljinu stranice c: ";
    cin >> c;

    if (a == b || b == c || c == a) {
        cout << "trokut je jednakokračan" << endl;
    } else {
        cout << "trokut nije jednakokračan" << endl;
    }

    return 0;
}

//4 opseg i povrsina pravokutnika

int main() {
    double a, b;

    cout << "unesite duljinu stranice a: ";
    cin >> a;

    cout << "unesite duljinu stranice b: ";
    cin >> b;

    double opseg = 2 * (a + b);
    double povrsina = a * b;

    cout << "opseg pravokutnika je: " << opseg << endl;
    cout << "povrsina pravokutnika je: " << povrsina << endl;

    return 0;
}

//5 armstrongov broj

int main() {
    int broj;

    cout << "unesite cijeli broj: ";
    cin >> broj;

    int originalni_broj = broj;
    int suma = 0;
    int broj = 0;

    while (broj != 0) {
        broj++;
        broj /= 10;
    }

    broj = originalni_broj;

    while (broj != 0) {
        int kubovi = broj % 10;
        suma += pow(kubovi, broj);
        broj /= 10;
    }

    if (suma == originalni_broj) {
        cout << "broj je armstrongov broj" << endl;
    } else {
        cout << "broj nije armstrongov broj" << endl;
    }

    return 0;
}

//6 je li broj palindrom

int main() {
    int broj;

    cout << "unesite cijeli broj: ";
    cin >> broj;

    int originalni_broj = broj;
    int obrnuti_broj = 0;

    while (broj != 0) {
        obrnuti_broj = obrnuti_broj * 10 + broj % 10;
        broj /= 10;
    }

    if (originalni_broj == obrnuti_broj) {
        cout << "broj je palindrom" << endl;
    } else {
        cout << "broj nije palindrom" << endl;
    }

    return 0;
}

//7 vrijednost funkcije po x

int main() {
    double x;

    cout << "unesite realni broj x: ";
    cin >> x;

    double rezultat = pow(x, 2) + 2 * x + 1;

    cout << "vrijednost funkcije je: " << rezultat << endl;

    return 0;
}

//8 je li ucitani broj u zadanom intervalu

int main() {
    int broj;
    int donja_granica, gornja_granica;

    cout << "unesite cijeli broj: ";
    cin >> broj;

    cout << "unesite donju granicu intervala: ";
    cin >> donja_granica;

    cout << "unesite gornju granicu intervala: ";
    cin >> gornja_granica;

    if (broj >= donja_granica && broj <= gornja_granica) {
        cout << "broj je unutar zadanog intervala" << endl;
    } else {
        cout << "broj nije unutar zadanog intervala" << endl;
    }

    return 0;
}

//9 površina trokuta ako je stranica pozitivan realni broj inače vraća grešku

int main() {
    double stranica;

    cout << "unesite pozitivan realni broj za duljinu stranice trokuta: ";
    cin >> stranica;

    if (stranica > 0) {
        double povrsina = (sqrt(3) / 4) * pow(stranica, 2);
        cout << "povrsina trokuta je: " << povrsina << endl;
    } else {
        cout << "broj treba bit pozitivan" << endl;
    }

    return 0;
}

//10 koliko minute i sekunde čine sati

int main() {
    int minute, sekunde;

    cout << "unesi broj minuta: ";
    cin >> minute;

    cout << "unesi broj sekundi: ";
    cin >> sekunde;

    double sati = (minute * 60 + sekunde) / 3600.0;

    cout << "to je: " << sati << " sati" << endl;

    return 0;
}

// 11 broj pozitivan broj kvadrata, broj negativan apsolutna vrijednost razlike brojeva


int main() {
    int pozitivan_broj, negativan_broj;

    cout << "unesi pozitivan broj: ";
    cin >> pozitivan_broj;

    cout << "unesi negativan broj: ";
    cin >> negativan_broj;

    int kvadrat_pozitivnog = pozitivan_broj * pozitivan_broj;
    int apsolutna_razlika = abs(pozitivan_broj - negativan_broj);

    cout << "kvadrat pozitivnog broja je: " << kvadrat_pozitivnog << endl;
    cout << "apsolutna vrijednost razlike brojeva je: " << apsolutna_razlika << endl;

    return 0;
}

// 12 ako je prvi broj 2x drugog broja zamijeni sadrzaj varijabli, vrati poruku o neispravnom unosu

int main() {
    int prvi_broj, drugi_broj;

    cout << "unesite prvi broj: ";
    cin >> prvi_broj;

    cout << "unesite drugi broj: ";
    cin >> drugi_broj;

    if (drugi_broj == 0) {
        cout << "neispravan unos" << endl;
    } else {
        if (prvi_broj == 2 * drugi_broj) {
            swap(prvi_broj, drugi_broj);
            cout << "varijable su zamijenene" << endl;
        } else {
            cout << "prvi broj nije 2x drugi broj" << endl;
        }

        cout << "prvi broj: " << prvi_broj << endl;
        cout << "drugi broj: " << drugi_broj << endl;
    }

    return 0;
}

//13 superskakac

int main() {
    int x, y, z, a, b, c;

    cout << "unesite maksimalne bodove na prvoj razini (x): ";
    cin >> x;

    cout << "unesite maksimalne bodove na drugoj razini (y): ";
    cin >> y;

    cout << "unesite maksimalne bodove na trecoj razini (z): ";
    cin >> z;

    cout << "unesite ostvarene bodove na prvoj razini (a): ";
    cin >> a;

    cout << "unesite ostvarene bodove na drugoj razini (b): ";
    cin >> b;

    cout << "unesite ostvarene bodove na trecoj razini (c): ";
    cin >> c;

    double postotak = (a + b + c) * 100.0 / (x + y + z);

    if (postotak > 80.0) {
        cout << "SUPER-SKAKAC" << endl;
    } else {
        cout << "PONOVI SKAKANJE" << endl;
    }

    return 0;
}

//14 petrin novi broj po algoritmu

int main() {
    int a, b;

    cout << "unesite prvi broj (a): ";
    cin >> a;

    cout << "unesite drugi broj (b): ";
    cin >> b;

    int desetica_a = (a / 10) % 10;
    int jedinica_b = b % 10;

    int novi_broj = desetica_a * 10 + jedinica_b;

    cout << "novi broj prema petrinom algoritmu: " << novi_broj << endl;

    return 0;
}

// 15 otpornici

int main() {
    char spoj;

    cout << "unesite slovo s (za serijski spoj) ili p (za paralelni spoj): ";
    cin >> spoj;

    if (spoj == 's' || spoj == 'S') {
        double r1, r2;

        cout << "unesite otpor prvog otpornika (r1): ";
        cin >> r1;

        cout << "unesite otpor drugog otpornika (r2): ";
        cin >> r2;

        double ukupni_otpor = r1 + r2;

        cout << "ukupan otpor serijski spojenih otpornika: " << ukupni_otpor << " ohma" << endl;
    } else if (spoj == 'p' || spoj == 'P') {
        double r1, r2;

        cout << "unesite otpor prvog otpornika (r1): ";
        cin >> r1;

        cout << "unesite otpor drugog otpornika (r2): ";
        cin >> r2;

        double ukupni_otpor = 1 / (1 / r1 + 1 / r2);

        cout << "ukupan otpor paralelno spojenih otpornika: " << ukupni_otpor << " ohma" << endl;
    } else {
        cout << "pogrešan unos. unesite samo slovo s ili p." << endl;
    }

    return 0;
}

// visestruko grananje