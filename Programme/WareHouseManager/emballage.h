#ifndef EMBALLAGE_H
#define EMBALLAGE_H

/**
  * @file emballage.h
  * @brief Gestion des emballages
  * @author Cédric BANNELIER
  * @version 0.1b
**/

#include <QString>

/**
 * @brief Classe Emballage permettant de gerer les emballages
 */

class Emballage
{
public:
    /**
     * @brief Emballage
     */
    Emballage();

    /**
     * @brief Emballage
     * @param typeEmballage
     * @param hauteurEmballage
     * @param largeurEmballage
     * @param longueurEmballage
     */
    Emballage(QString typeEmballage, int hauteurEmballage, int largeurEmballage, int longueurEmballage);

    /**
     * @brief GetTypeEmballage
     * @return
     */
    QString GetTypeEmballage();

    /**
     * @brief GetHauteurEmballage
     * @return
     */
    int GetHauteurEmballage();

    /**
     * @brief GetLargeurEmballage
     * @return
     */
    int GetLargeurEmballage();

    /**
     * @brief GetLongueurEmballage
     * @return
     */
    int GetLongueurEmballage();

    /**
     * @brief SetTypeEmballage
     * @param typeEmballage
     */
    void SetTypeEmballage(QString typeEmballage);

    /**
     * @brief SetHauteurEmballage
     * @param hauteurEmballage
     */
    void SetHauteurEmballage(int hauteurEmballage);

    /**
     * @brief SetLargeurEmballage
     * @param largeurEmballage
     */
    void SetLargeurEmballage(int largeurEmballage);

    /**
     * @brief SetLongueurEmballage
     * @param longueurEmballage
     */
    void SetLongueurEmballage(int longueurEmballage);


private:

    /**
     * @brief typeEmballage
     */
    QString typeEmballage;

    /**
     * @brief hauteurEmballage
     */
    int hauteurEmballage;

    /**
     * @brief largeurEmballage
     */
    int largeurEmballage;

    /**
     * @brief longueurEmballage
     */
    int longueurEmballage;



};

#endif // EMBALLAGE_H
