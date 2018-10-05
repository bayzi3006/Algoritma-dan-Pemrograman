#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{		
	//Deklarasi variable
	int MasukJam,MasukMenit,MasukDetik;
	int KeluarJam,KeluarMenit,KeluarDetik;
	int SelisihJam,SelisihMenit,SelisihDetik;
	
	//Input data jam masuk
	cout<<"Waktu masuk "<<endl;
	cout<<"Jam:"; cin>>MasukJam;
	cout<<"Menit:"; cin>>MasukMenit;
	cout<<"Detik:"; cin>>MasukDetik;
	
	//Input data jam keluar
	cout<<"Waktu keluar "<<endl;
	cout<<"Jam:"; cin>>KeluarJam;
	cout<<"Menit:"; cin>>KeluarMenit;
	cout<<"Detik:"; cin>>KeluarDetik;
	
	//Menghitung selisih jam
if ((KeluarJam - MasukJam)<0) 
{SelisihJam=(24+KeluarJam)-MasukJam;}
else
{SelisihJam=KeluarJam-MasukJam;}

	//Menghitung selisih menit
if ((KeluarMenit-MasukMenit)<0)
{SelisihMenit=(60+KeluarMenit)-MasukMenit;}
else 
{SelisihMenit=KeluarMenit-MasukMenit;}
		
	//Menghitung selisih detik
if ((KeluarDetik-MasukDetik)<0)
{SelisihDetik=(60+KeluarDetik)-MasukDetik;}
else{SelisihDetik=KeluarDetik-MasukDetik;}
	
	//Menampilkan hasilnya
cout<<"Selisih Waktu"<<endl;
cout<<SelisihJam<<"SelisihJam"<<SelisihMenit<<"SelisihMenit"<<SelisihDetik<<"SelisihDetik"<<endl;
getch ();

return 0;	
}
