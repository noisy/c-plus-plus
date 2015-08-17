#include <iostream>
using namespace std;

int main()
{
    cout<<"Witamy w symulatorze skokow spadochronowych.\nWybierz z jakiej wysokosco chcesz skoczyc:\n\n";
    cout<<" 1. 2000m\n";
    cout<<" 2. 1000m\n";
    cout<<" 3. 500m\n";
    cout<<" 4. 200m\n";

    int wybor;
    cin>>wybor;

    cout<<"\nSkaczemy!!!\n";
    switch(wybor)
    {
        //default: cout<<"E tam, bede skakal z samej gory :)\n";

        case 1: cout<<"Jestem na wysokosci 2000 i lece dalej...\n";

        case 2: cout<<"Jestem na wysokosci 1000 i lece dalej...\n";

        case 3: cout<<"Jestem na wysokosci 500 i lece dalej...\n";

        case 4: cout<<"Jestem na wysokosci 200 i zaraz laduje.\n";

    }

    cout<<"\nTo byl udany skok :)\n";

    return 0;
}
