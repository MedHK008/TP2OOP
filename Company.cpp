#include "Company.h"
#include <iostream>

void Company::afficherEmployes() const {
    std::cout << "Nombre d'employes: " << nbEmployes << std::endl;
    for (const auto& employe : employes) {
        employe->afficher();
        std::cout << std::endl;
    }
}

void Company::ajouterEmploye(std::unique_ptr<Employe> employe) {
    employes.push_back(std::move(employe));
    nbEmployes++;
}

double Company::calculerSalaireTotal() const {
    double total = 0;
    for (const auto& employe : employes) {
        total += employe->calculerSalaire();
    }
    return total;
}