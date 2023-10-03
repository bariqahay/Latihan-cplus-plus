#include <iostream>
using namespace std;

int main() {
    int nilai_ujian[10] {60 ,65, 70, 70, 75, 80, 85, 90, 95, 100};
    cout << nilai_ujian[3] << endl;
    nilai_ujian[4] = 20;
    cout << nilai_ujian[4] << endl;

    cout << "Masukkan nilai ujian baru: ";
    cin >> nilai_ujian[0];
    cin >> nilai_ujian[1];
    cin >> nilai_ujian[2];
    cin >> nilai_ujian[3];
    cin >> nilai_ujian[4];
    cin >> nilai_ujian[5];
    cin >> nilai_ujian[6];
    cin >> nilai_ujian[7];
    cin >> nilai_ujian[8];
    cin >> nilai_ujian[9];

    cout << "Nilai ujian baru adalah: " << endl;
    cout << nilai_ujian[0] << endl;
    cout << nilai_ujian[1] << endl;
    cout << nilai_ujian[2] << endl;
    cout << nilai_ujian[3] << endl;
    cout << nilai_ujian[4] << endl;
    cout << nilai_ujian[5] << endl;
    cout << nilai_ujian[6] << endl;
    cout << nilai_ujian[7] << endl;
    cout << nilai_ujian[8] << endl;
    cout << nilai_ujian[9] << endl;

}