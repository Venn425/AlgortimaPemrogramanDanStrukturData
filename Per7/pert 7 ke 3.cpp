#include <iostream>
#include <iomanip>
using namespace std;

main(){
	
	const double PAJAK = 0.1;
    string ayam[]={"Dada","Paha","Sayap"};
    int harga[]={2500,2000,1500};
    string kode[]={"D","P","S"};
    int potong[100];
    int pilihan, i;
	
	cout << "FRIED CHICKEN SRION\n";
    cout << "----------------------\n";
    cout << "Jenis\t Harga\t Kode\n";
    cout << "----------------------\n";
   		for(i=0; i<3; i++){
    		cout << "" << ayam[i] << "\tRp." << harga[i] << "\t  " << kode[i] << "  " << endl;
   		}
   	cout << "-----------------------\n";
   
   	cout << "Banyak Jenis : ";
   	cin >> pilihan;   
   		for(i=0; i<pilihan; i++){
   			cout << "Jenis ke - " << i+1 << endl;
   			cout << "Jenis Potong [D/P/S] : ";
   			cin >> kode[i];
   			cout << "Banyak Potong : ";
   			cin >> potong[i];
   		}
	
	double totalHarga = 0.0;
	    for(i=0; i<pilihan; ++i) {
	    	if(kode[i]=="D"){
	    		harga[i]=2500;
			}if(kode[i]=="P"){
				harga[i]=2000;
			}if(kode[i]=="S"){
				harga[i]=1500;
			}
	        totalHarga += harga[i] * potong[i];
	    }

    double totalPajak = totalHarga * PAJAK;
   
   	cout << "\nData Pembelian\n";
   	cout<<"\tFRIEND CHICKEN SRION\n";
   	cout<<"-----------------------------------------\n";
    cout << "No. \tJenis \tHarga \tBanyak\tJumlah\n";
    cout << "\tPotong\tSatuan\tPotong\tHarga\n";
    cout<<"-----------------------------------------\n";

    	for (int i = 0; i < pilihan; ++i) {
        	cout << i+1 << "  \t" << kode[i] << "  \t" << harga[i] << "  \t" << potong[i] << "  \t" << harga[i] * potong[i] << endl;
    	}
    	
    cout<<"-----------------------------------------\n";
    
    cout << "\t\tJumlah Bayar  \tRp." << totalHarga << endl;
    cout << "\t\tPajak (" << PAJAK * 100 << "%)  \tRp." << totalPajak << endl;
    cout << "\t\tTotal Bayar  \tRp." << totalHarga + totalPajak<<endl;
    
    cout<<"-----------------------------------------\n";


   return 0;
}
