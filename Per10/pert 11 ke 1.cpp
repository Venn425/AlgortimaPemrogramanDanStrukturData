#include <iostream>
#include <string>
using namespace std;

int main(){
	struct{ 
	char nim[9];
	char nama[15];
	float nilai;
}
mahasiswa;
	cout<<"Masukkan NIM = ";
	cin>>mahasiswa.nim;
	cout<<"Masukkan Nama = ";
	cin>>mahasiswa.nama;
	cout<<"Masukkan Nilai Akhir = ";
	cin>>mahasiswa.nilai;
	cout<<"\n\nData Yang di Inputkan adalah : \n\n";
	cout<<"NIM = "<<mahasiswa.nim<<endl;
	cout<<"Nama = "<<mahasiswa.nama<<endl;
	cout<<"Nilai Akhir = "<<mahasiswa.nilai<<endl;
	getchar();
}
