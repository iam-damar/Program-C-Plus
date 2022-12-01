#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int PilihMenu;
    int angka1, angka2, tambah, kurang, 
          bagi, kali, sisaBagi;
    string jawab;
    
menu:
    cout<<"Program Kalkulator"<<endl;
    cout<<"------------------"<<endl<<endl;
    // Input
    cout<<"Pilih mode Perhitungan : "<<endl;
    cout<<"1. Pertambahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Modulo/Mencari hasil bagi"<<endl<<endl;

    //-------------------------------------------------
    cout<<"Masukan angka pertama = "; cin>>angka1;
    cout<<"Masukan angka kedua = "; cin>>angka2;
    cout<<"-----------------------------------"<<endl;
    cout<<"Pilih mode perhitungan : "; cin>>PilihMenu;    

    // Proses hitung dan Output
    switch (PilihMenu)
    {
        case 1 :
            tambah = angka1 + angka2;
            cout<<endl<<"Hasil Pertambahan = "<<tambah<<endl<<endl;
            cout<<"Ingin kembali ke menu? [ya/tidak] : ";cin>>jawab;
            if(jawab == "ya" || jawab == "Ya" || jawab == "YA")
            {
                goto menu;
            }
            else
                cout<<endl<<"Selesai"<<endl;
            break;
        case 2 :
            kurang = angka1 - angka2;
            cout<<endl<<"Hasil Pengurangan = "<<kurang<<endl<<endl;
            cout<<"Ingin kembali ke menu? [ya/tidak] : ";cin>>jawab;
            if(jawab == "ya" || jawab == "Ya" || jawab == "YA")
            {
                goto menu;
            }
            else
                cout<<endl<<"Selesai"<<endl;
            break;
        case 3 :
            kali = angka1 * angka2;
            cout<<endl<<"Hasil Perkalian = "<<kali<<endl<<endl;
            cout<<"Ingin kembali ke menu? [ya/tidak] : ";cin>>jawab;
            if(jawab == "ya" || jawab == "Ya" || jawab == "YA")
            {
                goto menu;
            }
            else
                cout<<endl<<"Selesai"<<endl;
            break;
        case 4 :
            bagi = angka1 / angka2;
            cout<<endl<<"Hasil Pembagian = "<<bagi<<endl<<endl;
            cout<<"Ingin kembali ke menu? [ya/tidak] : ";cin>>jawab;
            if(jawab == "ya" || jawab == "Ya" || jawab == "YA")
            {
                goto menu;
            }
            else
                cout<<endl<<"Selesai"<<endl;
            break;
        case 5 :
            sisaBagi = angka1 % angka2;
            cout<<endl<<"Hasil sisa bagi = "<<sisaBagi<<endl<<endl;
            cout<<"Ingin kembali ke menu? [ya/tidak] : ";cin>>jawab;
            if(jawab == "ya" || jawab == "Ya" || jawab == "YA")
            {
                goto menu;
            }
            else
                cout<<endl<<"Selesai"<<endl;
            break;
        default:
            cout<<"Terhenti,  Pilihan mode tidak ada"<<endl;
            break;
    }

    return 0;
}