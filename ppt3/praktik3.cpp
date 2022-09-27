#include <iostream>
using namespace std;

#define tinggi 10
#define garis "---"

int main(){
	
	const double pi = 3.14;
	
	double vol,r;
	
	cout<<"program cari volume kerucut"<<endl;
	cout<<garis<<endl;
	
	cout<<"masukkan jarijari= "; cin>>r;
	
	vol = (pi * r * r * tinggi) / 3;
	
	cout<<"volume kerucut = "<<vol;
	
	return 0;
}
