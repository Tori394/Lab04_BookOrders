#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
#include "Order.h"
using namespace std;

int main()
{
	Order zamowienie;
	Book a ("Hobbit", "J.R.R. Tolkien", 45);
	Book b ("Harry Potter", "J.K. Rowling", 29);
	Book c("Maly Ksiaze", "Antoine'a de Saint-Exupery", 13);

	zamowienie += make_pair(a,2);
	zamowienie += make_pair(b,1);
	zamowienie.calculate_total_price();
	cout << endl;
	zamowienie += make_pair(c, 1);
	zamowienie.calculate_total_price(14);
}

/*
Ilosc zamowionych ksiazek: 3
Ich laczna cena wynosi 119 zl
(Nie podano kosztow dostawy)

Ilosc zamowionych ksiazek: 4
Ich laczna cena wynosi 146 zl
(W tym za dostawe 14 zl)
*/