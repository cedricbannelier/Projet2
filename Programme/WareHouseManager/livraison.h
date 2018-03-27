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
    QString GetNumeroLivraison();
    QString GetDateLivraison();
    int GetIdArticle();
    int GetIdFournisseur();

private:

    int qteLivree;
    QString numeroLivraison;
    QString dateLivraison;
    int idArticle;
    int idFournisseur;

};

#endif // LIVRAISON_H
