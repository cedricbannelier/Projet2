#ifndef PRODUIT_H
#define PRODUIT_H

#include <QString>


class Produit
{
public:
    Produit();
    Produit(QString codeA, QString designationA, QString poidsA, QString emplacementA, QString emballageA);

    QString GetCodeArticle();
    QString GetDesignationArticle();
    QString GetPoidsArticle();
    QString GetEmplacementArticle();
    QString GetEmballageArticle();
    int GetId();

    void SetCodeArticle(QString codeA);
    void SetDesignationArticle(QString designationA);
    void SetPoidsArticle(QString poidsA);
    void SetEmplacementArticle(QString emplacementA);
    void SetEmballageArticle(QString emballageA);

private:
    int id;
    QString codeArticle;
    QString designationArticle;
    QString poidsArticle;
    QString emplacementArticle;
    QString emballageArticle;
};

#endif // PRODUIT_H
