#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

main (){
	//clrscr();
	
	char kalimat[100];
	char kata[20];
	float angka,a;
	
	cout<<"Masukkan Kalimat: ";
	cin.getline (kalimat ,sizeof(kalimat));
	
	int x=strlen(kalimat);
	for(int i=x-1;i>=0;i--){
			cout<<kalimat[i];
	}
	
	getchar();
	return 0;
}
