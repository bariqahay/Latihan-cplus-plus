#include <iostream>

using namespace std;
int main() {
	int sukuke, jderet;
	jderet = 5;

	cout << "Masukkan suku keberapa: ";
	cin >> sukuke;

	for (int i = 1; i <= sukuke; ++i) {

		cout << jderet << " ";
		jderet = jderet + 10;
	}

	cout << " SUKU KE " << sukuke << " adalah " << jderet - 10 << endl;
	cout << " JUMLAH: " << jderet;

	return 0;
}