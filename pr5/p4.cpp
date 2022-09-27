#include <iostream>
using namespace std;

int main(){
	int total_belanja;
	char member;
	cout<<"masukkan total belanja : "; cin>>total_belanja;
	cout<<"apakah anda member (y/t)? : "; cin>>member;
	if(total_belanja > 1000000){ // jika lbh dr 1 jt
		if (member == 'y'|| member == 'Y'){
			cout<<"potongan 35000"<<endl; // lbh dr 1 jt dgn mmbr
		} else {
			cout<<"potongan 20000"<<endl; //lbh dr 1 jt tanpa mmbr
		}
	} else {
		cout<<"potongan 0"<<endl; // di bwh 1 jt
	}
}
