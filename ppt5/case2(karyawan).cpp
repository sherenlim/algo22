#include <iostream>
using namespace std;
main()
{
	char kt,s;
	cout<<"apakah anda karyawan tetap (y/t) : "; cin>>kt;
	cout<<"apakah anda ada sertifikat keahlian (y/t) : "; cin>>s;
	
	if (kt == 'y') //tetap
	{ if (s == 'y') //bersertifikat
		{ cout<<"gaji anda 10 jt"<<endl; }	//tetap dan bersertifikat
		else 
		{ cout<<"gaji anda 8 jt"<<endl; } //tetap dan tdk bersertifikat
	}
	else 
	{ if (s == 'y')
		{ cout<<"gaji anda 6 jt"<<endl;	} //tdk tetap dan bersertifikat
		else 
		{ cout<<"gaji anda 5 jt"<<endl;	} //tdk tetap dan tdk bersertifikat
	}
}
	
	
