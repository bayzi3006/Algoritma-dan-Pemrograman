#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
	//Deklarasi Variable
	double TotalBel_, Potongan=0,JumlahBay_=0;
	cout<<"Total Pembelian Rp.";cin>>TotalBel_;
	
	if(TotalBel_>=50000) Potongan=0.2*TotalBel_;
	
	else
	Potongan=0.05*TotalBel_;
	
	cout<<"Besarnya Potongan Rp."<<Potongan<<endl;
	JumlahBay_=TotalBel_-Potongan;
	cout<<"Jumlah yang harus dibayarkan Rp."<<JumlahBay_<<endl;
	getch();
	
	return 0;
}
