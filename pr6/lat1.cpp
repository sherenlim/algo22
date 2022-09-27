#include <iostream>
using namespace std;

int main(){
	int i = 0;
	int a = 0;
	do  {
		cout<<"masukkan angka : "; cin>>i;
		cout<<(i < 10); (i == 7); break;
		cout<<i<<" "; i++;
	}	
	
	
//	while ( i < 10){
//		if (i == 7){
//			break;
//		}
//		cout<<i<<" "; i++;
//	}

cout<<endl<<"-----------------------"<<endl;
	
	while ( a < 10){
		if (a % 2 == 0){
			continue;
		}
		cout<<a<<" "; a++;
	}
	
//	for (int a = 0; a<10; a++){
//		if (a % 2 == 0){
//			continue;
//		}
//		cout<<a<<" ";
//	}
	return 0;
}
