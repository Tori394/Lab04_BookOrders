#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
	Book(string tytul, string autor, int cena);
	friend class Order;

private:
	string m_title;
	string m_author;
	int m_price;
};