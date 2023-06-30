#include <iostream>
#include <string>

struct Sepeda {
    std::string merk;
    std::string type;
    int tahun;
    std::string harga;
};

int main() {
    Sepeda sepeda;

    Sepeda* pointerSepeda = &sepeda;

    // Mengisi nilai member menggunakan pointer
    pointerSepeda->merk = "Polygon";
    pointerSepeda->type = "Sepeda Gunung";
    pointerSepeda->tahun = 2013;
    pointerSepeda->harga = "2.000.000";

    // Mengakses dan mencetak nilai member menggunakan pointer
    std::cout << "Merk: " << pointerSepeda->merk << std::endl;
    std::cout << "Type: " << pointerSepeda->type << std::endl;
    std::cout << "Tahun: " << pointerSepeda->tahun << std::endl;
    std::cout << "Harga: " << pointerSepeda->harga << std::endl;

    return 0;
}
