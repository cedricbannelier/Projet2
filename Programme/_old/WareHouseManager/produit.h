#ifndef PRODUIT_H
#define PRODUIT_H

#include <QString>


class Produit
{
public:
    Produit();
    Produit(QString codeA, QString designationA, int poidsA, QString emplacementA, QString emballageA);

    QString GetCodeArticle();
    QString GetDesignationArticle();
    int GetPoidsArticle();
    QString GetEmplacementArticle();
    QString GetEmballageArticle();
    int GetId();

    void SetCodeArticle(QString codeA);
    void SetDesignationArticle(QString designationA);
    void SetPoidsArticle(int poidsA);
    void SetEmplacementArticle(QString emplacementA);
    void SetEmballageArticle(QString emballageA);

private:
    int id;
    QString codeArticle;
    QString designationArticle;
    int poidsArticle;
    QString emplacementArticle;
    QString emballageArticle;
};

#endif // PRODUIT_H
