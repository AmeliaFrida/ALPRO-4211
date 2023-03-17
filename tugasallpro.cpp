#include <iostream>

using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int hitungJumlah(int arr[], int n) {
    int total = 0.0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    return total;
}

double hitungRata(int arr[], int n) {
    double total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    double rata = total / n;

    return rata;
}

int main() {
    int x,y,n;
    int arr[n];

    cout << "Fungsi Tambah "<<endl;
    cout << "Masukkan bilangan pertama: ";
    cin >> x;
    cout << "Masukkan bilangan kedua: ";
    cin >> y;
    int hasilTambah = tambah(x, y);
    cout << "Hasil penjumlahan: " << hasilTambah << endl;

    ///////////////////////////////////////////////////////////////
    cout << "\nFungsi Kurang "<<endl;
    cout << "Masukkan bilangan pertama: ";
    cin >> x;
    cout << "Masukkan bilangan kedua: ";
    cin >> y;
        int hasilKurang = kurang(x, y);
    cout << "Hasil pengurangan: " << hasilKurang << endl;



    ///////////////////////////////////////////////////////////////

    cout << "\nFungsi untuk menghitung jumblah nilai total dari sebuah array\n" << std::endl;
    cout<< std::endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    int total = hitungJumlah(arr, n);

    cout << "Total nilai dari array adalah: " << total << endl;

    ////////////////////////////////////////////////////////////

    cout << "\nFungsi untuk menghitung rata-rata dari sebuah array\n " << std::endl;
    cout<< std::endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    double rata = hitungRata(arr, n);

    cout << "Rata-rata dari array adalah: " << rata << endl;

    return 0;

}
