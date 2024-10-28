#include <iostream>
#include "Employe.h"

Employe::Employe(const std::string& nom, double tauxHoraire, int heuresTravaillees) : nom(nom), tauxHoraire(tauxHoraire), heuresTravaillees(heuresTravaillees) {
    this->nom = nom;
    this->tauxHoraire = tauxHoraire;
    this->heuresTravaillees = heuresTravaillees;
}

void Employe::afficher() const {
};

double Employe::calculerSalaire() const {
    return tauxHoraire * heuresTravaillees;
};
