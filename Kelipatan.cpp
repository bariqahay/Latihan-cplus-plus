#include <iostream>

using namespace std;
int main() {
	int a1, a2;
	cout << "Masukkan Bil 1: ";
	cin >> a1;
	cout << "Masukkan Bil 2: ";
	cin >> a2;
	if ((a2 % a1 == 0) || (a1 % a2 == 0)) {
		cout << "Kelipatan";
	}
	else {
		cout << "Bukan Kelipatan";
	}

}
