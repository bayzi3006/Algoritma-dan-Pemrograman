#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
	//Deklarasi Variable
	int yard,kaki,inchi,meter;
	cout<<"Masukkan satuan meter:";
	cin>>meter
	
	//Menghitung Konvensi
	;yard=meter/0.9144;
	kaki=meter/0.3048;
	inchi=meter/0.0254;
	cout<<endl;
	
	//Menampilkan Hasilnya
	cout<<yard<<"Yard"<<kaki<<"Kaki"<<inchi<<"Inchi";

return 0;
}
