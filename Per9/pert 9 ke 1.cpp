#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    int* ptr1 = &bilangan1;
    int* ptr2 = &bilangan2;

    if (*ptr1 % 2 == 0) {
        cout << *ptr1 << " genap.\n";
    } else {
        cout << *ptr1 << " ganjil.\n";
    }

    if (*ptr2 % 2 == 0) {
        cout << *ptr2 << " genap.\n";
    } else {
        cout << *ptr2 << " ganjil.\n";
    }

    return 0;
}
