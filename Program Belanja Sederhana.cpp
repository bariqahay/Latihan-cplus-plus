#include <iostream>

using namespace std;

int main() {
    long int bukut, pensil, pulpen, penggaris, jawabm, jawabs, hasil, hasilakhir;
    hasilakhir = 0;
    bukut = 12000;
    pensil = 2000;
    pulpen = 3000;
    penggaris = 10000;

    cout << "Selamat Datang di Toko Kami" << endl;
    cout << "BUKU TULIS = 12000 '1'" << endl;
    cout << "PENSIL = 2000 '2'" << endl;
    cout << "PULPEN = 3000 '3'" << endl;
    cout << "PENGGARIS = 10000 '4'" << endl;
    cout << "Press Any Key To Continue";
    getchar();
    cin.ignore();

    char answer;

    do {
        cout << "Masukkan Kode Barang yang ingin anda beli? ";
        cin >> jawabm;
        switch (jawabm) {
        case 1:
            cout << "Berapa jumlahnya? ";
            cin >> jawabs;
            hasil = jawabs * 12000;
            hasilakhir += hasil;
            break;
        case 2:
            cout << "Berapa jumlahnya? ";
            cin >> jawabs;
            hasil = jawabs * 2000;
            hasilakhir += hasil;
            break;
        case 3:
            cout << "Berapa jumlahnya? ";
            cin >> jawabs;
            hasil = jawabs * 3000;
            hasilakhir += hasil;
            break;
        case 4:
            cout << "Berapa jumlahnya? ";
            cin >> jawabs;
            hasil = jawabs * 10000;
            hasilakhir += hasil;
            break;
        }
        cout << "Ada lagi? (Y/T)";
        cin >> answer;
    } while (answer == 'Y' || answer == 'y');

    if (hasilakhir > 500000) {
        hasilakhir = hasilakhir - (hasilakhir * 0.05); // Diskon 5% jika total lebih dari 500.000
    }

    cout << "Total yang harus dibayar adalah: " << hasilakhir;

    return 0;
}
