#ifndef PRODUIT_H
#define PRODUIT_H

#include <QString>


class Produit
{
public:
    Produit();

    int id;
    QString codeArticle;
    QString designationArticle;
    float poidsArticle;
    QString emplacementArticle;
};

#endif // PRODUIT_H
