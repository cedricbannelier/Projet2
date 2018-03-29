#ifndef ARTICLE_H
#define ARTICLE_H

/**
  * @file article.h
  * @brief Gestion des articles
  * @author Cédric BANNELIER
  * @version 0.1b
**/

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
     * Constructeur permettant de construire un objet article avec les paramètres
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
     * @return Retourne le poids de l'artciel (Int)
     */
    int GetPoidsArticle();

    /**
     * @brief GetEmplacementArticle
     * @return Retourne l'emplacement de l'article (QString)
     */
    QString GetEmplacementArticle();

    /**
     * @brief GetEmballageArticle
     * @return Retourne les dimensions de l'emballage (QString)
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
