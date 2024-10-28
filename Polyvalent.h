#ifndef POLYVALENT_H
#define POLYVALENT_H

#include "Commercial.h"
#include "Gestionnaire.h"

class Polyvalent : public Commercial, public Gestionnaire {
public:
    Polyvalent(const std::string& nom, double tauxHoraire, int heuresTravaillees, double commission, double ventesRealisees, double salaireFixe);
    double calculerSalaire() const override;
    void afficher() const override;
};

#endif // POLYVALENT_H