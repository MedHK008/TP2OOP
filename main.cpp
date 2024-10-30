#include <iostream>
#include <memory>
#include <vector>
#include "Commercial.h"
#include "Gestionnaire.h"
#include "Company.h"
#include "Polyvalent.h"




int main() 
{
    Company* company = new Company();

    Polyvalent* polyvalent = new Polyvalent("Polyvalent", 100, 140, 0.1, 1000, 2000);
    std::cout << "Salaire Polyvalent: " << polyvalent->calculerSalaire() << std::endl;

    company->ajouterSalarie(std::unique_ptr<Polyvalent>(polyvalent));
    std::cout << "POlyvalent added to the company" << std::endl;
    
    company->ajouterSalarie(std::make_unique<Commercial>("HERAK", 100, 140, 0.1, 1000));
    company->ajouterSalarie(std::make_unique<Gestionnaire>("CHROQUI", 2000, 10, 40));
    company->ajouterSalarie(std::make_unique<Commercial>("MOUJAHID", 10, 40, 0.1, 1000));
    
    company->affichersalaries();
    
    std::cout << "Salaire total: " << company->calculerSalaireTotal() << std::endl;
    return 0;
}