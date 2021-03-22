#include "Datum.h"

Datum::Datum(int dan, int mesec, int godina):_dan(dan),_mesec(mesec),_godina(godina)
{
}

bool operator==(const Datum& d1, const Datum& d2)
{
	return d1._dan==d2._dan &&
		d1._mesec==d2._mesec &&
		d1._godina==d2._godina;
}

bool operator!=(const Datum& d1, const Datum& d2)
{
	return !(d1==d2);
}

ostream& operator<<(ostream& it, const Datum& d)
{
	it << d._dan << "." << d._mesec << "." << d._godina << ".";
	return it;
}
