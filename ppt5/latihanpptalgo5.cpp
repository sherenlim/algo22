#include <iostream>
using namespace std;
int main()
{
	string n,p;
	float t,uts,uas,nilai;
	char nh;
	
	
	cout<<"masukkan nama anda : "; 
	getline(cin,n);
	cout<<"masukkan nilai tugas anda : "; cin>>t;
	cout<<"masukkan nilai uts anda : "; cin>>uts;
	cout<<"masukkan nilai uas anda : "; cin>>uas;
	cout<<"-----------------------"<<endl;	
	cout<<"selamat "<<n<<endl;
	nilai = (t+uts+uas)/3;
	cout<<"nilai anda : "<<nilai<<endl;
	
	if (nilai > 0 && nilai<= 20)
	{ nh = 'E'; }
	else if (nilai > 20 && nilai <= 40)
	{ nh = 'D'; }
	else if (nilai > 41 && nilai <= 60)
	{ nh = 'C'; }
	else if (nilai > 61 && nilai <= 80)
	{ nh = 'B'; }
	else if (nilai > 81 && nilai <= 100)
	{ nh = 'A'; }
	else
	{ nh = 'X'; }
	
	cout<<"nilai huruf : "<<nh<<endl;
	
	switch (nh)
	{
		case 'A' : cout<<"predikat : sangat baik"; break;
		case 'B' : cout<<"predikat : baik"; break;
		case 'C' : cout<<"predikat : cukup"; break;
		case 'D' : cout<<"predikat : kurang"; break;
		case 'E' : cout<<"predikat : sangat kurang"; break;
		default : cout<<"error";
	}	
}
