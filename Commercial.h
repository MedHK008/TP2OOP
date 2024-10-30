#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Employe.h"

class Commercial : virtual public Employe {
protected:
    double commission;
    double ventesRealisees;

public:
    Commercial(const std::string& nom, double tauxHoraire, int heuresTravaillees, double commission, double ventesRealisees);
    double calculerSalaire() const override;
    void afficher() const override;
};

#endif // COMMERCIAL_H