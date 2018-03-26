#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QString>

/**
 * @brief Classe Utilisateur permettant de gerer les utilisateurs
 */
class Utilisateur
{
public:
    /**
     * @brief Utilisateur
     */
    Utilisateur();

    /**
     * @brief Utilisateur
     * @param login
     * @param motDePasse
     */
    Utilisateur(QString login, QString motDePasse);

    /**
     * @brief Utilisateur
     * @param login
     * @param motDePasse
     * @param droit
     */
    Utilisateur(QString login, QString motDePasse, int droit);

    /**
     * @brief GetLogin
     * @return
     */
    QString GetLogin();

    /**
     * @brief GetMotDePasse
     * @return
     */
    QString GetMotDePasse();

    /**
     * @brief GetDroit
     * @return
     */
    int GetDroit();

    /**
     * @brief GetId
     * @return
     */
    int GetId();

    /**
     * @brief SetLogin
     * @param login
     */
    void SetLogin(QString login);

    /**
     * @brief SetMotDePasse
     * @param motDePasse
     */
    void SetMotDePasse(QString motDePasse);

    /**
     * @brief SetDroit
     * @param droit
     */
    void SetDroit(int droit);

    /**
     * @brief SetId
     * @param id
     */
    void SetId(int id);

private:

    /**
     * @brief droit
     */
    int droit;

    /**
     * @brief login
     */
    QString login;

    /**
     * @brief motDePasse
     */
    QString motDePasse;

    /**
     * @brief id
     */
    int id;
};

#endif // UTILISATEUR_H
