#ifndef _RACUN_H_
#define _RACUN_H_
#include"Osoba.h"
#include"Datum.h"

class Racun
{
public:
	Racun(Osoba* vlasnik, int brRacuna);
	Osoba* getVlasnik() const;
	int getBrRacuna()const;
	int getIznosNaRacunu();
	bool transakcija(Racun& r2, int iznos);
	string getValuta() const;

	Racun& operator+=(int iznos);


	Racun(const Racun&) = delete;
	Racun(Racun&&) = delete;
	Racun& operator=(const Racun&) = delete;
	Racun& operator=(Racun&&) = delete;

	friend ostream& operator<<(ostream&, const Racun&);

protected:
	virtual ostream& ispis(ostream& os) const {
		os << "R: " << _brRacuna << " :=: " << iznosNaRacunu << " - " << valuta;
		return os;
	}

private:
	Osoba* _vlasnik;
	long _brRacuna;
	int iznosNaRacunu;
	string valuta;
};


#endif // !_RACUN_H_
