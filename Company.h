#ifndef COMPANY_H
#define COMPANY_H


#include <memory>
#include <vector>
#include "Employe.h"

class Company {
private:
    std::vector<std::unique_ptr<Employe>> employes;
    int nbEmployes = 0;
public:
    void afficherEmployes() const;
    void ajouterEmploye(std::unique_ptr<Employe> employe);
    double calculerSalaireTotal() const;
    ~Company() = default;
};

#endif // COMPANY_H