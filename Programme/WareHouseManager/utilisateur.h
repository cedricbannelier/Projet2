#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QString>

class Utilisateur
{
public:
    Utilisateur();
    Utilisateur(QString login, QString motDePasse);
    Utilisateur(QString login, QString motDePasse, int droit);

    QString GetLogin();
    QString GetMotDePasse();
    int GetDroit();
    int GetId();

    void SetLogin(QString login);
    void SetMotDePasse(QString motDePasse);
    void SetDroit(int droit);
    void SetId(int id);

private:
    int droit;
    QString login;
    QString motDePasse;
    int id;
};

#endif // UTILISATEUR_H
