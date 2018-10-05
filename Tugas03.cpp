#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
	//Deklarasi Variable
	int angka;
	
	//Input Angka
	cout<<"Masukkan angka:";
	cin>>angka; cout<<endl;
	//Seleksi perbandingan AND, kedua kondisi harus bernilai benar

if ((angka>0)&&(angka<10))
{cout<<"Anda memasukkan antara 1 sampai 9";}

else
{cout<<"Yang anda masukkan bukan antara 1 sampai 9";}

return 0;
}
