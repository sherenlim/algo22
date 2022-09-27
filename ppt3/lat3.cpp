#include <iostream>
using namespace std;

int main ()
{
	double kebkal,bb,tb,u;
	
	cout<<"menghitung kebutuhan kalori (wanita)"<<endl;
	
	cout<<"masukkan berat badanmu = "; cin>>bb;
	cout<<"berat badanmu adalah "<<bb<<"kg"<<endl;
	
	cout<<"masukkan tinggi badanmu = "; cin>>tb;
	cout<<"tinggi badanmu adalah "<<tb<<"cm"<<endl;
	
	cout<<"masukkan usiamu = "; cin>>u;
	cout<<"usiamu adalah "<<u<<"tahun"<<endl;
	
	kebkal = (447.6 + 9.25 * bb) + (3.10 * tb) - (4.33 * u);
	
	cout<<"maka tubuhmu butuh kalori sebanyak " <<kebkal<<"kalori per hari";
	
	return 0;
}
