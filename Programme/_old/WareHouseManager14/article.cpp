#include "article.h"

Article::Article()
{

}

Article::Article(QString codeA, QString designationA, int poidsA, QString emplacementA, QString emballageA)
{
    this->codeArticle = codeA;
    this->designationArticle = designationA;
    this->poidsArticle = poidsA;
    this->emplacementArticle = emplacementA;
    this->emballageArticle = emballageA;
}

QString Article::GetCodeArticle()
{
    return this->codeArticle;
}

QString Article::GetDesignationArticle()
{
    return this->designationArticle;
}

int Article::GetPoidsArticle()
{
    return this->poidsArticle;
}

QString Article::GetEmplacementArticle()
{
    return this->emplacementArticle;
}

int Article::GetIdArticle()
{
    return this->idArticle;
}

QString Article::GetEmballageArticle()
{
    return this->emballageArticle;
}

void Article::SetCodeArticle(QString codeA)
{
    this->codeArticle = codeA;
}

void Article::SetDesignationArticle(QString designationA)
{
    this->designationArticle = designationA;
}
void Article::SetPoidsArticle(int poidsA)
{
    this->poidsArticle = poidsA;
}
void Article::SetEmplacementArticle(QString emplacementA)
{
    this->emplacementArticle = emplacementA;
}
void Article::SetEmballageArticle(QString emballageA)
{
    this->emballageArticle = emballageA;
}
