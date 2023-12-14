#include <iostream>
using namespace std;

main() {
	
char nama[40];
int tanding1, tanding2, tanding3, rata2;
string indeks;

	cout<<"Menghitung Nilai Rata-Rata IF-ELSE";
	cout<<"\n===================================";
	cout<<"\n\nMasukkan Nama Siswa : ";
	cin>>nama;
	cout<<"Nilai Pertandingan 1 : ";
	cin>>tanding1;
	cout<<"Nilai Pertandingan 2 : ";
	cin>>tanding2;
	cout<<"Nilai Pertandingan 3 : ";
	cin>>tanding3;
	cout<<endl;

	rata2 = (tanding1 + tanding2 + tanding3)/3;

	cout<<"Siswa yang bernama "<<nama<<endl;
	cout<<"Memperoleh nilai rata rata "<<rata2;

        if(rata2 >= 85)
        {
        cout<<" Mendapat Hadiah Komputer Core i5";
        }
        else
        if(rata2 >= 70)
        {
        cout<<" Mendapat Hadiah Uang sebesar Rp. 2.500.000";
        }
        else
        if(rata2 < 70)
        {
        cout<<" Mendapat Hadiah Hiburan";
        }
        
	cout<<"\nDari hasil perlombaan yang diikutinya";
	cout<<"\n===================================";
	
	
	cout<<"\n\nMenghitung Nilai Rata-Rata NESTED-IF";
	cout<<"\n===================================";
	cout<<"\n\nMasukkan Nama Siswa : ";
	cin>>nama;
    cout<<"Nilai Pertandingan 1 : ";
    cin>>tanding1;
    cout<<"Nilai Pertandingan 2 : ";
    cin>>tanding2;
    cout<<"Nilai Pertandingan 3 : ";
    cin>>tanding3;
    cout<<endl;

    rata2 = (tanding1 + tanding2 + tanding3)/3;
    
    cout<<"Siswa yang bernama "<<nama<<endl;
	cout<<"Memperoleh nilai rata rata "<<rata2;

    if (rata2 >= 85) {
        cout<<" Mendapat Hadiah Core i5";
    }
    else {
        if (rata2 >= 70 && rata2 < 85) {
            cout<<" Mendapat Hadiah Uang Rp. 2.500.000";
        }
        else {
            if (rata2 < 70) {
            cout<<" Mendapat Hadiah Hiburan";
                }
            }
        }

	cout<<"\nDari hasil perlombaan yang diikutinya";
	cout<<"\n===================================";
	
	
	cout<<"\n\nMenghitung Nilai Rata-Rata IF-ELSE MAJEMUK";
	cout<<"\n===================================";
	cout<<"\n\nMasukkan Nama Siswa : ";
	cin>>nama;
    cout<<"Nilai Pertandingan 1 : ";
    cin>>tanding1;
    cout<<"Nilai Pertandingan 2 : ";
    cin>>tanding2;
    cout<<"Nilai Pertandingan 3 : ";
    cin>>tanding3;
    cout<<endl;
     
    rata2 = (tanding1 + tanding2 + tanding3)/3;

    if(rata2 >= 85){
          indeks = " Hadiah Core i5";
    }
    else if(rata2 >= 70){
          indeks = " Hadiah Uang Rp. 2.500.000";
    }
    else{
          indeks = " Hadiah Hiburan";
    }

	cout<<"Siswa yang bernama "<<nama;
    cout<<"\nMemperoleh nilai rata rata "<<rata2;
    cout<<"\nHadiah yang didapat adalah"<<indeks;	
    cout<<"\nDari hasil perlombaan yang diikutinya";
	cout<<"\n===================================";
	
	
	cout<<"\n\nMenghitung Nilai Rata-Rata SWITCH CASE";
	cout<<"\n===================================";
	cout<<"\n\nMasukkan Nama Siswa : ";
	cin>>nama;
	cout<<"Nilai Pertandingan 1 : ";
	cin>>tanding1;
	cout<<"Nilai Pertandingan 2 : ";
	cin>>tanding2;
	cout<<"Nilai Pertandingan 3 : ";
	cin>>tanding3;
	cout<<endl;
  
    rata2 = (tanding1 + tanding2 + tanding3)/3;
    
    cout<<"Siswa yang bernama "<<nama<<endl;
	cout<<"Memperoleh nilai rata rata "<<rata2;
	
	cout<<"\n\n---Daftar Ketentuan Nilai Rata-Rata---";
	cout<<"\n1. Nilai >= 85";
	cout<<"\n2. Nilai >= 70";
	cout<<"\n3. Nilai < 70";
	
	cout<<"\nMasukkan pilihan rata rata : ";
	cin>>rata2; 
  
    switch(rata2) {
       case 1 :
           cout<<"\nMendapatkan Hadiah Komputer Core i5";
           break;
       case 2 :
       		cout<<"\nMendapatkan Hadiah Uang sebesar Rp. 2.500.000";
           break;
       case 3 :
           cout<<"\nMendapatkan Hadiah Hiburan";
           break;
        default : cout<<"Tidak tersedia";
    }

	cout<<"\nDari hasil perlombaan yang diikutinya";
	cout<<"\n===================================";
	
	getchar ();
	return 0;
}
