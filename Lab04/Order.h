#pragma once
#include <iostream>
#include <vector>
#include "Book.h"
using namespace std;

class Order
{
public:
	void calculate_total_price(int dostawa = 0);
	void operator+=(pair<Book, int> a)
	{
		lista.push_back(a);
	}


private:
	vector <pair<Book, int>> lista;
};