#include "livraison.h"

Livraison::Livraison()
{

}

Livraison::Livraison(int qteLivree, QString numeroLivraison, QString dateLivraison, int idArticle, int idFournisseur)
{
    this->qteLivree = qteLivree;
    this->numeroLivraison = numeroLivraison;
    this->dateLivraison = dateLivraison;
    this->idArticle = idArticle;
    this->idFournisseur = idFournisseur;

}

int Livraison::GetQteLivree()
{
    return this->qteLivree;
}

QString Livraison::GetNumeroLivraison()
{
    return this->numeroLivraison;
}

QString Livraison::GetDateLivraison()
{
    return this->dateLivraison;
}

int Livraison::GetIdArticle()
{
    return this->idArticle;
}

int Livraison::GetIdFournisseur()
{
    return this->idFournisseur;
}
