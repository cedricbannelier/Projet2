#include "Utilisateur.h"

Utilisateur::Utilisateur()
{

}

Utilisateur::Utilisateur(QString login, QString motDePasse)
{
    this->login = login;
    this->motDePasse = motDePasse;

}

Utilisateur::Utilisateur(QString login, QString motDePasse, int droit)
{
    this->login = login;
    this->motDePasse = motDePasse;
    this->droit = droit;
}

QString Utilisateur::GetLogin()
{
    return this->login;
}

QString Utilisateur::GetMotDePasse()
{
    return this->motDePasse;
}

int Utilisateur::GetDroit()
{
    return this->droit;
}
int Utilisateur::GetId()
{
    return this->id;
}

void Utilisateur::SetLogin(QString login)
{
    this->login = login;
}

void Utilisateur::SetMotDePasse(QString motDePasse)
{
    this->motDePasse = motDePasse;
}

void Utilisateur::SetDroit(int droit)
{
    this->droit = droit;
}

void Utilisateur::SetId(int id)
{
    this->id = id;
}
