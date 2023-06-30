#include <iostream>
#include <string>

struct Mahasiswa {
    std::string nim;
    std::string nama;
    std::string jurusan;
    int tahunLulus;
};

void cetakDataStatis(const Mahasiswa* mahasiswaArray, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "NIM: " << mahasiswaArray[i].nim << std::endl;
        std::cout << "Nama: " << mahasiswaArray[i].nama << std::endl;
        std::cout << "Jurusan: " << mahasiswaArray[i].jurusan << std::endl;
        std::cout << "Tahun Lulus: " << mahasiswaArray[i].tahunLulus << std::endl;
        std::cout << std::endl;
    }
}

void cetakDataDinamis(const Mahasiswa* mahasiswaArray, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "NIM: " << mahasiswaArray[i].nim << std::endl;
        std::cout << "Nama: " << mahasiswaArray[i].nama << std::endl;
        std::cout << "Jurusan: " << mahasiswaArray[i].jurusan << std::endl;
        std::cout << "Tahun Lulus: " << mahasiswaArray[i].tahunLulus << std::endl;
        std::cout << std::endl;
    }
}

int main() {
    // Array statis
    Mahasiswa mahasiswaArrayStatis[4] = {
        {"A11.2020.0134", "Andi", "Broadcasting", 2023},
        {"A11.2010.01234", "Budi", "Sistem Informasi", 2013},
        {"A11.2000.01234", "Ali", "DKV", 2003},
        {"A11.1990.01234", "Siti", "Kesehatan", 1993}
    };

    std::cout << "Data Mahasiswa (Array Statis):" << std::endl;
    cetakDataStatis(mahasiswaArrayStatis, 4);

    // Array dinamis
    int sizeDinamis = 4;
    Mahasiswa* mahasiswaArrayDinamis = new Mahasiswa[sizeDinamis];
    mahasiswaArrayDinamis[0] = {"A11.2020.0134", "Andi", "Broadcasting", 2023};
    mahasiswaArrayDinamis[1] = {"A11.2010.01234", "Budi", "Sistem Informasi", 2013};
    mahasiswaArrayDinamis[2] = {"A11.2000.01234", "Ali", "DKV", 2003};
    mahasiswaArrayDinamis[3] = {"A11.1990.01234", "Siti", "Kesehatan", 1993};

    std::cout << "Data Mahasiswa (Array Dinamis):" << std::endl;
    cetakDataDinamis(mahasiswaArrayDinamis, sizeDinamis);

    delete[] mahasiswaArrayDinamis;

    return 0;
}
