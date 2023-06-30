#include <iostream>

const double PI = 3.14159;

typedef struct {
    double panjang;
    double lebar;
} PersegiPanjang;

typedef struct {
    double jariJari;
} Lingkaran;

typedef struct {
    double jariJari;
    double tinggi;
} Kerucut;

typedef struct {
    double jariJari;
} Bola;

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
    pp.panjang = 5.0;
    pp.lebar = 3.0;

    Lingkaran lingkaran;
    lingkaran.jariJari = 4.0;

    Kerucut kerucut;
    kerucut.jariJari = 2.0;
    kerucut.tinggi = 6.0;

    Bola bola;
    bola.jariJari = 3.0;

    double luasPersegiPanjang = hitungLuasPersegiPanjang(pp);
    double luasLingkaran = hitungLuasLingkaran(lingkaran);
    double volumeKerucut = hitungVolumeKerucut(kerucut);
    double volumeBola = hitungVolumeBola(bola);

    std::cout << "Luas Persegi Panjang: " << luasPersegiPanjang << std::endl;
    std::cout << "Luas Lingkaran: " << luasLingkaran << std::endl;
    std::cout << "Volume Kerucut: " << volumeKerucut << std::endl;
    std::cout << "Volume Bola: " << volumeBola << std::endl;

    return 0;
}
