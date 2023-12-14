#include <iostream>
#define MAX 3
using namespace std;

struct StackGunadi{
    int antrian[MAX];
    int top;
}stack;

void inisialisasi(){
    stack.top = -1;
}

bool kondisiKosong(){
    return stack.top == -1;
}

bool kondisiPenuh(){
    return stack.top == MAX - 1;
}

void inputData(){
    if (kondisiPenuh()){
        cout<<"\nStack penuh"<<endl;
    }else{
        stack.top++;
        cout<<"\nInput nilai yang akan ditambahkan ke dalam stack = "; 
		cin>>stack.antrian[stack.top];
        cout<<"Nilai "<<stack.antrian[stack.top] << " Telah Masuk Ke Stack";
    }
}

void hapusData(){
    if(kondisiKosong()){
        cout<<"\nStack kosong\n"<<endl;
    }else{
        cout<<"\nNilai "<<stack.antrian[stack.top] << " Telah Di Hapus";
        stack.top--;
    }
}

void tampilData(){
    if(kondisiKosong()){
        cout<<"\nStack kosong";
    }else {
        cout<<"\nNilai : ";
        for(int i=stack.top; i>=0; i--)
        cout<<stack.antrian[i]<<((i == 0) ? "" : ",");
    }
}

int main(){
    int pilihan;
    inisialisasi();

    do{
        tampilData();
        cout<<"\n\n**Stack Angka guntur, adi**";
		cout<<"\nKlik 1 untuk melihat stack\n"<<"Klik 2 untuk menambah stack\n"<<"Klik 3 untuk mengurangi stack\n"<<"Klik 0 untuk keluar\n"<<"Silahkan input : ";
        cin>>pilihan;

        switch(pilihan){
            case 1:
            tampilData();
            break;
            case 2:
            inputData();
            break;
            case 3:
            hapusData();
            break;
            default:
            cout<<"Pilihan tidak tersedia"<<endl;
            break;
        }
    }while(pilihan != 0);
}
