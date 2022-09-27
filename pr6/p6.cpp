#include <iostream>
using namespace std;

int main(){
	int angka = 0;
	cobaLagi:
	cout<<"masukkan angka : "; cin>>angka;
	if (angka != 5){
		goto cobaLagi;
	}
	return 0;
}
