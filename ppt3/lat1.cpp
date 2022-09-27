#include <iostream>
using namespace std;

int main(){
	
	const double pi = 3.14;
	
	double vol,r,t;
	
	cout<<"program cari volume kerucut"<<endl;
	
	cout<<"masukkan jarijari= "; cin>>r;
	cout<<"masukkan tinggi= "; cin>>t;
	
	vol = (pi * r * r * t) / 3;
	
	cout<<"volume kerucut = "<<vol;
	
	return 0;
}
