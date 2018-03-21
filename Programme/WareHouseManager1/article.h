#ifndef ARTICLE_H
#define ARTICLE_H

#include <QString>


class Article
{
public:

    //Constructeur vide
    Article();

    //Constructeur
    //Param : QString codeA
    Article(QString codeA, QString designationA, int poidsA, QString emplacementA, QString emballageA);

    //Getteur codeArticle
    QString GetCodeArticle();

    //Getteur designationArticle
    QString GetDesignationArticle();
    int GetPoidsArticle();
    QString GetEmplacementArticle();
    QString GetEmballageArticle();

    void SetCodeArticle(QString codeA);
    void SetDesignationArticle(QString designationA);
    void SetPoidsArticle(int poidsA);
    void SetEmplacementArticle(QString emplacementA);
    void SetEmballageArticle(QString emballageA);

private:
    QString codeArticle;
    QString designationArticle;
    int poidsArticle;
    QString emplacementArticle;
    QString emballageArticle;
};

#endif // ARTICLE_H
