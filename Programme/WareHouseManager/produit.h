#ifndef PRODUIT_H
#define PRODUIT_H

#include <QString>


class Produit
{
public:
    Produit();

    int id;
    QString nom;
    float prix;
    int qtevendue;
    QString libelle;
};

#endif // PRODUIT_H
