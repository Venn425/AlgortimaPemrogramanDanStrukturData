#include <iostream>
using namespace std;
int main(){
	
	{
	int x; char y[40]; char z[40]; char c[40];
	cout<<"Masukan NPM : "; 
	cin>>x;
	cout<<"Masukkan Nama : "; 
	cin>>y;
	cout<<"Masukkan Kelas : "; 
	cin>>z;
	cout<<"Masukkan Matkul : "; 
	cin>>c;
	
    int a,b;
    cout<<"\n\nKalkulator 1";
    cout<<"\n\nMasukkan Angka 1: "; 
    cin>>a;
    cout<<"Masukkan Angka 2: ";
    cin>>b;
    cout<<"\nPenjumlahan = "<<a+b;
	cout<<"\nPerkalian = "<<a*b;
	cout<<"\nPengurangan = "<<a-b;
	cout<<"\nPembagian = "<<a/b;
	cout<<"\n====================";
	
	int e,f;
    cout<<"\n\nKalkulator 2";
    cout<<"\n\nMasukkan Angka 1: "; 
    cin>>e;
    cout<<"Masukkan Angka 2: ";
    cin>>f;
    cout<<"\nPenjumlahan = "<<e+f;
	cout<<"\nPerkalian = "<<e*f;
	cout<<"\nPengurangan = "<<e-f;
	cout<<"\nPembagian = "<<e/f;
	cout<<"\n====================";
	
	float g,h;
    cout<<"\n\nKalkulator 3";
    cout<<"\n\nMasukkan Angka 1: "; 
    cin>>g;
    cout<<"Masukkan Angka 2: ";
    cin>>h;
    cout<<"\nPenjumlahan = "<<g+h;
	cout<<"\nPerkalian = "<<g*h;
	cout<<"\nPengurangan = "<<g-h;
	cout<<"\nPembagian = "<<g/h;
	cout<<"\n====================";
	
    return 0;
	
	}
}
