#include "produit.h"

Produit::Produit()
{

}

Produit::Produit(QString codeA, QString designationA, int poidsA, QString emplacementA, QString emballageA)
{
    this->codeArticle = codeA;
    this->designationArticle = designationA;
    this->poidsArticle = poidsA;
    this->emplacementArticle = emplacementA;
    this->emballageArticle = emballageA;
}

QString Produit::GetCodeArticle()
{
    return this->codeArticle;
}

QString Produit::GetDesignationArticle()
{
    return this->designationArticle;
}

int Produit::GetPoidsArticle()
{
    return this->poidsArticle;
}

QString Produit::GetEmplacementArticle()
{
    return this->emplacementArticle;
}

int Produit::GetId()
{
    return this->id;
}

QString Produit::GetEmballageArticle()
{
    return this->emballageArticle;
}

void Produit::SetCodeArticle(QString codeA)
{
    this->codeArticle = codeA;
}

void Produit::SetDesignationArticle(QString designationA)
{
    this->designationArticle = designationA;
}
void Produit::SetPoidsArticle(int poidsA)
{
    this->poidsArticle = poidsA;
}
void Produit::SetEmplacementArticle(QString emplacementA)
{
    this->emplacementArticle = emplacementA;
}
void Produit::SetEmballageArticle(QString emballageA)
{
    this->emballageArticle = emballageA;
}
