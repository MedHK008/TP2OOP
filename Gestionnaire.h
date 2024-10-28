#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H

#include "Employe.h"

class Gestionnaire : virtual public Employe {
private:
    double salaireFixe;

public:
    Gestionnaire(const std::string& nom, double salaireFixe,double tauxHoraire, int heuresTravaillees);
    double calculerSalaire() const override;
    void afficher() const override;
};

#endif // GESTIONNAIRE_H