#include <iostream>
using namespace std;

const int maxx = 10;

struct Data {
    int id;
    string name;
    int age;
};

void tambahData(Data data[], int& size) {
    if (size == maxx) {
        cout << "Data penuh gk bisa nambah data baru." << endl;
        return;
    }

    Data newData;
    cout << "Masukkan ID: ";
    cin >> newData.id;
    cout << "Masukkan Nama: ";
    cin >> newData.name;
    cout << "Masukkan Umur: ";
    cin >> newData.age;

    data[size] = newData;
    size++;

    cout << "data sukses ditambahkan." << endl;
}

void tampilkanData(const Data data[], int size) {
    if (size == 0) {
        cout << "data kosong." << endl;
        return;
    }

    cout << "Data: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "ID: " << data[i].id << endl;
        cout << "Nama: " << data[i].name << endl;
        cout << "Umur: " << data[i].age << endl;
        cout << endl;
    }
}

void hapusData(Data data[], int& size) {
    if (size == 0) {
        cout << "data kosong." << endl;
        return;
    }

    int id;
    cout << "Masukkan ID data yang ingin dihapus: ";
    cin >> id;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (data[i].id == id) {
            for (int j = i; j < size - 1; j++) {
                data[j] = data[j + 1];
            }
            size--;
            found = true;
            cout << "Data berhasil dihapus." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Data dengan ID " << id << " tidak ditemukan." << endl;
    }
}

int main() {
    Data data[maxx];
    int size = 0;
    int pilih;

    do {
        cout << "=== Program CRUD Data ===" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                tambahData(data, size);
                break;
            case 2:
                tampilkanData(data, size);
                break;
            case 3:
                hapusData(data, size);
                break;
            case 4:
                cout << "Terima kasih,,,,,, Program selesai" << endl;
                break;
            default:
                cout << "Pilihan gk valid" << endl;
                break;
        }

        cout << endl;
    } while (pilih != 4);

    return 0;
}
