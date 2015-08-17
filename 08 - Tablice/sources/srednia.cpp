#include <iostream>
using namespace std;
int main()
{
    cout<<"Ten program potrafi policzyc srednia z podanych liczb (max 10)\n";

    int tab[10];

    cout<<"Podaj ile liczb chcesz wprowadzic: ";
    int ile;
    cin>>ile;

    if(ile > 10)
    {
        cout<<"Program liczy srednia co najwyzej z dziesieciu liczb!";
        return 0;
    }
    else if(ile < 1)
    {
        cout<<"Podana liczba jest za mala!";
        return 0;
    }
    else
    {
        for(int i=0; i < ile; i++)
        {
            cout<<"Podaj liczbe nr "<<i+1<<": ";
            cin>>tab[i];
        }

        int suma; // blad, suma=0;
        for(int i=0; i < ile; i++)
        {
            suma += tab[i];
        }

        float srednia = suma / ile; //blad, dzielenie calkowito liczbowe, dodac rzutowanie
        cout<<"srednia z podanych liczb to: "<< srednia<<endl;
    }

    return 0;
}

