#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan tiga angka: " << endl;
    cout << "Angka pertama: ";
    cin >> a;
    cout << "Angka kedua: ";
    cin >> b;
    cout << "Angka ketiga: ";
    cin >> c;

    int terbesar = a;

    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }

    cout << "Angka terbesar adalah: " << terbesar << endl;

    return 0;
}
