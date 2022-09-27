#include <iostream>

using namespace std;

int main()
{
    float r;
    float t;
    float v;
   
    cout<<"program hitung volume kerucut";

   
    cout<<"\n\nmasukkan jari-jari : "; cin>>r;
    cout<<"anda telah memasukkan nilai "; cout<<r; cout<<" sebagai jari-jari";
   
    cout<<"\n\nmasukkan tinggi\t : "; cin>>t;
    cout<<"anda telah memasukkan nilai "; cout<<t; cout<<" sebagai tinggi";
   
    v = (3.14 * r * r * t)/3;
    cout<<"\n\nvolume kerucut = "; cout<<v; cout<<" cm3.";
    return 0;
}
