#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <string>
#include "Salarie.h"

class Employe : public Salarie {
protected:
    double tauxHoraire;
    int heuresTravaillees;
public:
    Employe(const std::string& nom, double tauxHoraire, int heuresTravaillees);
    virtual double calculerSalaire() const;
    virtual void afficher() const ;
};

#endif // EMPLOYE_H