#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <QString>

/**
 * @brief Classe Fournisseur permettant de gerer les fournisseurs
 */
class Fournisseur
{
public:

    /**
     * @brief Fournisseur
     * @param nomFournisseur
     */
    Fournisseur(QString nomFournisseur);

    /**
     * @brief GetIdFournisseur
     * @return
     */
    int GetIdFournisseur();

    /**
     * @brief GetNomFournisseur
     * @return
     */
    QString GetNomFournisseur();

    /**
     * @brief GetReferenceFournisseur
     * @return
     */
    QString GetReferenceFournisseur();

    /**
     * @brief SetNomFournisseur
     * @param nomFournisseur
     */
    void SetNomFournisseur(QString nomFournisseur);

    /**
     * @brief SetReferenceFournisseur
     * @param referenceFournisseur
     */
    void SetReferenceFournisseur(QString referenceFournisseur);

private:
    /**
     * @brief idFournisseur
     */
    int idFournisseur;

    /**
     * @brief nomFournisseur
     */
    QString nomFournisseur;

    /**
     * @brief referenceFournisseur
     */
    QString referenceFournisseur;

};

#endif // FOURNISSEUR_H
