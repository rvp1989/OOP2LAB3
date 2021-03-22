#ifndef _OSOBA_H_
#define _OSOBA_H_
#include"Datum.h"

class Osoba
{
public:
	Osoba(string ime, string jmbg, Datum datum);
	string getIme()const;
	string getJmbg()const;
	Datum getDatum()const;

	Osoba(const Osoba&) = delete;
	Osoba(Osoba&&) = delete;
	Osoba& operator=(const Osoba&) = delete;
	Osoba& operator=(Osoba&&) = delete;

	friend ostream& operator<<(ostream&, const Osoba&);

private:
	string _ime;
	string _jmbg;
	Datum _datum;
};


#endif // !_OSOBA_H_
