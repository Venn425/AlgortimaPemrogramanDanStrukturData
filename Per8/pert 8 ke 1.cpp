#include <iostream>
using namespace std;

void persegi(float sisi);
void lingkaran(float rusuk);
void tabung(float rusuk, float tinggi);

main(){
	int sisi,rusuk,tinggi;
	char jawaban;
	
	do{
	cout<<"=====Menghitung Luas Persegi=====\n";
	cout<<"Masukkan sisi persegi : ";
	cin>>sisi;
	persegi(sisi);
	
	cout<<"\n=====Menghitung Luas Lingkaran=====\n";
	cout<<"Masukkan rusuk lingkaran : ";
	cin>>rusuk;
	lingkaran(rusuk);
	
	cout<<"\n=====Menghitung Luas Tabung=====\n";
	cout<<"Masukkan rusuk tabung : ";
	cin>>rusuk;
	cout<<"Masukkan tinggi tabung : ";
	cin>>tinggi;
	tabung(rusuk, tinggi);
	
	cout<<"\nIngin mengulang pertanyaan? (y/n)";
	cin>>jawaban;
	}while (jawaban != 'n' && jawaban != 'N');
	
	cout<<"Selesai.";
	
	return 0;
}
	
	void persegi(float sisi) {
    float luas = sisi * sisi;
	
	cout<<"\nDiketahui sisi persegi sebagai berikut :";
	cout<<"\ns \t = "<<sisi;
	cout<<"\n\nLuas Persegi";
	cout<<"\nL = sisi * sisi";
	cout<<"\nL = " << sisi << " * " <<sisi;
    cout << "\nLuas persegi dengan sisi " << sisi << " adalah: " << luas << " cm2" << endl;
	}
	
	void lingkaran(float rusuk) {
    float luas = 3.14 * rusuk * rusuk;
	
	cout<<"\nDiketahui rusuk lingkaran sebagai berikut :";
	cout<<"\nphi \t = 3.14";
	cout<<"\nr \t = "<<rusuk;
	cout<<"\n\nLuas lingkaran";
	cout<<"\nL = phi * r * r";
	cout<<"\nL = 3.14" << " * "<<rusuk<<" * "<<rusuk;
    cout << "\nLuas lingkaran dengan rusuk " << rusuk << " adalah: " << luas << " cm2" << endl;
	}
	
	void tabung(float rusuk, float tinggi) {
    float luas = 2 * 3.14 * rusuk * (rusuk + tinggi);
	
	cout<<"\nDiketahui rusuk dan tinggi tabung sebagai berikut :";
	cout<<"\nphi \t = 3.14";
	cout<<"\nrusuk \t = "<<rusuk;
	cout<<"\ntinggi \t = "<<tinggi;
	cout<<"\n\nLuas Permukaan Tabung";
	cout<<"\nL = 2 * phi * rusuk * (rusuk + tinggi)";
	cout<<"\nL = 2 * 3.14" << " * "<<rusuk<<" * "<<"( "<<rusuk<<" + "<<tinggi<<" )";
    cout << "Luas tabung dengan rusuk " << rusuk << " dan tinggi " << tinggi << " adalah: " << luas << " cm2" << endl;
	}
