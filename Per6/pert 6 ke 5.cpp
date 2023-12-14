#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char EXIT_SUCCESS;
	
 ofstream myfile;
 myfile.open("TEST.txt", ios::app);
 cout<<"OPERASI FILE OFSTREAM"<<endl;
 cout<<"--------------"<<endl;
 if(!myfile.fail())
 {
 myfile<<"Belajar OPERASI FILE OFSTREAM"<<endl;
 myfile.close();
 cout<<"Text telah ditulis ke dalam File"<<endl;
 }else{
 cout<<"File tidak ditemukan"<<endl;
 }
 getchar();
 return EXIT_SUCCESS;
}

