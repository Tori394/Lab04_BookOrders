#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book(string tytul, string autor, int cena) : m_title(tytul), m_author(autor), m_price(cena)
{
}
