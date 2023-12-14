#include <iostream>
using namespace std;

int main (){

	int  m1[5][5], m2[5][5], m3[5][5];
      int  i, j, r;
      
      cout<<"Masukkan jumlah baris(max 5):";
      cin>>r;
      
      cout<<"\nPenjualan ke-1:\n";
	  for(i=0;i<r;i++)
	  {
	  
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\npenjualan1["<<i<<"]["<<j<<"]=  ";
	  		cin>>m1[i][j];
		}
	  } 
	  
	  cout<<"\nPenjualan ke-2:\n";
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\npenjualan2["<<i<<"]["<<j<<"]=  ";
	  		cin>>m2[i][j];
		}
	  } 
	  
		cout<<"\nPenjualan ke-3:\n";
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\npenjualan3["<<i<<"]["<<j<<"]=  ";
	  		cin>>m3[i][j];
		}
	  } 
	  
	  	cout<<"\nHASIL PENJUALAN";
		cout<<"\n==============================================";
	  	cout<<"\nNo \tNama Barang \t2001 \t2002 \t2003\n";
	  	cout<<"==============================================\n";
			cout<<"1"<<"\tPrinter\t";
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\t"<<m1[i][j];
		}

	  } 
	  cout<<endl;
	  
			cout<<"2"<<"\tMouse\t";
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\t"<<m2[i][j];
		}

	  } 
	  cout<<endl;
	  
			cout<<"3"<<"\tKabel Data";
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\t"<<m3[i][j];
		}

	  } 
		cout<<"\n==============================================";

} 
	
