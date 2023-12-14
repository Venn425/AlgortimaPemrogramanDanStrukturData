#include <iostream>
using namespace std;

struct mhs{
	char nama[20], nim[10], matkul[15];
	int sks;
};

struct mhs bayar[2];

int main(){
	int bts,var,tetap;
	for(int i=0; i<2; i++){
		cout<<"\n\n----------------------------\n";
		cout<<"\nNama mhs	= ";
		cin>>bayar[i].nama;
		cout<<"NIM		= ";
		cin>>bayar[i].nim;
		cout<<"Mata Kuliah	= ";
		cin>>bayar[i].matkul;
		cout<<"Jumlah SKS	= ";
		cin>>bayar[i].sks;
	
	if(bayar[i].sks==0){
		tetap=250000;
		var=bayar[i].sks*250000;
		cout<<"SPP tetap	= "<<tetap<<endl;
		cout<<"SPP variable	= "<<var<<endl;
	}else if(bayar[i].sks==2){
		tetap=300000;
		var=bayar[i].sks*300000;
		cout<<"SPP tetap	= "<<tetap<<endl;
		cout<<"SPP variable	= "<<var<<endl;
	}cout<<endl;

	cout<<"Nama mhs	= "<<bayar[i].nama<<endl;
	cout<<"NIM		= "<<bayar[i].nim<<endl;
	cout<<"Mata Kuliah	= "<<bayar[i].matkul<<endl;
	cout<<"Jumlah SKS	= "<<bayar[i].sks<<endl;
	
	if(bayar[i].sks==0){
		tetap=250000;
		var=bayar[i].sks*250000;
		cout<<"SPP tetap	= "<<tetap<<endl;
		cout<<"SPP variable	= "<<var<<endl;
	}else if(bayar[i].sks==2){
		tetap=300000;
		var=bayar[i].sks*300000;
		cout<<"SPP tetap	= "<<tetap<<endl;
		cout<<"SPP variable	= "<<var<<endl;
	}cout<<endl;
	
	}
	return 0;

}
