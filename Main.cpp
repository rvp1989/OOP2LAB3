#include <iostream>
#include "Racun.h"

using namespace std;

int main() {
    Datum d1;
    Datum* d2 = new Datum(2, 2, 2020);

    cout << (d1 == (*d2)) << endl;
    cout << (*d2) << endl;

    Osoba* o1 = new Osoba("Pera", "1111111111111", (*d2));
    Osoba o2("Pera", "1111111111111", d1);
    cout << (*o1) << endl;

    Racun r1(o1, 10000);
    Racun r2(&o2, 10001);

    r1 += 100;
    r2 += 50;

    cout << "Stanje pre transakcije: " << endl << r1 << endl << r2 << endl;

    cout << r1.transakcija(r2, 100) << endl;

    cout << "Stanje posle transakcije: " << endl << r1 << endl << r2 << endl;
}