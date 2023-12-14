#include <iostream>
using namespace std;

int pangkat(int x, int y);

int main() {
    int x, y;

    cout << "Masukkan nilai x: ";
    cin >> x;
    
    cout << "Masukkan nilai y: ";
    cin >> y;

    int hasil = pangkat(x, y);
    cout << "Hasil " << x << " dipangkatkan " << y << " adalah: " << hasil << endl;

    return 0;
}

int pangkat(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * pangkat(x, y - 1);
    	}
}
