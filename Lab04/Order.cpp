#include "Order.h"

void Order::calculate_total_price(int dostawa)
{
    int cena = 0;
    int ilosc = 0;
    for (int i = 0; i < lista.size(); i++)
    {
        cena = cena + lista[i].first.m_price * lista[i].second;
        ilosc = ilosc + lista[i].second;
    }
    cena = cena + dostawa;
    cout << "Ilosc zamowionych ksiazek: " << ilosc << "\nIch laczna cena wynosi " << cena<<" zl\n";
    if (dostawa == 0) cout << "(Nie podano kosztow dostawy)\n";
    else cout<<"(W tym za dostawe " << dostawa << " zl)\n";
}
