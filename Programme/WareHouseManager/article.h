#ifndef ARTICLE_H
#define ARTICLE_H

#include <QString>

/**
 * @brief Classe Article permettant de gerer les articles
 */
class Article
{
public:

    /**
     * @brief Article
     * Constructeur vide de la classe article
    */
    Article();

    /**
     * @brief Article
     * @param codeArticle
     * @param designationArticle
     * @param poidsArticle
     * @param emplacementArticle
     * @param emballageArticle
     */
    Article(QString codeArticle, QString designationArticle, int poidsArticle,
            QString emplacementArticle, QString emballageArticle);

    /**
     * @brief GetCodeArticle
     * @return Retourne le code article (QString)
     */
    QString GetCodeArticle();

    /**
     * @brief GetDesignationArticle
     * @return Retourne la designation de l'article (QString)
     */
    QString GetDesignationArticle();

    /**
     * @brief GetPoidsArticle
     * @return int poidsArticle
     */
    int GetPoidsArticle();

    /**
     * @brief GetEmplacementArticle
     * @return QString EmplacementArticle
     */
    QString GetEmplacementArticle();

    /**
     * @brief GetEmballageArticle
     * @return QString emballageArticle
     */
    QString GetEmballageArticle();

    /**
     * @brief SetCodeArticle
     * @param codeArticle
     */
    void SetCodeArticle(QString codeArticle);

    /**
     * @brief SetDesignationArticle
     * @param designationArticle
     */
    void SetDesignationArticle(QString designationArticle);

    /**
     * @brief SetPoidsArticle
     * @param poidsArticle
     */
    void SetPoidsArticle(int poidsArticle);
    /**
     * @brief SetEmplacementArticle
     * @param emplacementArticle
     */
    void SetEmplacementArticle(QString emplacementArticle);

    /**
     * @brief SetEmballageArticle
     * @param emballageArticle
     */
    void SetEmballageArticle(QString emballageArticle);

private:
    /**
     * @brief codeArticle
     */
    QString codeArticle;

    /**
     * @brief designationArticle
     */
    QString designationArticle;
    /**
     * @brief poidsArticle
     */
    int poidsArticle;
    /**
     * @brief emplacementArticle
     */
    QString emplacementArticle;
    /**
     * @brief emballageArticle
     */
    QString emballageArticle;
};

#endif // ARTICLE_H
