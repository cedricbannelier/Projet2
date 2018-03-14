#ifndef ARTICLE_H
#define ARTICLE_H

#include <QString>


class Article
{
public:
    Article();
    Article(QString codeA, QString designationA, int poidsA, QString emplacementA, QString emballageA);

    int GetIdArticle();
    QString GetCodeArticle();
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
    int idArticle;
    QString codeArticle;
    QString designationArticle;
    int poidsArticle;
    QString emplacementArticle;
    QString emballageArticle;
};

#endif // ARTICLE_H
