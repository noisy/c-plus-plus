
    #include <iostream>
    using namespace std;
    ///////////////////////////////
    void f(int i)
    {
        i++;
        cout<<"To jest "<<i<<
        " wywolanie tej funkcji\n";
        f(i);
    }
    ///////////////////////////////
    int main()
    {
        f(0);

        return 0;
    }


//    void f( i)
//    {
//        i++;
//        cout<<"To jest "<<i<<
//        " wywolanie tej funkcji\n";
//        f(i);
//    }
//
















