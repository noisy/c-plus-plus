#include <iostream>
#include <string>   //tak¿e nale¿y do przestrzeni nazw std
using namespace std;

int main()
{
    string napis;
    napis = "wyraz";
    cout<<napis<<endl;

    string napis2("wyraz2");
    cout<<napis2<<endl;

    char* cstring="dfasdf";
    string napis3(cstring);
    cout<<napis3<<endl;

    string napis4("0123456789",0,5);
    cout<<napis4<<endl;


    string napis5("0123456789",6);
    cout<<napis5<<endl;

    string napis6(10,'$');
    cout<<napis6<<endl;

    return 0;
}
