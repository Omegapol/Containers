#pragma once
#include "aghContainer.h"

template <class T>
class aghVector : public aghContainer
{
public:
	//\\ konstruktor klasy aghVector
	aghVector();
	//\\ destruktor klasy aghVector
	~aghVector();
	//\\dodawanie podanego jako argument obiektu typu T do pojemnika
	void append(T const &value);
	//\\wstawia obiekt typu T w wybrane miejsce. Zwraca true je�eli podane miejsce wstawienia jest prawid�owe, w przeciwnym wypadku zwraca false.
	//\\number- numer miejsca, w ktore podstawiamy wartosc okreslona przez argument value
	bool insert(int number, T const &value);
	//\\ podmienia obiekt typu T z obiektem na wybranym miejscu. Zwraca true je�eli podane miejsce podmiany jest prawid�owe, w przeciwnym wypadku zwraca false.
	bool replace(int, T const&);
	//\\ zwraca warto�� w pojemniku, number- nr elementu wektora,ktorego wartosc chcemy zwrocic
	T& at(int number) const;
	//\\zwraca ilo�� element�w w pojemniku
	int size(void) const;
	//\\ usuwa element na danym miejscu. Zwraca true je�eli podane miejsce usuni�cia jest prawid�owe, w przeciwnym wypadku zwraca false.
	bool remove(int number);
	//\\ usuwa wszystkie elementy pojemnika
	void clear(void);
	//\\zwraca true je�eli pojemnik jest pusty, inaczej false
	bool isEmpty(void);
	//\\wyszukuje i zwraca indeks pierwszego elementu o warto�ci _value zaczynaj�c od elementu _from. Je�eli takiego elementu nie ma to zwraca -1
	int indexOf(T const& _value, int _from = 0) const;
	//\\ zwraca true je�eli element o warto�ci _value znajduje si� w pojemniku inaczej zwraca false. Wyszukiwanie rozpoczyna si� od elelmetnu _from
	bool contains(T const& _value, int _from = 0) const;
	//\\ sprawdza czy zawarto�� pojemnik�w jest taka sama
	bool operator ==(aghContainer<T> const& right);
	//\\ sprawdza czy zawarto�� pojemnik�w jest r�na
	bool operator !=(aghContainer<T> const& right);
	//\\ zwraca element o indeksie n
	T& operator[](int n) const;
	//\\ dopisuje wszystkie elementy z pojemnika right i zwraca referencje do this
	aghContainer<T>& operator+=(aghContainer<T> const& right);
	//\\ dodaje element do pojemnika i zwraca referencje do this
	aghContainer<T>& operator+=(T const& element);
	//\\ dodaje element do pojemnika i zwraca referencje do this
	aghContainer<T>& operator<<(T const& element);
	//\\ dopisuje wszystkie elementy z pojemnika right i zwraca referencje do this
	aghContainer<T>& operator<<(aghContainer<T> const& right);
	//\\ wypisuje zawarto�� pojemnika na strumie�
	ostream& operator<<(ostream&, aghContainer<T> const& right);
private:
	//\\size- rozmiar wektora
	int size;
	//\\ wskaznik na tablice przechowujaca elementy wektora
	T *tab;
};
