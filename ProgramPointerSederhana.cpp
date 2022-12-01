#include <iostream>

using namespace std;

int main()
{
    // Program tanggal lahir dengan Pointer dan Array.
    int tanggalLahir[3] = {13,9,1982};
    int *pointerTanggal[3];

    cout<<"Diakses dengan pointer"<<endl;
    *pointerTanggal = tanggalLahir;
    
    // cout<<"alamat memori tanggal : "<<&tanggalLahir<<endl;
    // cout<<"alamat memori pointer : "<<pointerTanggal<<endl;
    cout<<"Tanggal = "<<*pointerTanggal[0]<<endl;
    cout<<"Bulan   = "<<*pointerTanggal[1]<<endl;
    cout<<"Tahun   = "<<*pointerTanggal[2]<<endl<<endl;

    cout<<"Diakses dengan array biasa"<<endl;
    cout<<"Tanggal = "<<tanggalLahir[0]<<endl;
    cout<<"Bulan   = "<<tanggalLahir[1]<<endl;
    cout<<"Tahun   = "<<tanggalLahir[2]<<endl;
}