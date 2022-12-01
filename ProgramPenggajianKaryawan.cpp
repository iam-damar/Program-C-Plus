#include <iostream>
#include <conio.h>

using namespace std;

// Program Gaji Karyawan Sederhana
// Soal
// Buatlah program untuk menghitung gaji karyawan, dengan ketentuan sbb:
// 	Input :
// 		a) Nama karyawan
// 		b) NIK
// 		c) Jenis kelamin [0=perempuan, 1=laki-laki]
// 		d) Status pernikahan [0=single, 1=menikah]
// 		e) Kendaraan [0=motor, 1=mobil]
// 		f) Gaji pokok
// 		g) Uang makan
// 	Output:
// 		a) Tunjangan dengan syarat:
// 			Jika jenis kelamin laki-laki dan status menikah maka mendapat
// 		   	500 selain itu tunjangan 0
// 		b) Transport dengan syarat :
// 			 jika kendaraan mobil maka mendapat 1000
// 			 jika kendarran motor maka mendapat 500
// 			 jika selain itu maka 0
// 		c) Gaji kotor
// 		d) Gaji kotor = gaji pokok + tunjangan + uang makan + transport
// 		e) Pajak
// 			 5% dari gaji kotor  0.05*gaji kotor
// 		f) Gaji bersih
// 		g) Gaji bersih = gaji kotor – pajak

int main()
{
	string namaKaryawan, jkNama, namaStatusNikah, namaKendaraan;
	int nik, JK, statNikah, 
		kendaraan, gajiPokok = 0, 
		UangMakan = 0, tunjangan = 0, 
		transport = 0, gajiKotor = 0,
		pajak = 0, gajiBersih = 0;
	
	cout<<"Masukan Nama Karyawan = "; cin>>namaKaryawan;
	cout<<"Masukan NIK = "; cin>>nik;
	
	cout<<endl<<"(Jenis Kelamin 0 (perempuan), 1 (laki-laki))"<<endl;
	cout<<"Masukan Jenis Kelamin = "; cin>>JK;
	
	cout<<endl<<"(Status 0 Single, 1 Menikah)"<<endl;
	cout<<"Masukan Status Nikah = "; cin>>statNikah;
	
	cout<<endl<<"(Kendaraan 0 motor, 1 mobil)"<<endl;
	cout<<"Masukan Jenis Kendaraan = "; cin>>kendaraan;
	
	cout<<endl<<"Masukan Gaji Pokok = "; cin>>gajiPokok;
	cout<<"Masukan Uang Makan = "; cin>>UangMakan;
	
	switch(JK)
	{
		case 0 :
			jkNama = "Perempuan";
			break;
		case 1 :
			jkNama = "Laki-Laki";
			break;
		default :
			cout<<"Jenis Kelamin tidak diketahui";
			break;
	}
	
	switch(statNikah)
	{	
		case 0 :
			namaStatusNikah = "Single";
			break;
		case 1 :
			namaStatusNikah = "Menikah";
			tunjangan = 500;
			break;
		default :
			cout<<"Status nikah tidak ada";
	}
	
	switch(kendaraan)
	{	
		case 0 :
			namaKendaraan = "Motor";
			transport = 500;
			break;
		case 1 :
			namaKendaraan = "Mobil";
			transport = 1000;
			break;
		default :
			cout<<"Kendaraan tidak ada";
	}
	
	// Perhitungan Gaji Kotor
	gajiKotor = gajiPokok + tunjangan + UangMakan + transport;
	// Pajak
	pajak = 0.05 * gajiKotor;
	// Gaji Bersih
	gajiBersih = gajiKotor - pajak;

	cout<<"------------------------------------------------"<<endl;
	cout<<"Nama Karyawan : "<<namaKaryawan<<endl;
	cout<<"NIK : "<<nik<<endl;
	cout<<"Jenis Kelamin : "<<jkNama<<endl;
	cout<<"Status Pernikahan : "<<namaStatusNikah<<endl;
	cout<<"Kendaraan : "<<namaKendaraan<<endl;
	cout<<"Gaji Pokok : Rp."<<gajiPokok<<endl;
	cout<<"Tunjangan : Rp."<<tunjangan<<endl;
	cout<<"Transport : Rp."<<transport<<endl;
	cout<<"Uang Makan : Rp."<<UangMakan<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"Gaji Kotor : Rp."<<gajiKotor<<endl;
	cout<<"Pajak : Rp."<<pajak<<endl;
	cout<<"Gaji Bersih : Rp."<<gajiBersih<<endl;

}