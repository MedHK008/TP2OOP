#include "Polyvalent.h"


Polyvalent::Polyvalent(const std::string& nomParam, double tauxHoraire, int heuresTravaillees, double commission, double ventesRealisees, double salaireFixe)
        : Employe(nomParam,tauxHoraire,heuresTravaillees), Commercial(nomParam,tauxHoraire,heuresTravaillees,commission,ventesRealisees), Gestionnaire(nomParam,salaireFixe,tauxHoraire,heuresTravaillees) {}

double Polyvalent::calculerSalaire() const {
    return Commercial::calculerSalaire() + Gestionnaire::calculerSalaire();
}

void Polyvalent::afficher() const {
    Commercial::afficher();
    Gestionnaire::afficher();
}