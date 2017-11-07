#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main (){
	char bidang;
	double p,l,a,t,L;
	
	cout << "pilih bidang";
	cin >> bidang;
	
		if (bidang == 'P' || bidang == 'p') {
			cout << "Menghitung Luas persegi panjang \n";
			cout << "Masukkan Panjangnya :";
			cin >> p;
			cout << "Masukkan Lebarnya :";
			cin >> l;
			L = p*l;
			cout << "Luas Persegi Panjang : "<< L<<endl;
		}
		else if(bidang == 'S' || bidang == 's') {
			cout << "Menghitung luas segitiga \n";
			cout << "Masukkan alasnya :";
			cin >> a;
			cout << "Masukkan tingginya : ";
			cin >> t;
			L = 0.5*a*t;
			cout << "Luas Persegi panjang :"<< L<<endl;
		}
		else{
			cout<<"maaf, Anda salah memilih"<<endl;
		}
}
