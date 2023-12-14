#include <iostream>
using namespace std;

int main() {
	
	float phi = 3.14;
	float L, r;
	
	cout<<"-----Menghitung Luas Lingkaran-----";
	cout<<"\n\n[LINGKARAN 1]";
	cout<<"\nMasukkan ruas jari-jari lingkaran = ";
	cin>>r;
	
	L = phi * r * r;
		
	cout<<"\nDiketahui jari-jari lingkaran sebagai berikut :";
	cout<<"\nphi \t = "<<phi;
	cout<<"\nr \t = "<<r;
	
	cout<<"\n\nLuas lingkaran";
	cout<<"\nL = phi * r * r";
	cout<<"\nL = "<<phi<<" * "<<r<<" * "<<r;
	cout<<"\n====================";
	
	cout<<"\n\nLuas lingkaran dengan jari-jari "<<r<<" cm";
	cout<<"\n= "<<L<<" cm2";
	cout<<"\n========================================";
	
	
	float phi2 = 3.14;
	float L2, r2;
	
	cout<<"\n\n[LINGKARAN 2]";
	cout<<"\nMasukkan ruas jari-jari lingkaran = ";
	cin>>r2;
	
	L2 = phi2 * r2 * r2;
		
	cout<<"\nDiketahui jari-jari lingkaran sebagai berikut :";
	cout<<"\nphi \t = "<<phi2;
	cout<<"\nr \t = "<<r2;
	
	cout<<"\n\nLuas lingkaran";
	cout<<"\nL = phi * r * r";
	cout<<"\nL = "<<phi2<<" * "<<r2<<" * "<<r2;
	cout<<"\n====================";
	
	cout<<"\n\nLuas lingkaran dengan jari-jari "<<r2<<" cm";
	cout<<"\n= "<<L2<<" cm2";
	cout<<"\n========================================";
	
	float phi3 = 3.14;
	float rusuk, tinggi, LT, VT;
	
	cout<<"\n\n-----Menghitung Luas dan Volume Tabung-----";
	cout<<"\n\n[TABUNG 1]";
	cout<<"\nMasukkan rusuk = ";
	cin>>rusuk;
	cout<<"Masukkan tinggi = ";
	cin>>tinggi;
	
	LT = 2 * phi3 * rusuk * (rusuk + tinggi);
	VT = phi3 * rusuk * rusuk * tinggi;
	
	cout<<"\nDiketahui rusuk dan tinggi tabung sebagai berikut :";
	cout<<"\nphi \t = "<<phi3;
	cout<<"\nrusuk \t = "<<rusuk;
	cout<<"\ntinggi \t = "<<tinggi;
	
	cout<<"\n\nLuas Permukaan Tabung";
	cout<<"\nL = 2 * phi * rusuk * (rusuk + tinggi)";
	cout<<"\nL = 2 * "<<phi3<<" * "<<rusuk<<" * "<<"( "<<rusuk<<" + "<<tinggi<<" )";
	cout<<"\n=========================";
	cout<<"\n\nLuas permukaan Tabung dengan rusuk "<<rusuk<<" cm dan tinggi "<<tinggi<<" cm";
	cout<<"\n= "<<LT<<" cm2";
	
	cout<<"\n\nVolume Tabung";
	cout<<"\nV = phi * rusuk * rusuk * tinggi";
	cout<<"\nV = "<<phi3<<" * "<<rusuk<<" * "<<rusuk<<" * "<<tinggi;
	cout<<"\n=========================";
	cout<<"\n\nVolume Tabung dengan rusuk "<<rusuk<<" cm dan tinggi "<<tinggi<<" cm";
	cout<<"\n= "<<VT<<" cm2";
	cout<<"\n========================================";
	
	
	float phi4 = 3.14;
	float rusuk2, tinggi2, LT2, VT2;
	
	cout<<"\n\n[TABUNG 2]";
	cout<<"\nMasukkan rusuk = ";
	cin>>rusuk2;
	cout<<"Masukkan tinggi = ";
	cin>>tinggi2;
	
	LT2 = 2 * phi4 * rusuk2 * (rusuk2 + tinggi2);
	VT2 = phi4 * rusuk2 * rusuk2 * tinggi2;
	
	cout<<"\nDiketahui rusuk dan tinggi tabung sebagai berikut :";
	cout<<"\nphi \t = "<<phi4;
	cout<<"\nrusuk \t = "<<rusuk2;
	cout<<"\ntinggi \t = "<<tinggi2;
	
	cout<<"\n\nLuas Permukaan Tabung";
	cout<<"\nL = 2 * phi * rusuk * (rusuk + tinggi)";
	cout<<"\nL = 2 * "<<phi4<<" * "<<rusuk2<<" * "<<"( "<<rusuk2<<" + "<<tinggi2<<" )";
	cout<<"\n=========================";
	cout<<"\n\nLuas permukaan Tabung dengan rusuk "<<rusuk2<<" cm dan tinggi "<<tinggi2<<" cm";
	cout<<"\n= "<<LT2<<" cm2";
	
	cout<<"\n\nVolume Tabung";
	cout<<"\nV = phi * rusuk * rusuk * tinggi";
	cout<<"\nV = "<<phi4<<" * "<<rusuk2<<" * "<<rusuk2<<" * "<<tinggi2;
	cout<<"\n=========================";
	cout<<"\n\nVolume Tabung dengan rusuk "<<rusuk2<<" cm dan tinggi "<<tinggi2<<" cm";
	cout<<"\n= "<<VT2<<" cm2";
	
	
	return 0;
}
