#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int a1, a2;
	char operasi;

	cout << "Program Calculator Sederhana" << endl;
	cout << "Masukkan Angka 1: ";
	cin >> a1;
	cout << "Masukkan Angka 2: ";
	cin >> a2;
	cout << "Pilih Operasi (+,-,*,/): ";
	cin >> operasi;
	if (operasi == '+') {
		cout << a1 + a2;
	}
	else if (operasi == '-') {
		cout << a1 - a2;
	}
	else if (operasi == '*') {
		cout << a1 * a2;
	}
	else if (operasi == '/') {
		cout << a1 / a2;
	}
	else {
		cout << "Operasi Tidak Ditemukan";
	}
	return 0;
}