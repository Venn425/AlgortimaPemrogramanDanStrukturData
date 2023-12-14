#include <iostream>
using namespace std;

main() {
	int i,j,x,y,t,nilai;
	int awal=1,akhir=10;
	bool angka_prima = true;
	
	//No.1
	cout<<"-----PERULANGAN-----";
	cout<<endl;
	for(i=1; i<=5; i++){
		for(j=1; j<=6; j++){
			cout<<" "<<i;
		}
			cout<<endl;
	}
	cout<<"================================";
	
	//No.2
	cout<<"\n\n-----ANGKA BERURUT & GANJIL GENAP-----";
	cout<<"\nMenurun"<<endl;
	for(i=akhir; i>=awal; i--) { 
		cout<<i<<" "<<endl;
	}
	cout<<endl;
	
	cout<<"Naik"<<endl;
	for(i=awal; i<=akhir; i++) { 
		cout<<i<<" "<<endl;
	}
	cout<<endl;

	cout<<"Angka ganjil antara "<<awal<<" sampai "<<akhir<<" = ";
	for(x=awal; x<=akhir; x++) {
		if (x%2!=0){
		cout<<" "<<x;
		}
	}
	cout<<endl;
	
	cout<<"Angka genap antara "<<awal<<" sampai "<<akhir<<" = ";
	for(y=awal; y<=akhir; y++) {
		if (y%2==0){
		cout<<" "<<y;
		}
	}
	cout<<"\n================================";
	
	//No.3
	cout<<"\n\n-----ANGKA PRIMA-----";
	cout<<"\nMasukkan angka = ";
    cin>>nilai;

    if (nilai <= 1) {
        angka_prima = false;
    } else {
        for (i=2; i*i<=nilai; i++) {
            if (nilai % i == 0) {
                angka_prima = false;
                break;
            }
        }
    }

    if (angka_prima) {
    	cout<<nilai<<" adalah bilangan PRIMA."<<endl;
    } else {
    	cout<<nilai<<" bukan bilangan PRIMA."<<endl;
    }
    cout<<"================================";
    
    //No.4
    cout<<"\n\n-----BELAH KETUPAT-----";
    cout<<"\nTinggi belah ketuplak: ";
    cin>>t;
    //T=Tinggi Belah Ketuplak :v
    
    for(i=0; i<t; i++){
        for(j=0; j<(2*t); j++){
            if (i+j<=t-1)
                cout<<"*";
            else
                cout<<" ";
            if ((i+t)<=j)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
 
    for(i=0; i<t; i++){
        for(j=0; j<(2*t); j++){
            if (i>=j)
                cout<<"*";
            else
                cout<<" ";
            if (i>=(2*t-1)-j)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<"================================";

    return 0;
}
