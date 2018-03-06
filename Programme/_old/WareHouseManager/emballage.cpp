#include "emballage.h"

Emballage::Emballage(QString typeEmballage, int hauteurEmballage, int largeurEmballage, int longueurEmballage)
{
    this->typeEmballage = typeEmballage;
    this->hauteurEmballage = hauteurEmballage;
    this->largeurEmballage = largeurEmballage;
    this->longueurEmballage = longueurEmballage;
}

QString Emballage::GetTypeEmballage()
{
    return this->typeEmballage;
}
int Emballage::GetHauteurEmballage()
{
    return this->hauteurEmballage;
}
int Emballage::GetLargeurEmballage()
{
    return this->largeurEmballage;
}
int Emballage::GetLongueurEmballage()
{
    return this->longueurEmballage;
}

void Emballage::SetTypeEmballage(QString typeEmballage)
{
    this->typeEmballage = typeEmballage;
}
void Emballage::SetHauteurEmballage(int hauteurEmballage)
{
    this->hauteurEmballage = hauteurEmballage;
}
void Emballage::SetLargeurEmballage(int largeurEmballage)
{
    this->largeurEmballage = largeurEmballage;
}
void Emballage::SetLongueurEmballage(int longueurEmballage)
{
    this->longueurEmballage = longueurEmballage;
}

