#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char* pin="1234";
    long long saldo = 100000000000000LL;

    char podany_pin[5];

    int a=sizeof(void);
    cout<<a<<endl;


    cout<<"Podaj swoj PIN: ";
    cin>>podany_pin;

    if( strcmp( podany_pin, pin) == 0 )
    {
        cout<<"Jaka czynnosc chcesz wykonac?\n\n";
        cout<<"\t1. Wyplata gotowki\n";
        cout<<"\t2. Sprawdzenie salda\n";
        int wybor;
        cin>>wybor;


        switch(wybor)
        {
            case 1:

                cout<<"Podaj kwote do wyplaty: ";
                long long kwota;
                cin>>kwota;

                if( kwota > 0 && kwota <= saldo )
                {
                    saldo -= kwota;
                    cout<<"Dziekujemy za skorzystanie z naszego bankomatu!\n";
                }
                else
                {
                    cout<<"Niepoprawna kwota!\n"; break;
                }

            //break;

            case 2:

                cout<<"Twoj stan konta: "<<saldo<<endl;

            break;

        }

    }
    else
    {
        cout<<"Niepoprawny PIN!\n";
    }


    return 0;
}
