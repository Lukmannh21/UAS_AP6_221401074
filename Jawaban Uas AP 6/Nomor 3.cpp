#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int usia;
    string jurusan;
};

int main() {
    Mahasiswa mhs1;
    mhs1.nama = "Ucok";
    mhs1.usia = 21;
    mhs1.jurusan = "Ilmu Komputer";

    Mahasiswa mhs2;
    mhs2.nama = "Agus";
    mhs2.usia = 24;
    mhs2.jurusan = "Teknologi Informasi";

    cout << "Data Mahasiswa 1:" << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Usia: " << mhs1.usia << " tahun" << endl;
    cout << "Jurusan: " << mhs1.jurusan << endl;
    cout << endl;

    cout << "Data Mahasiswa 2:" << endl;
    cout << "Nama: " << mhs2.nama << endl;
    cout << "Usia: " << mhs2.usia << " tahun" << endl;
    cout << "Jurusan: " << mhs2.jurusan << endl;
    cout << endl;

    return 0;
}
