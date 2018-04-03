#ifndef LIVRAISON_H
#define LIVRAISON_H

/**
  * @file livraison.h
  * @brief Gestion des livraisons
  * @author Cédric BANNELIER
  * @version 0.1b
**/

#include <QString>

/**
 * @brief Classe Livraison permettant de gerer les livraisons
 */
class Livraison
{
public:
    /**
     * @brief Livraison
     */
    Livraison();

    /**
     * @brief Livraison
     * @param qteLivree
     * @param numeroLivraison
     * @param dateLivraison
     * @param idArticle
     * @param idFournisseur
     */
    Livraison(int qteLivree, QString numeroLivraison, QString dateLivraison, int idArticle, int idFournisseur);

    /**
     * @brief GetQteLivree
     * @return
     */
    int GetQteLivree();

    /**
     * @brief GetNumeroLivraison
     * @return
     */
    QString GetNumeroLivraison();

    /**
     * @brief GetDateLivraison
     * @return
     */
    QString GetDateLivraison();

    /**
     * @brief GetIdArticle
     * @return
     */
    int GetIdArticle();

    /**
     * @brief GetIdFournisseur
     * @return
     */
    int GetIdFournisseur();

private:

    /**
     * @brief qteLivree
     */
    int qteLivree;

    /**
     * @brief numeroLivraison
     */
    QString numeroLivraison;

    /**
     * @brief dateLivraison
     */
    QString dateLivraison;

    /**
     * @brief idArticle
     */
    int idArticle;

    /**
     * @brief idFournisseur
     */
    int idFournisseur;

};

#endif // LIVRAISON_H
