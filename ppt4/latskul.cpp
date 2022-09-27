#include <iostream>
using namespace std;

int main()
{
	string nama,nb;
	float h,tb; //atau long atau double
	int jb;
	
	cout<<"masukkan nama pelanggan : ";
	getline(cin,nama);
	cout<<"masukkan nama barang : "; cin>>nb;
	cout<<"masukkan harga barang : "; cin>>h;
	cout<<"masukkan jumlah beli : "; cin>>jb;
	
	tb = h * jb;
	cout<<"---------------------------------"<<endl;
	cout<<"barang yang anda beli adalah "<<nb<<endl;
	cout<<"dengan harga "<<h<<endl;
	
	cout<<"total bayar : "<<tb<<endl;
	cout<<"bonus :";
	(tb > 500000) ? (cout<<"anda mendapat payung") : (cout<<"terima kasih")<<endl;
	cout<<"terima kasih "<<nama<<endl;
	
	return 0;
}
