#include <iostream>
using namespace std;

int main (){
	char jawab;
	int angka;
	
	do {
		cout<<"masukkan angka : ";
		cin>>angka;
		cout<<"angka "<<angka<<"adalah ";
		cout<<((angka % 2 == 1) ? "ganjil" : "genap");
		cout<<endl<<"coba lagi (y/t) ? "; cin>>jawab;
	}
	while (jawab == 'y' || jawab == 'Y');
	return 0;
}
