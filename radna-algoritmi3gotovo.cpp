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
        cout << "pogresan unos. unesite samo slovo s ili p." << endl;
    }

    return 0;
}

// visestruko grananje

//umozak znamenaka

int main() {
    int x, y;

    cout << "unesite dvoznamenkasti broj x: ";
    cin >> x;

    cout << "unesite dvoznamenkasti broj y: ";
    cin >> y;

    int umnozak_x = (x % 10) * (x / 10);
    int umnozak_y = (y % 10) * (y / 10);

    if (umnozak_x < umnozak_y) {
        cout << "broj " << x << " ima manji umnozak znamenaka" << endl;
    } else if (umnozak_x > umnozak_y) {
        cout << "broj " << y << " ima manji umnozak znamenaka" << endl;
    } else {
        cout << "umnozci znamenaka su jednaki za oba broja" << endl;
    }

    return 0;
}

// polozaj u koordinatnom sustavu kvadrant

int main() {
    int x, y;

    cout << "unesite kordinate x: ";
    cin >> x;

    cout << "unesite kordinate y: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "nalazi se u prvom kvadrantu" << endl;
    } else if (x < 0 && y > 0) {
        cout << "nalazi se u drugom kvadrantu" << endl;
    } else if (x < 0 && y < 0) {
        cout << "nalazi se u trećem kvadrantu" << endl;
    } else if (x > 0 && y < 0) {
        cout << "nalazi se u četvrtom kvadrantu" << endl;
    } else if (x == 0 && y != 0) {
        cout << "nalazi se na y-osi" << endl;
    } else if (x != 0 && y == 0) {
        cout << "nalazi se na x-osi" << endl;
    } else {
        cout << "nalazi se u ishodištu" << endl;
    }

    return 0;
}


// mjesoviti spoj otpornika

int main() {
    double r1, r2, r3;

    cout << "unesite otpor prvog otpornika (r1): ";
    cin >> r1;

    cout << "unesite otpor drugog otpornika (r2): ";
    cin >> r2;

    cout << "unesite otpor trećeg otpornika (r3): ";
    cin >> r3;

    double i1 = 1 / r1;
    double i2 = 1 / r2;
    double i3 = 1 / r3;

    if (i1 >= i2 && i1 >= i3) {
        cout << "najveca struja tece kroz prvi otpornik (R1)" << endl;
    } else if (i2 >= i1 && i2 >= i3) {
        cout << "najveca struja tece kroz drugi otpornik (R2)" << endl;
    } else {
        cout << "najveca struja tece kroz treci otpornik (R3)" << endl;
    }

    if (i1 <= i2 && i1 <= i3) {
        cout << "najmanja struja tece kroz prvi otpornik (R1)" << endl;
    } else if (i2 <= i1 && i2 <= i3) {
        cout << "najmanja struja tece kroz drugi otpornik (R2)" << endl;
    } else 
        cout << "najmanja struja tece kroz treci otpornik (R3)" << endl;
}
    return 0;
}


//srednji od 3 broja /3

int main() {
    double a, b, c;

    cout << "unesite prvi realan broj (a): ";
    cin >> a;

    cout << "unesite drugi realan broj (b): ";
    cin >> b;

    cout << "unesite treci realan broj (c): ";
    cin >> c;

    double srednji;

    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        srednji = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        srednji = b;
    } else {
        srednji = c;
    }

    cout << "srednji broj po veličini: " << srednji << endl;

    return 0;
}

// zbroj brojeva ako se moze tak od 3 broja koja su unesena

int main() {
    int broj1, broj2, broj3;

    cout << "unesite prvi broj: ";
    cin >> broj1;

    cout << "unesite drugi broj: ";
    cin >> broj2;

    cout << "unesite treci broj: ";
    cin >> broj3;

    if (broj1 + broj2 == broj3) {
        cout << "zbroj unesenih brojeva: " << broj1 << " + " << broj2 << " = " << broj3 << endl;
    } else if (broj1 + broj3 == broj2) {
        cout << "zbroj unesenih brojeva: " << broj1 << " + " << broj3 << " = " << broj2 << endl;
    } else if (broj2 + broj3 == broj1) {
        cout << "zbroj unesenih brojeva: " << broj2 << " + " << broj3 << " = " << broj1 << endl;
    } else {
        cout << "nije moguće napraviti zbroj od unesenih brojeva" << endl;
    }

    return 0;
}

// zakljucna ocjena

int main() {
    int a, b, c, d, e;

    cout << "unesite broj jedinica: ";
    cin >> a;

    cout << "unesite broj dvojki: ";
    cin >> b;

    cout << "unesite broj trojki: ";
    cin >> c;

    cout << "unesite broj četvorki: ";
    cin >> d;

    cout << "unesite broj petica: ";
    cin >> e;

    double prosjek;

    if (a == 0) {
        prosjek = (b * 2 + c * 3 + d * 4 + e * 5) / (b + c + d + e);
    } else {
        prosjek = (a + b * 2 + c * 3 + d * 4 + e * 5) / (a + b + c + d + e);
    }

    cout << "prosjek ocjena: " << prosjek << endl;

    if (prosjek < 1.5) {
        cout << "zaključna ocjena: nedovoljan" << endl;
    } else if (prosjek < 2.5) {
        cout << "zaključna ocjena: dovoljan" << endl;
    } else if (prosjek < 3.5) {
        cout << "zaključna ocjena: dobar" << endl;
    } else if (prosjek < 4.5) {
        cout << "zaključna ocjena: vrlo dobar" << endl;
    } else {
        cout << "zaključna ocjena: odličan" << endl;
    }

    return 0;
}

//razlika golova 

int main() {
    int a, b, c, d;

    cout << "unesite broj pogodaka koje je Split postigao kao domaćin: ";
    cin >> a;

    cout << "unesite broj pogodaka koje je Osijek postigao kao gost: ";
    cin >> b;

    cout << "unesite broj pogodaka koje je Split postigao kao gost: ";
    cin >> c;

    cout << "unesite broj pogodaka koje je Osijek postigao kao domaćin: ";
    cin >> d;

    int razlika = (a + d) - (b + c);

    cout << "razlika u golovima: " << razlika << endl;

    return 0;
}

//semafor 

int main() {
    int broj;

    cout << "unesite broj za semafor: ";
    cin >> broj;

    if (broj == 1) {
        cout << "crveno" << endl;
    } else if (broj == 2) {
        cout << "crveno pa žuto" << endl;
    } else if (broj == 3) {
        cout << "zeleno" << endl;
    } else if (broj == 4) {
        cout << "ponovno žuto" << endl;
    } else {
        cout << "neispravan unos" << endl;
    }

    return 0;
}

//supertalent ples

int main() {
    char a, b, c, d;

    cout << "unesite ocjenu prvog člana žirija (slovo A): ";
    cin >> a;

    cout << "unesite ocjenu drugog člana žirija (slovo B): ";
    cin >> b;

    cout << "unesite ocjenu trećeg člana žirija (slovo C): ";
    cin >> c;

    cout << "unesite ocjenu četvrtog člana žirija (slovo D): ";
    cin >> d;

    int ukupniBodovi = (a - '0') + (b - '0') + (c - '0') + (d - '0');
    int brojZvjezdica;

    if (ukupniBodovi >= 30) {
        brojZvjezdica = 5;
    } else if (ukupniBodovi >= 20) {
        brojZvjezdica = 4;
    } else if (ukupniBodovi >= 10) {
        brojZvjezdica = 3;
    } else {
        brojZvjezdica = 2;
    }

    cout << "plesački par osvojio je " << brojZvjezdica << " zvjezdica" << endl;

    return 0;
}

// kvadranti predznaki

int main() {
    int x, y;

    cout << "unesite x koordinatu: ";
    cin >> x;

    cout << "unesite y koordinatu: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "++" << endl;
    } else if (x < 0 && y > 0) {
        cout << "-+" << endl;
    } else if (x < 0 && y < 0) {
        cout << "--" << endl;
    } else if (x > 0 && y < 0) {
        cout << "+-" << endl;
    } else if (x == 0 && y != 0) {
        cout << "os y" << endl;
    } else if (x != 0 && y == 0) {
        cout << "os x" << endl;
    }

    return 0;
}

// klimatski raz

int main() {
    char klima;

    cout << "unesite klimu (a/b/c/d/e): ";
    cin >> klima;

    switch (klima) {
        case 'a':
            cout << "tropska kišna klima" << endl;
            break;
        case 'b':
            cout << "suha klima" << endl;
            break;
        case 'c':
            cout << "umjereno topla kišna klima" << endl;
            break;
        case 'd':
            cout << "snježno šumska klima" << endl;
            break;
        case 'e':
            cout << "snježna klima" << endl;
            break;
        default:
            cout << "neispravan unos" << endl;
    }

    return 0;
}

// opseg i povrsina jednakostranincnog trok

int main() {
    double stranica;

    cout << "unesite duljinu stranice jednakostraničnog trokuta: ";
    cin >> stranica;

    double opseg = 3 * stranica;
    double povrsina = (sqrt(3) / 4) * pow(stranica, 2);

    cout << "opseg trokuta: " << opseg << endl;
    cout << "površina trokuta: " << povrsina << endl;

    return 0;
}

// indeks kvalitete zraka caqi

int main() {
    double indeksCistoce;

    cout << "unesite indeks čistoće zraka: ";
    cin >> indeksCistoce;

    if (indeksCistoce < 25) {
        cout << "onečišćenje: vrlo nisko" << endl;
    } else if (indeksCistoce <= 50) {
        cout << "onečišćenje: nisko" << endl;
    } else if (indeksCistoce <= 75) {
        cout << "onečišćenje: srednje" << endl;
    } else if (indeksCistoce < 100) {
        cout << "onečišćenje: visoko" << endl;
    } else {
        cout << "onečišćenje: vrlo visoko" << endl;
    }

    return 0;
}

// troznamenkasti najmanji inc error hiti

int main() {
    int broj;

    cout << "unesite troznamenkasti broj: ";
    cin >> broj;

    if (broj >= 100 && broj <= 999) {
        int najmanjaZnamenka = broj % 10;

        cout << "najmanja znamenka: " << najmanjaZnamenka << endl;
    } else {
        cout << "greška: uneseni broj nije troznamenkast" << endl;
    }

    return 0;
}

// rimski 

int main() {
    int broj;

    cout << "unesite peteroznamenkasti broj: ";
    cin >> broj;

    if (broj >= 10000 && broj <= 99999) {
        int stotice = (broj / 100) % 10;

        switch (stotice) {
            case 1:
                cout << "I" << endl;
                break;
            case 2:
                cout << "II" << endl;
                break;
            case 3:
                cout << "III" << endl;
                break;
            case 4:
                cout << "IV" << endl;
                break;
            case 5:
                cout << "V" << endl;
                break;
            case 6:
                cout << "VI" << endl;
                break;
            case 7:
                cout << "VII" << endl;
                break;
            case 8:
                cout << "VIII" << endl;
                break;
            case 9:
                cout << "IX" << endl;
                break;
            default:
                break;
        }
    } else {
        cout << "greška: uneseni broj nije peteroznamenkast" << endl;
    }

    return 0;
}

//rimski 2 

int main() {
    int broj;

    cout << "unesite broj iz intervala 1 do 449: ";
    cin >> broj;

    if (broj >= 1 && broj <= 449) {
        int stotine = broj / 100;
        int desetice = (broj / 10) % 10;
        int jedinice = broj % 10;

        switch (stotine) {
            case 1:
                cout << "C";
                break;
            case 2:
                cout << "CC";
                break;
            case 3:
                cout << "CCC";
                break;
            case 4:
                cout << "CD";
                break;
            default:
                break;
        }

        switch (desetice) {
            case 1:
                cout << "X";
                break;
            case 2:
                cout << "XX";
                break;
            case 3:
                cout << "XXX";
                break;
            case 4:
                cout << "XL";
                break;
            case 5:
                cout << "L";
                break;
            case 6:
                cout << "LX";
                break;
            case 7:
                cout << "LXX";
                break;
            case 8:
                cout << "LXXX";
                break;
            case 9:
                cout << "XC";
                break;
            default:
                break;
        }

        switch (jedinice) {
            case 1:
                cout << "I";
                break;
            case 2:
                cout << "II";
                break;
            case 3:
                cout << "III";
                break;
            case 4:
                cout << "IV";
                break;
            case 5:
                cout << "V";
                break;
            case 6:
                cout << "VI";
                break;
            case 7:
                cout << "VII";
                break;
            case 8:
                cout << "VIII";
                break;
            case 9:
                cout << "IX";
                break;
            default:
                break;
        }

        cout << endl;
    } else {
        cout << "greška: uneseni broj nije iz intervala 1 do 449" << endl;
    }

    return 0;
}

// kalkulator

int main() {
    char operacija;
    double broj1, broj2;

    cout << "unesite operaciju (+, -, *, /): ";
    cin >> operacija;

    cout << "unesite prvi broj: ";
    cin >> broj1;

    cout << "unesite drugi broj: ";
    cin >> broj2;

    switch (operacija) {
        case '+':
            cout << broj1 + broj2 << endl;
            break;
        case '-':
            cout << broj1 - broj2 << endl;
            break;
        case '*':
            cout << broj1 * broj2 << endl;
            break;
        case '/':
            if (broj2 != 0) {
                cout << broj1 / broj2 << endl;
            } else {
                cout << "greška: dijeljenje s nulom" << endl;
            }
            break;
        default:
            cout << "greška: nepodržana operacija" << endl;
    }

    return 0;
}

// kalendar 

int main() {
    int dan, mjesec, godina, danUTjednu;

    cout << "unesite dan: ";
    cin >> dan;

    cout << "unesite mjesec: ";
    cin >> mjesec;

    cout << "unesite godinu: ";
    cin >> godina;

    cout << "unesite dan u tjednu (1 za ponedjeljak, 2 za utorak, itd.): ";
    cin >> danUTjednu;

    if (dan >= 1 && dan <= 31 && mjesec >= 1 && mjesec <= 12 && godina >= 1 && danUTjednu >= 1 && danUTjednu <= 7) {
        cout << dan << ".";
        cout << mjesec << ".";
        cout << godina << ". ";

        switch (danUTjednu) {
            case 1:
                cout << "ponedjeljak";
                break;
            case 2:
                cout << "utorak";
                break;
            case 3:
                cout << "srijeda";
                break;
            case 4:
                cout << "četvrtak";
                break;
            case 5:
                cout << "petak";
                break;
            case 6:
                cout << "subota";
                break;
            case 7:
                cout << "nedjelja";
                break;
            default:
                cout << "greška: neispravan unos dana u tjednu";
                break;
        }

        cout << endl;
    } else {
        cout << "greška: neispravan unos datuma" << endl;
    }

    return 0;
}

// programske petlje

// robot za jabuke 

int main() {
    cout << "unesite broj jabuka: ";
    int broj_jabuka;
    cin >> broj_jabuka;

    int maksimalna_masa = 1000;
    int trenutna_masa = 0;
    int broj_sanduka = 0;

    for (int i = 0; i < broj_jabuka; ++i) {
        cout << "unesite masu jabuke #" << (i + 1) << " u gramima: ";
        int masa_jabuke;
        cin >> masa_jabuke;

        if (masa_jabuke <= maksimalna_masa) {
            trenutna_masa += masa_jabuke;

            if (trenutna_masa > maksimalna_masa) {
                broj_sanduka++;
                trenutna_masa = masa_jabuke;
            }
        } else {
            cout << "greska: masa jabuke prelazi 1000 grama." << endl;
            i--;  
        }
    }

    if (trenutna_masa > 0) {
        broj_sanduka++;
    }

    cout << "potrebno je " << broj_sanduka << " sanduka." << endl;

    return 0;
}

// eurovizija 

int main() {

    int a[10];
    int x;

    cout << "unesi bodove eurovizije (u jednom retku): ";

    for (int i = 0; i < 10; ++i) {
        cin >> x;
        a[i] = x;
    }

    int ukupno = 0;
    for (int i = 0; i < 10; ++i) ukupno += a[i];
    cout << "ukupno bodova: " << ukupno << endl;

    int najvise = a[0];
    for (int i = 1; i < 10; ++i) if (a[i] > najvise) najvise = a[i];
    cout << "najvise bodova: " << najvise << endl;

    double prosjek = 0;
    for (int i = 0; i < 10; ++i) prosjek += a[i];
    prosjek /= 10;
    cout << "prosjek bodova: " << prosjek << endl;

    return 0;
}

// prosti brojevi

bool jeProst(int broj) {
    if (broj <= 1) {
        return false;
    }
    for (int i = 2; i * i <= broj; ++i) {
        if (broj % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int donjaGranica = 143;
    int gornjaGranica = 997;

    int brojProstih = 0;
    int najmanjiProsti = gornjaGranica;

    for (int i = donjaGranica; i <= gornjaGranica; ++i) {
        if (jeProst(i)) {
            ++brojProstih;
            if (i < najmanjiProsti) {
                najmanjiProsti = i;
            }
        }
    }

    cout << "Broj prostih brojeva izmedju " << donjaGranica << " i " << gornjaGranica << ": " << brojProstih << endl;
    cout << "Najmanji prosti broj: " << najmanjiProsti << endl;

    return 0;
}

// savrsen broj

int main() {
    int broj;
    cout << "broj manji od 10000: ";
    cin >> broj;

    int sumaDjelitelja = 0;
    for (int i = 1; i <= broj / 2; ++i) {
        if (broj % i == 0) {
            sumaDjelitelja += i;
        }
    }

    if (sumaDjelitelja == broj) {
        cout << "broj " << broj << " je savrsen" << endl;
    } else {
        cout << "broj " << broj << " nije savrsen" << endl;
    }

    return 0;
}

//veci broj po znamenkama

int main() {
    int prviBroj, drugiBroj;
    cout << "unesi prvi broj: ";
    cin >> prviBroj;
    cout << "unesi drugi broj: ";
    cin >> drugiBroj;

    int znamenkePrvi = 0, znamenkeDrugi = 0;
    int pomocna = prviBroj;
    while (pomocna != 0) {
        pomocna /= 10;
        ++znamenkePrvi;
    }

    pomocna = drugiBroj;
    while (pomocna != 0) {
        pomocna /= 10;
        ++znamenkeDrugi;
    }

    if (znamenkePrvi > znamenkeDrugi) {
        cout << "veci je prvi broj: " << prviBroj << endl;
    } else {
        cout << "veci je drugi broj: " << drugiBroj << endl;
    }

    return 0;
}

// brojevni sustavi

int main() {
    int izbor;
    cout << "unesi 1 za binarni u dekadski, 2 za dekadski u binarni: ";
    cin >> izbor;

    if (izbor == 1) {
        // bin u dek
        string binarni;
        cout << "unesi binarni broj: ";
        cin >> binarni;

        int dekadski = 0;
        int tezina = 1;

        for (int i = binarni.size() - 1; i >= 0; --i) {
            dekadski += (binarni[i] - '0') * tezina;
            tezina *= 2;
        }

        cout << "dekadski broj: " << dekadski << endl;
    } else if (izbor == 2) {
        // dek u bin
        int dekadski;
        cout << "unesi dekadski broj: ";
        cin >> dekadski;

        string binarni = "";
        while (dekadski > 0) {
            binarni = char('0' + dekadski % 2) + binarni;
            dekadski /= 2;
        }

        cout << "binarni broj: " << binarni << endl;
    } else {
        cout << "pogresan izbor!" << endl;
    }

    return 0;
}

// palindrom ispis je uvijek 90 90

bool jePalindrom(int broj) {
    int originalniBroj = broj;
    int obrnutiBroj = 0;

    while (broj > 0) {
        obrnutiBroj = obrnutiBroj * 10 + broj % 10;
        broj /= 10;
    }

    return originalniBroj == obrnutiBroj;
}

int main() {
    int brojTroznamenkastih = 0;
    int brojCetveroznamenkastih = 0;

    for (int i = 100; i <= 999; ++i) {
        if (jePalindrom(i)) {
            brojTroznamenkastih++;
        }
    }

    for (int i = 1000; i <= 9999; ++i) {
        if (jePalindrom(i)) {
            brojCetveroznamenkastih++;
        }
    }

    cout << brojTroznamenkastih << " " << brojCetveroznamenkastih << endl;

    return 0;
}

// ucenici ukupno koga je vise i za kolko je vise

int main() {
    int brojucenika1, brojucenica1, brojucenika2, brojucenica2;

    cout << "unesite broj ucenika i ucenica za prvu skolu: ";
    cin >> brojucenika1 >> brojucenica1;

    cout << "unesite broj ucenika i ucenica za drugu skolu: ";
    cin >> brojucenika2 >> brojucenica2;

    int ukupnoucenika1 = brojucenika1 + brojucenica1;
    int ukupnoucenika2 = brojucenika2 + brojucenica2;

    int razlika = abs(ukupnoucenika1 - ukupnoucenika2);

    if (ukupnoucenika1 > ukupnoucenika2) {
        cout << "u prvoj skoli je bilo vise ucenika za " << razlika << " ucenika." << endl;
    } else if (ukupnoucenika2 > ukupnoucenika1) {
        cout << "u drugoj skoli je bilo vise ucenika za " << razlika << " ucenika." << endl;
    } else {
        cout << "broj ucenika u obje skole je jednak." << endl;
    }

    return 0;
}

// taksi

int main() {
    double pocetnaTaksija = 9.9;
    double cijenaPoKilometru = 4.9;

    double ukupnaCijena = pocetnaTaksija;

    cout << "unesite kilometrazu: ";

    double kilometraza;
    while (cin >> kilometraza) {
        if (kilometraza >= 0) {
            ukupnaCijena += cijenaPoKilometru * kilometraza;
        } else {
            cout << "unesite ispravnu kilometrazu (broj >= 0): ";
        }
    }

    int cijeliDio = ukupnaCijena;
    int decimalniDio = (ukupnaCijena - cijeliDio) * 100;

    cout << "ukupna cijena taksija je: " << cijeliDio << " kuna i " << decimalniDio << " lipa." << endl;

    return 0;
}

// frizer 

int main() {
    int cijenaSisanja = 100;
    int cijenaSisanjaMasinicom = 40;
    int cijenaSredivanjaBrade = 50;
    int cijenaBrijanjaBrade = 80;

    int zarada = 0;
    int najtrazenijaUsluga = 0;
    int brojUsluga[4] = {0};

    cout << "unesite usluge (1 - Muško šišanje, 2 - Šišanje mašinicom, 3 - Sređivanje brade, 4 - Brijanje brade):" << endl;

    int usluga;
    while (cin >> usluga && usluga != 0) {
        if (usluga >= 1 && usluga <= 4) {
            brojUsluga[usluga - 1]++;
            switch (usluga) {
                case 1:
                    zarada += cijenaSisanja;
                    break;
                case 2:
                    zarada += cijenaSisanjaMasinicom;
                    break;
                case 3:
                    zarada += cijenaSredivanjaBrade;
                    break;
                case 4:
                    zarada += cijenaBrijanjaBrade;
                    break;
            }
        } else {
            cout << "probaj ponvono" << endl;
        }
    }

    cout << "zarada u jednom danu iznosi " << zarada << " kuna." << endl;

    for (int i = 0; i < 4; i++) {
        if (brojUsluga[i] > brojUsluga[najtrazenijaUsluga]) {
            najtrazenijaUsluga = i;
        }
    }

    switch (najtrazenijaUsluga) {
        case 0:
            cout << "najtraženija usluga: Muško šišanje" << endl;
            break;
        case 1:
            cout << "najtraženija usluga: Šišanje mašinicom" << endl;
            break;
        case 2:
            cout << "najtraženija usluga: Sređivanje brade" << endl;
            break;
        case 3:
            cout << "najtraženija usluga: Brijanje brade" << endl;
            break;
    }

    return 0;
}

// polja

//ispis polja

int main() {
    int n;
    cout << "unesite broj elemenata polja: ";
    cin >> n;

    int* polje = int[n];

    cout << "unesite elemente polja: ";
    for (int i = 0; i < n; i++) {
        cin >> polje[i];
    }

    cout << "polje: ";
    for (int i = 0; i < n; i++) {
        cout << polje[i] << " ";
    }
    cout << endl;
    return 0;
}

// ocjene

int main() {
    int n;
    cout << "unesite broj ocjena: ";
    cin >> n;

    int ocjene[n];

    cout << "unesite ocjene: ";
    for (int i = 0; i < n; i++) {
        cin >> ocjene[i];
    }

    int brojJedinica = 0;
    for (int i = 0; i < n; i++) {
        if (ocjene[i] == 1) {
            brojJedinica++;
        }
    }

    cout << "broj jedinica: " << brojJedinica << endl;

    return 0;
}

// visine po indeksu

int main() {
    int max_visina = 100; 
    double visine[max_visina];
    int broj_visina;

    cout << "unesite broj visina: ";
    cin >> broj_visina;

    cout << "unesite visine: ";
    for (int i = 0; i < broj_visina; i++) cin >> visine[i];

    double trazena_visina;
    cout << "unesite visinu koju trazite: ";
    cin >> trazena_visina;

    int indeks = -1;  

    for (int i = 0; i < broj_visina; i++) {
        if (visine[i] == trazena_visina) { indeks = i; break; }
    }

    if (indeks != -1) cout << "indeks trazene visine (" << trazena_visina << "): " << indeks << endl;
    else cout << "visina nije pronadena." << endl;

    return 0;
}

// suprotni brojevi od polja
int main() {
    int max_brojeva = 100; 
    int brojevi[max_brojeva];
    int broj_brojeva;

    cout << "unesite broj brojeva: ";
    cin >> broj_brojeva;

    cout << "unesite brojeve: ";
    for (int i = 0; i < broj_brojeva; i++) cin >> brojevi[i];

    cout << "suprotni brojevi su: ";
    for (int i = 0; i < broj_brojeva; i++) cout << -brojevi[i] << " ";

    return 0;
}

// dani u tjednu tesko

int main() {
    int max_elemenata = 100; 
    int polje[max_elemenata];
    int n, x;

    cout << "unesite broj elemenata polja: ";
    cin >> n;

    cout << "unesite elemente polja: ";
    for (int i = 0; i < n; i++) cin >> polje[i];

    cout << "unesite broj x (0 < x < 8): ";
    cin >> x;

    int brojac = 0;
    for (int i = 0; i < n; i++) {
        if (polje[i] == x) brojac++;
    }

    cout << "broj pojavljivanja broja " << x << " u polju je: " << brojac << endl;

    int dan = (x - 1) % 7 + 1;
    cout << "broj " << x << " odgovara danu: ";
    switch (dan) {
        case 1: cout << "ponedjeljak"; break;
        case 2: cout << "utorak"; break;
        case 3: cout << "srijeda"; break;
        case 4: cout << "četvrtak"; break;
        case 5: cout << "petak"; break;
        case 6: cout << "subota"; break;
        case 7: cout << "nedjelja"; break;
    }

    return 0;
}

//pozitivni i neg razvrstavanje 

int main() {
    int max_elemenata = 100;  
    int polje[max_elemenata];
    int n;

    cout << "unesite broj elemenata polja: ";
    cin >> n;

    cout << "unesite elemente polja: ";
    for (int i = 0; i < n; i++) cin >> polje[i];

    cout << "pozitivni brojevi: ";
    for (int i = 0; i < n; i++) {
        if (polje[i] > 0) cout << polje[i] << " ";
    }

    cout << "negativni brojevi: ";
    for (int i = 0; i < n; i++) {
        if (polje[i] < 0) cout << polje[i] << " ";
    }

    return 0;
}

// koliko ih je polju djelivo s 2 il 3

#include <iostream>

using namespace std;

int main() {
    int max_elemenata = 100;  
    int polje[max_elemenata];
    int n;

    cout << "unesi broj elemenata polja: ";
    cin >> n;

    cout << "unesi elemente polja: ";
    for (int i = 0; i < n; i++) cin >> polje[i];

    int broj_djeljiv_s_2 = 0;
    int broj_djeljiv_s_3 = 0;

    for (int i = 0; i < n; i++) {
        if (polje[i] % 2 == 0) broj_djeljiv_s_2++;
        if (polje[i] % 3 == 0) broj_djeljiv_s_3++;
    }

    cout << "broj brojeva djeljivih s 2: " << broj_djeljiv_s_2 << endl;
    cout << "broj brojeva djeljivih s 3: " << broj_djeljiv_s_3 << endl;

    return 0;
}


// prosjecna padalina i odstupanje

int main() {
    int max_elemenata = 12;
    int padaline[max_elemenata];
    int n;

    cout << "unesite mjesece godine: ";
    cin >> n;

    if (n != max_elemenata) {
        cout << "pogrešan unos! očekuje se unos za svaki mjesec u godini." << endl;
        return 1;
    }

    cout << "unesite količinu padalina za svaki mjesec: ";
    for (int i = 0; i < n; i++) cin >> padaline[i];

    int suma_padalina = 0;
    int max_odstupanje = 0;
    int mjesec_s_max_odstupanjem = 0;

    for (int i = 0; i < n; i++) {
        suma_padalina += padaline[i];
    }

    double prosjek = suma_padalina / double(n);

    for (int i = 0; i < n; i++) {
        int odstupanje = padaline[i] - prosjek;
        if (abs(odstupanje) > abs(max_odstupanje)) {
            max_odstupanje = odstupanje;
            mjesec_s_max_odstupanjem = i + 1;
        }
    }

    cout << "prosjecna kolicina padalina: " << prosjek << " mm" << endl;
    cout << "najvece odstupanje od prosjeka u mjesecu: " << mjesec_s_max_odstupanjem << endl;

    return 0;
}

// vrijednosti visne u polji te koji broj je veci od prosjecnog

int main() {
    int broj_mjeseci = 13;
    int visine[broj_mjeseci];

    cout << "Unesite visine vaterpolista za svaki mjesec: ";
    for (int i = 1; i <= broj_mjeseci; i++) {
        cin >> visine[i];
    }

    int suma_visina = 0;
    for (int i = 1; i <= broj_mjeseci; i++) {
        suma_visina += visine[i];
    }

    double prosjek = suma_visina / double(broj_mjeseci);
    cout << "Prosjecna visina vaterpolista: " << prosjek << " cm" << endl;

    int broj_visih_od_prosjeka = 0;
    for (int i = 1; i <= broj_mjeseci; i++) {
        if (visine[i] > prosjek) {
            broj_visih_od_prosjeka++;
        }
    }

    cout << "Broj vaterpolista visih od prosjeka: " << broj_visih_od_prosjeka << endl;

    return 0;
}



// suma svih elemata u 2dpolju

int main() {
    int redovi = n;
     int stupci = n;

    int dvodimenzionalno_polje[redovi][stupci];

    cout << "Unesite elemente dvodimenzionalnog polja:" << endl;

    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < stupci; j++) {
            cin >> dvodimenzionalno_polje[i][j];
        }
    }

    int suma = 0;

    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < stupci; j++) {
            suma += dvodimenzionalno_polje[i][j];
        }
    }

    cout << "Suma svih elemenata u dvodimenzionalnom polju: " << suma << endl;

    return 0;
}



// kod iz 2dpolja ocjene

int main() {
    const int redovi = 3;
    const int stupci = 5;

    int ocjene[redovi][stupci];

    cout << "unesite ocjene (1-5) za svakog ucenika:" << endl;

    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < stupci; j++) {
            cin >> ocjene[i][j];
        }
    }

    int ukupna_suma = 0;
    int broj_ocjena = 0;
    int broj_jedinica = 0, broj_dvojki = 0, broj_trojki = 0, broj_cetvorki = 0, broj_petica = 0;

    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < stupci; j++) {
            ukupna_suma += ocjene[i][j];
            broj_ocjena++;

            if (ocjene[i][j] == 1) {
                broj_jedinica++;
            } else if (ocjene[i][j] == 2) {
                broj_dvojki++;
            } else if (ocjene[i][j] == 3) {
                broj_trojki++;
            } else if (ocjene[i][j] == 4) {
                broj_cetvorki++;
            } else if (ocjene[i][j] == 5) {
                broj_petica++;
            }
        }
    }

    double prosjek = double(ukupna_suma) / broj_ocjena;

    cout << "prosjek ocjena: " << prosjek << endl;

    if (prosjek < 4.5) {
        cout << "ocjena: vrlo dobar" << endl;
    } else {
        cout << "ocjena: odlican" << endl;
    }

    cout << "broj jedinica: " << broj_jedinica << endl;
    cout << "broj dvojki: " << broj_dvojki << endl;
    cout << "broj trojki: " << broj_trojki << endl;
    cout << "broj cetvorki: " << broj_cetvorki << endl;
    cout << "broj petica: " << broj_petica << endl;

    return 0;
}

