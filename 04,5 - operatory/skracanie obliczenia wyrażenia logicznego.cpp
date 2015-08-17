#include <iostream>

using namespace std;

bool prawda()
{
    cout<<"Ta funkcja zawsze gdy jest wywolywana zwraca prawde\n";
    return true;
}

bool falsz()
{
    cout<<"Ta funkcja zawsze gdy jest wywolywana zwraca falsz\n";
    return false;
}


int main()
{

     bool a = prawda() && prawda() && falsz();
     cout<<a<<endl;

    return 0;
}
