#include <iostream>
#include <math.h>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    int menu, pilihBarang, qty, totalHarga, diskon;

    int hargaBarang[4] = {100000, 70000, 150000, 80000};
    string namaBarang[4] = {"Indomie", "Telur", "Beras", "Aqua"};
    string satuanBarang[4] = {"5 Dus", "1 Keranjang", "10 Kg", "3 Dus"};

    utama:
    cout<<"Penjualan Barang"<<endl;
    cout<<"----------------"<<endl<<endl;
    cout<<"1. Daftar Barang"<<endl;
    cout<<"2. Keluar"<<endl;
    cout<<"----------------"<<endl<<endl;

    

    cout<<"Pilih Menu : "; cin>>menu;

    switch (menu)
    {
        case 1:
            cout<<endl<<endl<<"Daftar Barang"<<endl;
            cout<<"--------------------------"<<endl;
            cout<<"1. Indomie 5 Dus - Rp. 100.000"<<endl;
            cout<<"2. Telur   1 Keranjang - Rp. 70.000"<<endl;
            cout<<"3. Beras   10 Kg- Rp. 150.000"<<endl;
            cout<<"4. Aqua    3 Dus - Rp. 80.000"<<endl;
            cout<<"5. Kembali"<<endl;  

            cout<<endl<<"Masukan Pilihan anda = "; cin>>pilihBarang;

            if(pilihBarang == 1)
            {
                cout<<endl<<endl<<"Anda Memilih : "<<namaBarang[0]<<" "<<satuanBarang[0]<<" - Rp."<<hargaBarang[0]<<endl;
                
                cout<<"--------------------------------"<<endl;
                cout<<"Masukan jumlah yang dibeli : "; cin>>qty;

                //Perhitungan
                totalHarga = hargaBarang[0] * qty;

                if(totalHarga > 500000)
                {
                    diskon = totalHarga * 0.1;
                    totalHarga = totalHarga - diskon;
                    cout<<endl<<endl<<"Anda mendapat diskon sebesar 10% ."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[0]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else if(totalHarga < 200000)
                {
                    cout<<endl<<endl<<"Anda tidak mendapat diskon."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[0]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else if(500000 >= totalHarga)
                {
                    cout<<endl<<"Anda mendapat diskon sebesar 5%"<<endl;
                    diskon = totalHarga * 0.05;
                    totalHarga = totalHarga - diskon;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[1]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else 
                {
                    cout<<endl<<endl<<"Anda tidak mendapat diskon."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[0]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
            }
            else if(pilihBarang == 2)
            {
                cout<<endl<<endl<<"Anda Memilih : "<<namaBarang[1]<<" "<<satuanBarang[1]<<" - Rp."<<hargaBarang[1]<<endl;
                
                cout<<"--------------------------------"<<endl;
                cout<<"Masukan jumlah yang dibeli : "; cin>>qty;

                //Perhitungan
                totalHarga = hargaBarang[1] * qty;

                if(totalHarga > 500000)
                {
                    diskon = totalHarga * 0.1;
                    totalHarga = totalHarga - diskon;
                    cout<<endl<<endl<<"Anda mendapat diskon sebesar 10% ."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[1]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else if(totalHarga < 200000)
                {
                    cout<<endl<<endl<<"Anda tidak mendapat diskon."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[1]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else if(500000 >= totalHarga)
                {
                    diskon = totalHarga * 0.05;
                    totalHarga = totalHarga - diskon;
                    cout<<endl<<"Anda mendapat diskon sebesar 5%"<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[1]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else 
                {
                    cout<<endl<<endl<<"Anda tidak mendapat diskon."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[1]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
            }
            else if(pilihBarang == 3)
            {
                cout<<endl<<endl<<"Anda Memilih : "<<namaBarang[2]<<" "<<satuanBarang[2]<<" - Rp."<<hargaBarang[2]<<endl;
                
                cout<<"--------------------------------"<<endl;
                cout<<"Masukan jumlah yang dibeli : "; cin>>qty;

                //Perhitungan
                totalHarga = hargaBarang[2] * qty;

                if(totalHarga > 500000)
                {
                    diskon = totalHarga * 0.1;
                    totalHarga = totalHarga - diskon;
                    cout<<endl<<endl<<"Anda mendapat diskon sebesar 10% ."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[2]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else if(totalHarga < 200000)
                {
                    cout<<endl<<endl<<"Anda tidak mendapat diskon."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[2]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else if(500000 >= totalHarga)
                {
                    diskon = totalHarga * 0.05;
                    totalHarga = totalHarga - diskon;
                    cout<<endl<<"Anda mendapat diskon sebesar 5%"<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[2]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else 
                {
                    cout<<endl<<endl<<"Anda tidak mendapat diskon."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[2]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
            }
            else if(pilihBarang == 4)
            {
                cout<<endl<<endl<<"Anda Memilih : "<<namaBarang[3]<<" "<<satuanBarang[3]<<" - Rp."<<hargaBarang[3]<<endl;
                
                cout<<"--------------------------------"<<endl;
                cout<<"Masukan jumlah yang dibeli : "; cin>>qty;

                //Perhitungan
                totalHarga = hargaBarang[3] * qty;

                if(totalHarga > 500000)
                {
                    diskon = totalHarga * 0.1;
                    totalHarga = totalHarga - diskon;
                    cout<<endl<<endl<<"Anda mendapat diskon sebesar 10% ."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[3]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else if(totalHarga < 200000)
                {
                    cout<<endl<<endl<<"Anda tidak mendapat diskon."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[3]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else if(500000 >= totalHarga)
                {
                    diskon = totalHarga * 0.05;
                    totalHarga = totalHarga - diskon;
                    cout<<endl<<"Anda mendapat diskon sebesar 5%"<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[3]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
                else 
                {
                    cout<<endl<<endl<<"Anda tidak mendapat diskon."<<endl;
                    cout<<"----------------------------"<<endl<<endl;
                    cout<<"Harga satuan barang : "<<hargaBarang[3]<<endl;
                    cout<<"Total harga barang  : "<<totalHarga<<endl;
                }
            }
            else
            {
                
                goto utama;
                
            }

            break;
        case 2:
            cout<<"Program Penjualan Barang berhenti."<<endl;
            break;
        case 3:
            
            break;
        default:
            cout<<"Selesai"<<endl;
            break;
    }

    return 0;
}