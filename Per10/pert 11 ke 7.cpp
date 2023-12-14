#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
	string nama;
	int umur;
	float ipk;
};

float hitungRataRataIPK(Mahasiswa mahasiswas[], int jumlah)
{
	float total = 0;
	for(int i=0; i<jumlah; i++){
		total += mahasiswas[i].ipk;
		}
	return total / jumlah;
}

int main()
{
	
	const int jumlahMahasiswa = 3;
	Mahasiswa DaftarMahasiswa[jumlahMahasiswa];
	
	for(int i=0; i<jumlahMahasiswa; i++)
	{
		cout<<"Masukkan nama mahasiswa "<<i+1<<" = ";
		cin>>DaftarMahasiswa[i].nama;
		
		cout<<"Masukkan umur mahasiswa "<<i+1<<" = ";
		cin>>DaftarMahasiswa[i].umur;
		
		cout<<"Masukkan IPK mahasiswa  "<<i+1<<" = ";
		cin>>DaftarMahasiswa[i].ipk;
	}
		
	cout<<"\nData Mahasiswa:\n";
	for(int i=0; i<jumlahMahasiswa; i++)
	{
		cout<<"Mahasiswa "<<i+1<<": \n";
		cout<<" Nama: "<<DaftarMahasiswa[i].nama<<"\n";
		cout<<" Umur: "<<DaftarMahasiswa[i].umur<<"\n";
		cout<<" IPK: "<<DaftarMahasiswa[i].ipk<<"\n";
	}
	
	float rataRata = hitungRataRataIPK(DaftarMahasiswa, jumlahMahasiswa);
		cout<<"\nRata-rata IPK: "<<rataRata<<"\n";
		
	return 0;
}


