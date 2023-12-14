#include<iostream>

using namespace std;

int main() {
    int baris, kolom, i, j;

    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    int matriks1[baris][kolom];
    cout << "Masukkan elemen-elemen matriks pertama:\n";
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            cout << "Masukkan elemen matriks1[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriks1[i][j];
        }
    }

    int matriks2[baris][kolom];
    cout << "Masukkan elemen-elemen matriks kedua:\n";
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            cout << "Masukkan elemen matriks2[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriks2[i][j];
        }
    }
	
	cout<<"\nPerhitungan matriks antara\n";
	for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            cout <<matriks1[i][j]<< "  " <<matriks2[i][j]<<"  ";
        }
        cout << endl;
    }
	cout<<"\n-------------------------------\n";

	
    int hasilt[baris][kolom];
    int hasilk[baris][kolom];
    int hasilp[baris][kolom];
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            hasilt[i][j] = matriks1[i][j] + matriks2[i][j];
            hasilk[i][j] = matriks1[i][j] - matriks2[i][j];
            hasilp[i][j] = matriks1[i][j] * matriks2[i][j];
        }
    }
    
    cout << "Hasil penjumlahan matriks:\n";
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            cout << hasilt[i][j] << "  ";
        }
        cout << endl;
    }
	cout<<"-------------------------------\n";

    
    cout << "Hasil pengurangan matriks:\n";
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            cout << hasilk[i][j] << "  ";
        }
        cout << endl;
    }
    cout<<"-------------------------------\n";

    
    cout << "Hasil perkalian matriks:\n";
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            cout << hasilp[i][j] << "  ";
        }
        cout << endl;
    }
	cout<<"-------------------------------\n";


    return 0;
}
