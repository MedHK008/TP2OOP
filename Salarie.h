#ifndef SALARIE_H
#define SALARIE_H

#include <iostream>

class Salarie
{
protected:
    std::string nom;
public:
    Salarie(const std::string& nom);
    virtual double calculerSalaire() const = 0;
    virtual void afficher() const;
};



#endif // SALARIE_H