#include "fournisseur.h"

Fournisseur::Fournisseur(QString nomFournisseur)
{
    this->nomFournisseur = nomFournisseur;
}

int Fournisseur::GetIdFournisseur()
{
    return this->idFournisseur;
}

QString Fournisseur::GetNomFournisseur()
{
    return this->nomFournisseur;
}

QString Fournisseur::GetReferenceFournisseur()
{
    return this->referenceFournisseur;
}

void Fournisseur::SetNomFournisseur(QString nomFournisseur)
{
    this->nomFournisseur = nomFournisseur;
}
void Fournisseur::SetReferenceFournisseur(QString referenceFournisseur)
{
    this->referenceFournisseur = referenceFournisseur;
}

