#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <QString>


class Fournisseur
{
public:
    Fournisseur(QString nomFournisseur);

    int GetIdFournisseur();
    QString GetNomFournisseur();
    QString GetReferenceFournisseur();

    void SetNomFournisseur(QString nomFournisseur);
    void SetReferenceFournisseur(QString referenceFournisseur);

private:
    int idFournisseur;
    QString nomFournisseur;
    QString referenceFournisseur;

};

#endif // FOURNISSEUR_H
