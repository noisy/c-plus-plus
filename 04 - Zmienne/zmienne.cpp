#include <iostream>
using namespace std;

int main()
{
    //deklarowanie zmiennych
    int liczba_calkowita;       //definicja zmiennej
    liczba_calkowita = 10;      //nadanie jej wartoœci

    long double LiczbaRzeczywista = 6.2415; //definicja zmiennej po³¹czona z inicjalizacj¹

    const char znak = 'w';  //inicjalizacja sta³ej. Jedyna szansa by jej nadaæ wartoœæ.

    //wypiwywanie wartoœci
    cout<<"za pierwszym razem zmienne maja wartosc: \n";
    cout<<liczba_calkowita<<endl;
    cout<<LiczbaRzeczywista<<endl;
    cout<<znak<<endl;


    //modyfikowanie zawartosci
    liczba_calkowita = 5.5;
    LiczbaRzeczywista = 17;
    //znak = 'b'; // tak nie mozna, poniewaz znak jest sta³¹, której nie przecie¿ mo¿na modyfikowaæ!


    //drugie wypiwywanie wartoœci
    cout<<"a za drugim razem: \n";
    cout<<liczba_calkowita<<endl;
    cout<<LiczbaRzeczywista<<endl;
    cout<<znak<<endl;





	return 0;
}

