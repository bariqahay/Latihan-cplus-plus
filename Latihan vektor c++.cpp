#include <iostream>
#include <vector>

using namespace std;

int main() {

vector <int> vector1;
vector <int> vector2; 

vector1.push_back(10); //menambahkan elemen 10 ke vector1
vector1.push_back(20); //menambahkan elemen 20 ke vector1

cout << "elemennya " << vector1.at(0) << " and " << vector1.at(1) << " size is " << vector1.size() << endl; //display the elements in vector1 using the at() method as well as as its size using the size method

vector2.push_back(100); //menambahkan elemen 100 ke vector2
vector2.push_back(200); //menambakah elemen 200 ke vector2

cout << "elemennya " << vector2.at(0) << " and " << vector2.at(1) << " size is " << vector2.size() << endl; //display the elements in vector2 using the at() method as well as as its size using the size method

vector <vector<int>> vector_2d; //vector 2 dimensi

vector_2d.push_back(vector1); //menambahkan elemen vector 1 ke vector2d
vector_2d.push_back(vector2); //menambahkan elemen vector 2 ke vector2d

cout << vector_2d.at(0).at(0) << vector_2d.at(0).at(1) << endl; //menampilkan elemen vector2d pada 0,0 dan 0,1
cout << vector_2d.at(1).at(1) << vector_2d.at(1).at(0) << endl; //menampilkan elemen vector2d pada 1,1 dan 1,0
/*Mengapa hanya sampai 0 dan 1? karena elemen pada vector 1 dan 2 hanya berjumlah 2, jadi masing" mempunyai index 0 dan 1.*/
vector1.at(0) = 1000; //mengubah indeks 0 vektor 1 ke 1000
/* disini hasil pada vector2d tidak terpengaruh karena vector2d hanya menampilkan yang sudah ditambahkan pada dia sebelumnya.*/
cout << vector_2d.at(0).at(0) << vector_2d.at(0).at(1) << endl; 
cout << vector_2d.at(1).at(1) << vector_2d.at(1).at(0) << endl;
cout << vector1.at(0) << endl; //menampilkan 1000
cout << vector1.at(1) << endl; //menampilkan 20

return 0;
}




