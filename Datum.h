#ifndef _DATUM_H_
#define _DATUM_H_
#include<iostream>
#include<string>

using namespace std;

class Datum
{
public:
	Datum(int dan=1, int mesec=1, int godina=2021);
	friend bool operator==(const Datum&, const Datum&);
	friend bool operator!=(const Datum&, const Datum&);
	friend ostream& operator<<(ostream& it, const Datum& d);
private:
	int _dan;
	int _mesec;
	int _godina;
};

#endif // !_DATUM_H_
