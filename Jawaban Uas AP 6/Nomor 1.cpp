#include <iostream>
using namespace std;

int ngitungTotal(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int arrayy[] = {5, 8, 12, 3, 7};
    int size = sizeof(arrayy) / sizeof(arrayy[0]);

    int total = ngitungTotal(arrayy, size);
    cout << "Total elemen didalam array: " << total << endl;

    return 0;
}
