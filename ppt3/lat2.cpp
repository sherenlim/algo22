#include <iostream>
using namespace std;

int main ()
{
	double ideal,tb;
	
	cout<<"mencari berat badan ideal (wanita)"<<endl;
	
	cout<<"masukkan tinggi badanmu = "; cin>>tb;
	cout<<"tinggi badanmu adalah "<<tb<<"cm"<<endl;
	
	ideal = ((tb - 100)- ((tb - 100) *15/100));
	
	cout<<"maka berat badan idealmu adalah " <<ideal <<"kg";
	
	return 0;
}
