#include <iostream> //Library yang digunakan
using namespace std; //Agar dapat menggunakan seluruh code dalam ;;std tanpa mengetik ulang ;;std

//Fungsi main
main(){ //Menjalankan/eksekusi program
	
	//Menggunakan tipe data integer dengan nama variable x dan bilangan = 0
	int x, bil=0;
	
	//Menampilkan hasil output x sebagai nilai pembatas akhir
	cout<<"Masukkan bilangan pembatas akhir : ";
	//Memasukkan input nilai x
	cin>>x;
	
	//Pernyataan do while proses loop/perulangan yang akan menjalankan program terlebih dahulu baru mengecek kondisi
	//do menjalankan program terlebih dahulu
	do{ //Menjalankan/eksekusi program
		//Pernyataan if dengan kondisi jika bil lebih dari sama dengan x
		if(bil>=x)
		//Break untuk menghentikan eksekusi dari sebuah loop perulangan atau switch 
		break;
		//Menampilkan hasil output bil jika lebih dari sama dengan x
		cout<<" "<<bil;
	} //Menjalankan/eksekusi program
	while(bil+=4);//while memerika setelah menjalankan program dengan menambah +4 pada bil
	
	//Getchar untuk membaca satu karakter dari sumber input standar
	getchar();
	
} //Menjalankan/eksekusi program
