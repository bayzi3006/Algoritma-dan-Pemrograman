#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
	//Deklarasi Variable
	int Tinggibadan,Sisa,Beratbadanideal;
	cout<<"Masukkan Tinggi Badan:";cin>>Tinggibadan;
	
	//Menghitung Konversi 
	Sisa=(Tinggibadan-100)*0.1;
	Beratbadanideal=Tinggibadan-100-Sisa;
	cout<<endl;
	
	//Menampilkan hasil
	cout<<"Berat Badan Ideal:"<<Beratbadanideal<<endl;
	getch() ;
	
return 0 ;
}
