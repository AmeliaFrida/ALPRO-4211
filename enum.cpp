#include <iostream>

enum Cuaca {
    Cerah,
    Berawan,
    Hujan,
    Mendung,
    Badai
};

int main() {
    Cuaca kondisiCuaca = Hujan;

    switch (kondisiCuaca) {
        case Cerah:
            std::cout << "Cuaca cerah" << std::endl;
            break;
        case Berawan:
            std::cout << "Cuaca berawan" << std::endl;
            break;
        case Hujan:
            std::cout << "Hujan" << std::endl;
            break;
        case Mendung:
            std::cout << "Cuaca mendung" << std::endl;
            break;
        case Badai:
            std::cout << "Badai" << std::endl;
            break;
        default:
            std::cout << "Kondisi cuaca tidak valid" << std::endl;
    }

    return 0;
}
