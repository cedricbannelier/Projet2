#ifndef PRODUIT_H
#define PRODUIT_H

#include <QString>


class Produit
{
public:
    Produit();
    Produit(QString codeA, QString designationA, QString poidsA, QString emplacementA, int emballageA);

    QString GetCodeArticle();
    QString GetDesignationArticle();
    QString GetPoidsArticle();
    QString GetEmplacementArticle();
    int GetEmballage();
    int GetId();

    void SetCodeArticle(QString codeA);
    void SetDesignationArticle(QString designationA);
    void SetPoidsArticle(QString poidsA);
    void SetEmplacementArticle(QString emplacementA);
    void SetEmballage(int emballageA);

private:
    int id;
    QString codeArticle;
    QString designationArticle;
    QString poidsArticle;
    QString emplacementArticle;
    int emballage;
};

#endif // PRODUIT_H
