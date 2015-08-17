/*
    Opis pisania takich funkcji na stronie 208, "Jêzyk ANSI C"
*/

#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <iostream>
using namespace std;


double VectorLenght(int dim, ...)
{
    va_list ap;
    va_start(ap,dim);

    double arg=0.0;


    for(int i=0; i<dim; i++)
    {
      arg += pow(va_arg(ap, double),2.0);
    }


    return sqrt(arg);

}


int main(int argc, char* argv[])
{

    cout<<VectorLenght(5, 3.0, 4.0, 5.0, 6.0, 7.0)<<endl;

  return 0;
}
