#include <iostream>
using namespace std;

int main ()
{	

	string pesan = "selamat belajar di belajarcpp.com", kalimat = "";
	
	cout<<pesan<<endl;
	getline(cin,kalimat); //fungsi input agar dpt baca kalimat panjang
	cout<<kalimat<<endl;
	
	return 0;
}
