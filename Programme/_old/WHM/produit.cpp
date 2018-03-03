#include "produit.h"

Produit::Produit()
{

}

Produit::Produit(QString codeA, QString designationA, QString poidsA, QString emplacementA)
{
    this->codeArticle = codeA;
    this->designationArticle = designationA;
    this->poidsArticle = poidsA;
    this->emplacementArticle = emplacementA;
}

QString Produit::GetCodeArticle()
{
    return this->codeArticle;
}

QString Produit::GetDesignationArticle()
{
    return this->designationArticle;
}

QString Produit::GetPoidsArticle()
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

void Produit::SetCodeArticle(QString codeA)
{
    this->codeArticle = codeA;
}

void Produit::SetDesignationArticle(QString designationA)
{
    this->designationArticle = designationA;
}
void Produit::SetPoidsArticle(QString poidsA)
{
    this->poidsArticle = poidsA;
}
void Produit::SetEmplacementArticle(QString emplacementA)
{
    this->emplacementArticle = emplacementA;
}
