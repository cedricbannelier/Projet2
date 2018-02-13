#include "article.h"

Article::Article()
{
    //ctor
}
Article::Article(int codeArticle, int poids)
{
    //ctor
    this->codeArticle = codeArticle;
    this->poids = poids;
}
Article::~Article()
{
    //dtor
}

int Article::getCodeArticle()
{
    return codeArticle;
}

int Article::getPoids()
{
    return poids;
}
