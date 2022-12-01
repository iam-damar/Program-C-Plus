#include <iostream>
#include <string>
#include <setjmp.h>

using namespace std;

// Global Variable
int nilai[4], pilihMenu, i, j, k, noMapel;
    string namaMapel[4]= {"Matematika", "Olahraga", "PKN", "Sejarah"}, 
           kembali, dataTerisi="Tidak",
           pilihMapel;

int countNamaMapel = ((&namaMapel)[1] - namaMapel); // Count nilai array string
// int countNilai = sizeof(nilai) / sizeof(nilai[0]); // Count nilai array angka

// Sub Fungsi
void inputNilai(); void lihatNilai();

void editNilai(); void hapusNilai();

void cariNilai();

// Main Fungsi
int main()
{
    system("cls");

    cout<<endl<<" Program Data Total Nilai Seluruh Siswa SMP X"<<endl;
    cout<<" --------------------------------------------"<<endl;
    cout<<" Menu Program : "<<endl<<endl;
    cout<<" 1. Input Nilai"<<endl;
    cout<<" 2. Lihat Nilai"<<endl;
    cout<<" 3. Edit  Nilai"<<endl;
    cout<<" 4. Hapus Nilai"<<endl;
    cout<<" 5. Cari  Nilai"<<endl;
    cout<<" 6. Keluar"<<endl;

    cout<<endl<<" Pilih Menu : "; cin>>pilihMenu;
    cout<<endl;

    switch (pilihMenu)
    {
    case 1 :
        inputNilai();
        break;
    case 2 :
        lihatNilai();
        break;
    case 3 :
        editNilai();
        break;
    case 4 :
        hapusNilai();
        break;
    case 5 :
        cariNilai();
        break;
    case 6 :
        system("cls");
        cout<<endl<<" Program Data Total Nilai Seluruh Siswa SMP X"<<endl;
        cout<<" --------------------------------------------"<<endl;
        cout<<endl<<" Program Terhenti."<<endl<<endl;
        break;
    default:
        cout<<" Menu tidak ada yang dipilih."<<endl;
        break;
    }

    return 0;
}


// Sub Fungsi
void inputNilai()
{
    system("cls");
    cout<<endl<<" Program Data Total Nilai Seluruh Siswa SMP X"<<endl;
    cout<<" --------------------------------------------"<<endl;
    cout<<" Input Data"<<endl<<endl;
    for(i=0; i<4; i++)
    {
        cout<<" ["<<i+1<<"] Nilai mapel "<<namaMapel[i]<<" = ";
        cin>> nilai[i];
    }
    dataTerisi="ya";

    cout<<endl<<" Input Data selesai"<<endl<<endl;
    cout<<" Status terisi : "<<dataTerisi<<endl<<endl;
    cout<<" Ingin kembali ke menu? [ya] : ";
    cin>>kembali;

    if(kembali == "ya" || kembali == "Ya" ||  kembali == "Y" || kembali == "y")
        {system("cls"); main();}
    else
        {system("cls"); main();}
}

void lihatNilai()
{
    system("cls");
    cout<<endl<<" Program Data Total Nilai Seluruh Siswa SMP X"<<endl;
    cout<<" --------------------------------------------"<<endl;
    cout<<" Lihat Data"<<endl<<endl;

    if(dataTerisi == "Tidak")
    {
        cout<<" Data nilai masih kosong!"<<endl<<endl;
        cout<<" Ingin kembali ke menu? [ya] : ";
        cin>>kembali;

        if(kembali == "ya" || kembali == "Ya" ||  kembali == "Y" || kembali == "y")
            { system("cls"); main();}
        else 
            { system("cls"); main();}
    }
    else
    {
        for(i=0; i<countNamaMapel; i++)
        {
            cout<<" ["<<i+1<<"] Nilai "<<namaMapel[i]<<" = "<<nilai[i]<<endl;
        }
        // sizeof(nilai[0]); // total banyaknya nilai pada array.
        cout<<" --------------------------------------------"<<endl;
        cout<<" Ingin kembali ke menu? [ya] : ";
        cin>>kembali;

        if(kembali == "ya" || kembali == "Ya" ||  kembali == "Y" || kembali == "y")
            { system("cls"); main();}
        else 
            { system("cls"); main();}
    }
}

void editNilai()
{
    system("cls");
    cout<<endl<<" Program Data Total Nilai Seluruh Siswa SMP X"<<endl;
    cout<<" --------------------------------------------"<<endl;
    cout<<" Edit Data"<<endl<<endl;
    if(dataTerisi == "Tidak")
    {
        cout<<" Data nilai masih kosong!"<<endl<<endl;
        cout<<" Ingin kembali ke menu? [ya] : ";
        cin>>kembali;

        if(kembali == "ya" || kembali == "Ya" ||  kembali == "Y" || kembali == "y")
            { system("cls"); main();}
        else 
            { system("cls"); main();}
    }
    else
    {
        cout<<" Data Lama"<<endl;
        cout<<" ---------"<<endl<<endl;
        for(i=0; i<countNamaMapel; i++)
        {
            cout<<" ["<<i+1<<"] Nilai "<<namaMapel[i]<<" = "<<nilai[i]<<endl;
        }

        cout<<endl<<" Ubah Data"<<endl;
        cout<<" ---------"<<endl<<endl;

        cout<<" Mapel mana yang ingin diubah nilainya? : "; cin>> pilihMapel;
        cout<<endl<<endl;
        for(j=0;j<countNamaMapel;j++)
        {
            if(namaMapel[j] == pilihMapel)
            {
                cout<<" Nilai baru "<<namaMapel[j]<<" = "; cin>>nilai[j];
            }
        }

        system("cls");
        cout<<endl<<" Program Data Total Nilai Seluruh Siswa SMP X"<<endl;
        cout<<" --------------------------------------------"<<endl;
        cout<<" Edit Data"<<endl;
        cout<<endl<<" Data nilai "<<pilihMapel<<" berhasil diubah !!!!"<<endl<<endl;

        cout<<" Data Baru"<<endl;
        cout<<" ---------"<<endl<<endl;
        for(i=0; i<countNamaMapel; i++)
        {
            cout<<" ["<<i+1<<"] Nilai "<<namaMapel[i]<<" = "<<nilai[i]<<endl;
        }

        cout<<endl<<" --------------------------------------------"<<endl;
        cout<<" Ingin kembali ke menu? [ya] : ";
        cin>>kembali;

        if(kembali == "ya" || kembali == "Ya" ||  kembali == "Y" || kembali == "y")
            { system("cls"); main();}
        else 
            { system("cls"); main();}
    }
}

void hapusNilai()
{
    system("cls");
    cout<<endl<<" Program Data Total Nilai Seluruh Siswa SMP X"<<endl;
    cout<<" --------------------------------------------"<<endl;
    cout<<" Hapus Data"<<endl<<endl;

    if(dataTerisi == "Tidak")
    {
        cout<<" Data nilai masih kosong!"<<endl<<endl;
        cout<<" Ingin kembali ke menu? [ya] : ";
        cin>>kembali;

        if(kembali == "ya" || kembali == "Ya" ||  kembali == "Y" || kembali == "y")
            { system("cls"); main();}
        else 
            { system("cls"); main();}
    }
    else
    {
        cout<<" Data Lama"<<endl;
        cout<<" ---------"<<endl<<endl;
        for(i=0; i<countNamaMapel; i++)
        {
            cout<<" ["<<i+1<<"] Nilai "<<namaMapel[i]<<" = "<<nilai[i]<<endl;
        }

        cout<<endl<<" Hapus Data"<<endl;
        cout<<" ---------"<<endl<<endl;

        cout<<" Nomor Mapel yang ingin dihapus? : "; cin>> noMapel;

        for(i=noMapel-1; i<countNamaMapel-1; i++)
        {
            nilai[i] = nilai[i+1];
            namaMapel[i] = namaMapel[i+1];
        }

        countNamaMapel = countNamaMapel - 1;

        system("cls");
        cout<<endl<<" Program Data Total Nilai Seluruh Siswa SMP X"<<endl;
        cout<<" --------------------------------------------"<<endl;
        cout<<" Hapus Data"<<endl;
        cout<<endl<<" Mapel "<<noMapel<<" berhasil dihapus !!"<<endl<<endl;

        cout<<" Data Nilai"<<endl;
        cout<<" ---------"<<endl<<endl;
        
        for(i=0; i<countNamaMapel; i++)
        {
            cout<<" ["<<i+1<<"] Nilai "<<namaMapel[i]<<" = "<<nilai[i]<<endl;
        }

        cout<<endl<<" --------------------------------------------"<<endl;
        cout<<" Ingin kembali ke menu? [ya] : ";
        cin>>kembali;

        if(kembali == "ya" || kembali == "Ya" ||  kembali == "Y" || kembali == "y")
            { system("cls"); main();}
        else 
            { system("cls"); main();}
    }
}

void cariNilai()
{
    system("cls");
    cout<<endl<<" Program Data Total Nilai Seluruh Siswa SMP X"<<endl;
    cout<<" --------------------------------------------"<<endl;
    cout<<" Cari Nilai."<<endl<<endl;

    cout<<" Data Lama"<<endl;
    cout<<" ---------"<<endl<<endl;
    for(i=0; i<countNamaMapel; i++)
    {
        cout<<" ["<<i+1<<"] Nilai "<<namaMapel[i]<<" = "<<nilai[i]<<endl;
    }

    cout<<endl<<" Ubah Data"<<endl;
    cout<<" ---------"<<endl<<endl;

    cout<<" Cari Mapel (ex: Olahraga) : "; cin>> pilihMapel;
    cout<<endl<<endl;

    for(i=0; i<countNamaMapel; i++)
    {
        if(namaMapel[i] == pilihMapel)
        {
            cout<<" Nilai "<<namaMapel[i]<<" ditemukan ! - ";
            cout<<" Pada urutan ke : "<<i+1<<endl<<endl;
            cout<<" Nilai "<<namaMapel[i]<<" = "<<nilai[i]<<endl;
            break;
        }
    }

    cout<<endl<<" --------------------------------------------"<<endl;
    cout<<" Ingin kembali ke menu? [ya] : ";
    cin>>kembali;

    if(kembali == "ya" || kembali == "Ya" ||  kembali == "Y" || kembali == "y")
        { system("cls"); main();}
    else 
        { system("cls"); main();}
}