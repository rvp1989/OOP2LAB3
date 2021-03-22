#include "Osoba.h"

Osoba::Osoba(string ime, string jmbg, Datum datum):_ime(ime),_jmbg(jmbg),_datum(datum)
{
}

string Osoba::getIme() const
{
	return _ime;
}

string Osoba::getJmbg() const
{
	return _jmbg;
}

Datum Osoba::getDatum() const
{
	return _datum;
}

ostream& operator<<(ostream& it, const Osoba& o)
{
	it << "O" << "(" << o.getIme() << "," << o.getJmbg() << "," << o.getDatum() << ")" << endl;
	return it;
}
