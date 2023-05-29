#include <iostream>
using namespace std;

int tambah(int a, int b, int c); 

int main() {
    cout << "Hello, world!" << endl;

    if (true) {
        cout << "Ini blok if" << endl;
    } else {
        cout << "Ini blok else" << endl;
    }

    int x = 5;
    cout << "Nilai x: " << x << endl;
    

    int hasil = tambah(3, 4, 5);
    cout << "Hasil penjumlahan: " << hasil << endl;
    

    switch (x) {
        case 5:
            cout << "Nilai x adalah 5" << endl;
            break;
        default:
            cout << "Nilai x bukan 5" << endl;
            break;
    }
    

    int* ptr;
    int y = 10;
    ptr = &y;
    cout << "Nilai yang ditunjuk oleh si ptr: " << *ptr << endl;

    int* dynamicPtr = new int;
    *dynamicPtr = 7;
    cout << "Nilai yang ditunjuk oleh si dynamicPtr: " << *dynamicPtr << endl;
    delete dynamicPtr;

    int arr[5];
    int* arrPtr = arr;
    arrPtr[5] = 10;
    cout << "Nilai arr di indeks ke 5: " << arr[5] << endl;

    return 0;
}

int tambah(int a, int b, int c) {
    return a + b + c;
}

//hehheheheh semangat