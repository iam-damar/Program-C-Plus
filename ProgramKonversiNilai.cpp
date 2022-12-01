#include <iostream>

using namespace std;

int main()
{
    int bilangan;
    string predikat;

    cout<<"Masukan Bilangan : "; cin>>bilangan;

    if(bilangan >= 80 && bilangan <= 100)
    {
        predikat = "A";
    }
    else if(bilangan >= 65 && bilangan <= 79)
    {
        predikat = "B";
    }
    else if(bilangan >=50 && bilangan <= 64)
    {
        predikat = "C";
    }
    else if(bilangan >= 35 && bilangan <= 49)
    {
        predikat = "D";
    }
    else if(bilangan > 100 || bilangan < 0)
    {
        predikat = "Format nilai salah.";
    }
    else
    {
        predikat = "E";
    }

    cout<<"----------------------------------"<<endl;
    cout<<"Program Konversi Nilai Siswa"<<endl<<endl;
    cout<<"Nilai User(Siswa) : "<<bilangan<<endl;
    cout<<"Predikat : "<<predikat<<endl;
    cout<<"----------------------------------"<<endl;
}