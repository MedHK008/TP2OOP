#ifndef COMPANY_H
#define COMPANY_H


#include <memory>
#include <vector>
#include "Salarie.h"

class Company {
private:
    std::vector<std::unique_ptr<Salarie>> salaries;
    int nbsalaries = 0;
public:
    void affichersalaries() const;
    void ajouterSalarie(std::unique_ptr<Salarie> salarie);
    double calculerSalaireTotal() const;
    ~Company() = default;
};

#endif // COMPANY_H