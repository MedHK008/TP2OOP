#include <iostream>
#include "Employe.h"

Employe::Employe(const std::string& nom, double tauxHoraire, int heuresTravaillees) : Salarie(nom), tauxHoraire(tauxHoraire), heuresTravaillees(heuresTravaillees) {
};

void Employe::afficher() const {
};

double Employe::calculerSalaire() const {
    return tauxHoraire * heuresTravaillees;
};
