#include <iostream>

const double PI = 3.14;

struct PersegiPanjang {
    double panjang;
    double lebar;
};

struct Lingkaran {
    double jariJari;
};

struct Kerucut {
    double jariJari;
    double tinggi;
};

struct Bola {
    double jariJari;
};

double hitungLuasPersegiPanjang(const PersegiPanjang& pp) {
    return pp.panjang * pp.lebar;
}

double hitungLuasLingkaran(const Lingkaran& lingkaran) {
    return PI * lingkaran.jariJari * lingkaran.jariJari;
}

double hitungVolumeKerucut(const Kerucut& kerucut) {
    return (1.0 / 3.0) * PI * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

double hitungVolumeBola(const Bola& bola) {
    return (4.0 / 3.0) * PI * bola.jariJari * bola.jariJari * bola.jariJari;
}

int main() {
    PersegiPanjang pp;
    Lingkaran lingkaran;
    Kerucut kerucut;
    Bola bola;

    std::cout << "Masukkan panjang persegi panjang: ";
    std::cin >> pp.panjang;

    std::cout << "Masukkan lebar persegi panjang: ";
    std::cin >> pp.lebar;

    std::cout << "Masukkan jari-jari lingkaran: ";
    std::cin >> lingkaran.jariJari;

    std::cout << "Masukkan jari-jari kerucut: ";
    std::cin >> kerucut.jariJari;

    std::cout << "Masukkan tinggi kerucut: ";
    std::cin >> kerucut.tinggi;

    std::cout << "Masukkan jari-jari bola: ";
    std::cin >> bola.jariJari;

    double luasPersegiPanjang = hitungLuasPersegiPanjang(pp);
    std::cout << "Luas Persegi Panjang: " << luasPersegiPanjang << std::endl;

    double luasLingkaran = hitungLuasLingkaran(lingkaran);
    std::cout << "Luas Lingkaran: " << luasLingkaran << std::endl;

    double volumeKerucut = hitungVolumeKerucut(kerucut);
    std::cout << "Volume Kerucut: " << volumeKerucut << std::endl;

    double volumeBola = hitungVolumeBola(bola);
    std::cout << "Volume Bola: " << volumeBola << std::endl;

    return 0;
}

