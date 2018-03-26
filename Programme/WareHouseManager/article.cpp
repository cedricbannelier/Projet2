#include "article.h"

/**
 * @brief Article::Article
 */
Article::Article()
{

}

/**
 * @brief Article::Article
 * @param codeArticle
 * @param designationArticle
 * @param poidsArticle
 * @param emplacementArticle
 * @param emballageArticle
 */
Article::Article(QString codeArticle, QString designationArticle, int poidsArticle, QString emplacementArticle, QString emballageArticle)
{
    this->codeArticle = codeArticle;
    this->designationArticle = designationArticle;
    this->poidsArticle = poidsArticle;
    this->emplacementArticle = emplacementArticle;
    this->emballageArticle = emballageArticle;
}

/**
 * @brief Article::GetCodeArticle
 * @return
 */
QString Article::GetCodeArticle()
{
    return this->codeArticle;
}

/**
 * @brief Article::GetDesignationArticle
 * @return
 */

QString Article::GetDesignationArticle()
{
    return this->designationArticle;
}

/**
 * @brief Article::GetPoidsArticle
 * @return
 */

int Article::GetPoidsArticle()
{
    return this->poidsArticle;
}
/**
 * @brief Article::GetEmplacementArticle
 * @return
 */

QString Article::GetEmplacementArticle()
{
    return this->emplacementArticle;
}

/**
 * @brief Article::GetEmballageArticle
 * @return
 */
QString Article::GetEmballageArticle()
{
    return this->emballageArticle;
}

/**
 * @brief Article::SetCodeArticle
 * @param codeArticle
 */
void Article::SetCodeArticle(QString codeArticle)
{
    this->codeArticle = codeArticle;
}

/**
 * @brief Article::SetDesignationArticle
 * @param designationArticle
 */
void Article::SetDesignationArticle(QString designationArticle)
{
    this->designationArticle = designationArticle;
}

/**
 * @brief Article::SetPoidsArticle
 * @param poidsArticle
 */
void Article::SetPoidsArticle(int poidsArticle)
{
    this->poidsArticle = poidsArticle;
}

/**
 * @brief Article::SetEmplacementArticle
 * @param emplacementArticle
 */
void Article::SetEmplacementArticle(QString emplacementArticle)
{
    this->emplacementArticle = emplacementArticle;
}

/**
 * @brief Article::SetEmballageArticle
 * @param emballageArticle
 */
void Article::SetEmballageArticle(QString emballageArticle)
{
    this->emballageArticle = emballageArticle;
}
