#include <iostream>
using namespace std;
main(){
	char n;
	cout<<"masukin nilai a-c : ";
	cin>>n;
	switch (n)
	{ case 'a' : cout<<"perfect"; break;
	case 'b' : cout<<"baik"; break;
	case 'c' : cout<<"kurang"; break;
	default : cout<<"salah input";
	}
}
