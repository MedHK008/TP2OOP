#include <iostream>
#include "Gestionnaire.h"

Gestionnaire::Gestionnaire(const std::string& nom, double salaireFixe,double tauxHoraire, int heuresTravaillees) : Employe(nom,tauxHoraire,heuresTravaillees), salaireFixe(salaireFixe) {}

double Gestionnaire::calculerSalaire() const{
    return salaireFixe*4+(tauxHoraire*heuresTravaillees);
}

void Gestionnaire::afficher() const {
    std::cout << "Gestionnaire: " << nom << std::endl;
    std::cout << "Taux horaire: " << tauxHoraire << std::endl;
    std::cout << "Heures travaillees: " << heuresTravaillees << std::endl;
    std::cout << "Salaire fixe: " << salaireFixe << std::endl;
    std::cout << "Salaire: " << calculerSalaire() << std::endl;
}