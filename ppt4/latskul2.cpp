#include <iostream>
using namespace std;

int main()
{
	string nama,prodi,mk;
	int u;
	
	cout<<"masukkan nama anda : ";
	getline(cin,nama);
	cout<<"masukkan umur anda : "; cin>>u;
	cout<<"masukkan prodi anda : "; cin>>prodi;
	cout<<"nama mata kuliah yang paling disukai : "; cin>>mk;
	
	cout<<"---------------------------------"<<endl;
	cout<<"saya "<<nama<<", umur "<<u<<"tahun dari prodi "<<prodi<<"dengan ini menyatakan : suka sekali dengan mata kuliah "<<mk;
	
	return 0;
}
