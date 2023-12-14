#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

main(){
	
	int a, b, i, n, bil;
	int t1=0, t2=0, ganjil=1, genap=2, x=3, y=2, z=1;
	char lagi;
	
	cout<<"==========No.1==========";
	atas:
		
		cout<<"\nMasukkan Bilangan= ";
		cin>>a;
		
		b=a%2;
		
			cout<<"Nilai "<<a<<"%2"<<" adalah = "<<b;
			cout<<"\n\nIngin Hitung Lagi [Y/T]: ";
			
			lagi=getche();
			if(lagi=='Y' || lagi=='y')
			goto atas;
			if(lagi=='T'||lagi=='t');
			cout<<"\nBye!";
			
			cout<<"\n\n==========No.2==========";
			cout<<"\nMasukkan nilai= ";
			cin>>n;
			
			for(i=0; i<n; i++){
				cout<<" + "<<ganjil;
				t1+=ganjil;
				ganjil+=2;
			}
			
			cout<<"\nTotal dari 10 deret ganjil= "<<t1<<endl;
			
			cout<<"\n==========No.3==========";
			cout<<"\nMasukkan nilai= ";
			cin>>n;
			
			for(i=0; i<n; i++){
				cout<<" + "<<genap;
				t2+=genap;
				genap+=2;
			}
			
			cout<<"\nTotal dari 10 deret genap= "<<t2<<endl;
			cout<<endl;
			
			cout<<"==========No.4==========";
			cout<<"\nBil-A | Bil-B | Bil-C\n";
			cout<<"-----------------------";
			
			for(bil=1; bil<=10; bil++){
				x+=y;
				y+=z;
				z+=2;
				cout<<"\n"<<x<<" \t"<<y<<" \t"<<z;
				if(z==13)
				break;
			}
			getche();
			
	getchar(); 
	return 0;
}
