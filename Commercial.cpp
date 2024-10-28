 #include <iostream>
 #include "Commercial.h"


Commercial::Commercial(const std::string& nomParam, double tauxHoraireParam, int heuresTravail, double commission, double ventesRealisees)
        : Employe(nomParam, tauxHoraireParam, heuresTravail),
          commission(commission), ventesRealisees(ventesRealisees) {}

double Commercial::calculerSalaire() const {
    return (tauxHoraire * heuresTravaillees) + (commission * ventesRealisees);
}

void Commercial::afficher() const {
    std::cout << "Commercial: " << nom << std::endl;
    std::cout << "Taux horaire: " << tauxHoraire << std::endl;
    std::cout << "Heures travaillees: " << heuresTravaillees << std::endl;
    std::cout << "Commission: " << commission << std::endl;
    std::cout << "Ventes realisees: " << ventesRealisees << std::endl;
    std::cout << "Salaire: " << calculerSalaire() << std::endl;
}