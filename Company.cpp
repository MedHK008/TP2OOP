#include "Company.h"
#include <iostream>

void Company::affichersalaries() const {
    std::cout << "Nombre d'salaries: " << nbsalaries << std::endl;
    for (const auto& employe : salaries) {
        employe->afficher();
        std::cout << std::endl;
    }
}

void Company::ajouterSalarie(std::unique_ptr<Salarie> employe) {
    salaries.push_back(std::move(employe));
    nbsalaries++;
}

double Company::calculerSalaireTotal() const {
    double total = 0;
    for (const auto& employe : salaries) {
        total += employe->calculerSalaire();
    }
    return total;
}