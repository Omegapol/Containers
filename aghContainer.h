#pragma once

template <class T>
class aghContainer
{
public:
	//\\konstruktor klasy aghContainer
	virtual aghContainer();
	//\\ destruktor klasy aghContainer
	virtual ~aghContainer() = 0;
	//\\dodawanie podanego jako argument obiektu typu T do pojemnika
	virtual void append(T const &value);
	//\\stawia obiekt typu T w wybrane miejsce. Zwraca true je�eli podane miejsce wstawienia jest prawid�owe, w przeciwnym wypadku zwraca false.
	virtual bool insert(int, T const&) = 0;
	//\\ podmienia obiekt typu T z obiektem na wybranym miejscu. Zwraca true je�eli podane miejsce podmiany jest prawid�owe, w przeciwnym wypadku zwraca false.
	virtual bool replace(int, T const&);
	//\\ zwraca warto�� w pojemniku
	virtual T& at(int) const = 0;
	//\\zwraca ilo�� element�w w pojemniku
	virtual int size(void) const = 0;
	//\\ usuwa element na danym miejscu. Zwraca true je�eli podane miejsce usuni�cia jest prawid�owe, w przeciwnym wypadku zwraca false.
	virtual bool remove(int) =0;
	//\\ usuwa wszystkie elementy pojemnika
	virtual void clear(void);
	//\\zwraca true je�eli pojemnik jest pusty, inaczej false
	virtual bool isEmpty(void);
	//\\wyszukuje i zwraca indeks pierwszego elementu o warto�ci _value zaczynaj�c od elementu _from. Je�eli takiego elementu nie ma to zwraca -1
	virtual int indexOf(T const& _value, int _from = 0) const;
	//\\ zwraca true je�eli element o warto�ci _value znajduje si� w pojemniku inaczej zwraca false. Wyszukiwanie rozpoczyna si� od elelmetnu _from
	virtual bool contains(T const& _value, int _from = 0) const;
	//\\ sprawdza czy zawarto�� pojemnik�w jest taka sama
	virtual bool operator ==(aghContainer<T> const& right);
	//\\ sprawdza czy zawarto�� pojemnik�w jest r�na
	virtual bool operator !=(aghContainer<T> const& right);
	//\\ zwraca element o indeksie n
	virtual T& operator[](int n) const;
	//\\ dopisuje wszystkie elementy z pojemnika right i zwraca referencje do this
	virtual aghContainer<T>& operator+=(aghContainer<T> const& right);
	//\\ dodaje element do pojemnika i zwraca referencje do this
	virtual aghContainer<T>& operator+=(T const& element);
	//\\ dodaje element do pojemnika i zwraca referencje do this
	virtual aghContainer<T>& operator<<(T const& element);
	//\\ dopisuje wszystkie elementy z pojemnika right i zwraca referencje do this
	virtual aghContainer<T>& operator<<(aghContainer<T> const& right);
	//\\ wypisuje zawarto�� pojemnika na strumie�
	virtual ostream& operator<<(ostream&, aghContainer<T> const& right);
};

