#ifndef PRODUIT_H
#define PRODUIT_H

#include <QString>


class Produit
{
public:
    Produit();
    Produit(QString codeA, QString designationA, QString poidsA, QString emplacementA);

    QString GetCodeArticle();
    QString GetDesignationArticle();
    QString GetPoidsArticle();
    QString GetEmplacementArticle();
    int GetId();

    void SetCodeArticle(QString codeA);
    void SetDesignationArticle(QString designationA);
    void SetPoidsArticle(QString poidsA);
    void SetEmplacementArticle(QString emplacementA);


private:
    int id;
    QString codeArticle;
    QString designationArticle;
    QString poidsArticle;
    QString emplacementArticle;
};

#endif // PRODUIT_H
