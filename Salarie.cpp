#include "Salarie.h"

Salarie::Salarie(const std::string& nom) : nom(nom) {
};

void Salarie::afficher() const {
    std::cout << "Nom: " << nom << std::endl;
};
