#include <iostream>
using namespace std;

int main(){
	struct dtmhs{
		char nim[9];
		char nama[15];
	};
	struct dtnil{
		float nil1;
		float nil2;
	};
	struct{
		struct dtmhs mhs;
		struct dtnil nil;
	} nilai;
	
	cout<<"masukkan NIM = "; cin>>nilai.mhs.nim;
	cout<<"masukkan NAMA = "; cin>>nilai.mhs.nama;
	cout<<"masukkan Nilai UTS = "; cin>>nilai.nil.nil1;
	cout<<"masukkan Nilai UAS = "; cin>>nilai.nil.nil2;
	cout<<endl;
	
	cout<<"Masukkan NIM = "<<nilai.mhs.nim<<endl;
	cout<<"Masukkan NAMA = "<<nilai.mhs.nama<<endl;
	cout<<"Masukkan Nilai UTS = "<<nilai.nil.nil1<<endl;
	cout<<"Masukkan Nilai UAS = "<<nilai.nil.nil2<<endl;
	
}
