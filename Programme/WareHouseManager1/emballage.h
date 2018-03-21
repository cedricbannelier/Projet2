#ifndef EMBALLAGE_H
#define EMBALLAGE_H
#include <QString>


class Emballage
{
public:
    Emballage();
    Emballage(QString typeEmballage, int hauteurEmballage, int largeurEmballage, int longueurEmballage);

    QString GetTypeEmballage();

    int GetHauteurEmballage();
    int GetLargeurEmballage();
    int GetLongueurEmballage();

    void SetTypeEmballage(QString typeEmballage);
    void SetHauteurEmballage(int hauteurEmballage);
    void SetLargeurEmballage(int largeurEmballage);
    void SetLongueurEmballage(int longueurEmballage);


private:
    QString typeEmballage;

    int hauteurEmballage;
    int largeurEmballage;
    int longueurEmballage;



};

#endif // EMBALLAGE_H
