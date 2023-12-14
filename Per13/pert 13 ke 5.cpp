#include <iostream>
#define MAX 5
using namespace std;

struct TumpukanBuku{
    int antrian[MAX];
    int top;
}perpus;

void inisialisasi(){
    perpus.top = -1;
}

bool kondisiKosong(){
    return perpus.top == -1;
}

bool kondisiPenuh(){
    return perpus.top == MAX - 1;
}

void inputData(){
    if (kondisiPenuh()){
        cout<<"\nAntrian penuh"<<endl;
    }else{
        perpus.top++;
        cout<<"\nMasukkan Antrian = "; cin>>perpus.antrian[perpus.top];
        cout<<"Antrian "<<perpus.antrian[perpus.top]<<" Telah Masuk Ke Tumpukan Buku"<<endl;
    }
}

void hapusData(){
    if(kondisiKosong()){
        cout<<"\nAntrian Kosong\n"<<endl;
    }else{
        cout<<"\nAntrian "<<perpus.antrian[perpus.top]<<" Telah Di Hapus"<<endl;
        perpus.top--;
    }
}

void tampilData(){
    if(kondisiKosong()){
        cout<<"\nAntrian kosong";
    }else {
        cout<<"\nAntrian : ";
        for(int i=perpus.top; i>=0; i--)
        cout<<perpus.antrian[i]<<((i == 0) ? "" : ",");
    }
}

int main(){
    int pilihan;
    inisialisasi();

    do{
        tampilData();
        cout<<"\n1. Masukkan data\n"<<"2. Hapus Data\n"<<"3. Kelua\n"<<"Masukkan pilihan: ";
        cin>>pilihan;

        switch(pilihan){
            case 1:
            inputData();
            break;
            case 2:
            hapusData();
            break;
            default;
            cout<<"Pilihan tidak tersedia"<<endl;
            break;
        }
    }while(pilihan != 3);
}
