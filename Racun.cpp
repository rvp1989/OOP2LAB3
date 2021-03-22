#include "Racun.h"

Racun::Racun(Osoba* vlasnik, int brRacuna) :_vlasnik(vlasnik), _brRacuna(brRacuna), iznosNaRacunu(0)
{
}

Osoba* Racun::getVlasnik() const
{
    return _vlasnik;
}

int Racun::getBrRacuna() const
{
    return _brRacuna;
}

int Racun::getIznosNaRacunu()
{
    return iznosNaRacunu;
}

bool Racun::transakcija(Racun& r2, int iznos)
{
    if ((iznosNaRacunu - iznos) < 0)
        return false;

    iznosNaRacunu -= iznos;
    r2.iznosNaRacunu += iznos;

    return true;
}

Racun& Racun::operator+=(int iznos)
{
    iznosNaRacunu += iznos;
    return *this;
}

string Racun::getValuta() const
{
    return valuta;
}

ostream& operator<<(ostream& it, const Racun& r)
{
    return r.ispis(it);;
}

