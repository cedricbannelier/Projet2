#include <iostream>

#include "article.h"
#include "utilisateur.h"

using namespace std;

int main()
{
    Article * monPremierArticle;
    monPremierArticle = new Article(251452, 50);

    cout << "Code produit : " << monPremierArticle->getCodeArticle() << endl;
    cout << "Poids : " << monPremierArticle->getPoids() << " Kilos" << endl;

    Utilisateur * logisticien;
    logisticien = new Utilisateur(2);

    return 0;
}
