#include <iostream>
using namespace std;

int main(){
	int uts, uas, n;
	cout<<"masukkan nilai uts : "; cin>>uts; 
	cout<<"masukkan nilai uas : "; cin>>uas;
	n = (uts + uas) /2;
	(n >= 60) ? (cout<<"lulus") : (cout<<"tidak lulus");
}
