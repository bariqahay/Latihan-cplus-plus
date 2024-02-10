#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int batas, i, a, b;

	cin >> batas;
	a = 0;
	b = 0;
	i = batas;
	do {
		
		--i;
		if ((i % 3 == 0) && (i % 2 == 1)) {
			a = a + 1;
			cout << i << " ";
			b = b + i;
		}
	} while (i-1 > 0);
	cout << endl;
	cout << a;
	cout << endl;
	cout << b;

	return 0;
}