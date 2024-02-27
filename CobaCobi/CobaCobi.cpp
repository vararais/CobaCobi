#include <iostream>
using namespace std;

int main()
{//Begin

    //numeric nJejari, nLuas 
    //display 'Masukan jejari= ,
    //accept nJejari
    //compute nLuas = 3.14 * r * r
    //display 'Luasnya= ' + nLuas

    float nJejari, nLuas;
    cout << "====Hitung Luas Lingkaran====";
    cout << "Masukan jejari = ";
    cin >> nJejari;
    nLuas = 3.14 * nJejari * nJejari;
    cout << "Luasnya = " << nLuas;

}
