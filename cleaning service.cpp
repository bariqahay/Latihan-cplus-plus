#include <iostream>

using namespace std;

int main() {

    cout << "Selamat datang di cleaning service Rifki" << endl;
    cout << "-----------------------------------------" << endl;
    int ruangan_kecil;
    int ruangan_besar;

    cout << "Berapa banyak ruangan kecil yang ingin anda bersihkan: ";
    cin >> ruangan_kecil;
    cout << "Berapa banyak ruangan besar yang ingin anda bersihkan: ";
    cin >> ruangan_besar;

    cout << "Estimate for carpet cleaning service" << endl;
    
    const double harga_ruangk {25};
    const double harga_ruangb {35};
    double harga_total = (ruangan_kecil * harga_ruangk) + (ruangan_besar * harga_ruangb);
    const double pajak {0.06};
    double pjk = harga_total * pajak;

    cout << "Number of ruangan kecil: " << ruangan_kecil << endl;
    cout << "Number of ruangan besar: " << ruangan_besar << endl;
    cout << "Total: $" << harga_total << endl;
    cout << "Pajak: $" << pjk << endl;
    cout << "------------------------" << endl;
    cout << "Total akhir: $" << harga_total + pjk << endl;

    return 0; 
}