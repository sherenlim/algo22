#include <iostream>
using namespace std;
int main()
{
	int u;
	cout<<"input umur : "; cin>>u;
	string st,pr;
	switch (u){
		case 1 ... 3: st="batita"; pr="lagi lucu"; break;
		case 4 ... 5: st="balita"; pr="masih lucu"; break;
	}
	cout<<st<<endl<<pr<<endl;
}


	
//	string n,p;
//	float u,t,uts,uas,nilai;
//	char nh;
	
//	cout<<"masukkan nama anda : "; 
//	getline(cin,n);
//	cout<<"masukkan umur anda : "; cin>>u;

//	cout<<"-----------------------"<<endl;	
//	cout<<"selamat "<<n<<endl;
	
//	cout<<" umur anda "<<u<<endl;
	
//	if (u >= 0 && u<= 3)
//	{ nh = 'batita'; }
//	else if (u >= 4 && u <= 5)
//	{ nh = 'balita'; }
//	else if (u >= 5 && u <= 17)
//	{ nh = 'anak anak'; }
//	else if (u >= 18 && u <= 21)
//	{ nh = 'remaja'; }
//	else if (u >= 22 && u <= 60)
//	{ nh = 'dewasa'; }
//	else
//	{ nh = 'X'; }
	
//	cout<<"tahap : "<<nh<<endl;
	
//	switch (nh)
//	{
//		case 'A' : cout<<"predikat : sangat baik"; break;
//		case 'B' : cout<<"predikat : baik"; break;
//		case 'C' : cout<<"predikat : cukup"; break;
//		case 'D' : cout<<"predikat : kurang"; break;
//		case 'E' : cout<<"predikat : sangat kurang"; break;
//		default : cout<<"error";
//	}	

