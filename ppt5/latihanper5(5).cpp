#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"nilai a : "; cin>>a;
//	switch (a){
//		case 1 ... 5: cout<<"1-5"; break;
//		case 6 ... 9: cout<<"6-9"; break;
//		default: cout<<"bukan keduanya";
//	}   ///bentuk lain dari if else
	
	
// d bwh ini adalah bentuk if else ny
	if (a>=1 && a <=5){
		cout<<"1 sampai 5"<<endl;
	}
	else if (a>=6 && a <=9){
		cout<<"6 sampai 9"<<endl;
	}
	else {
		cout<<"bukan keduanya";
	}
}






