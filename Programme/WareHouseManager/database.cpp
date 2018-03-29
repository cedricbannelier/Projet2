#include <QtSql/QtSql>
#include <iostream>
#include <vector>
 #include <QCoreApplication>

#include "Database.h"

Database::Database()
{

}

void Database::OpenDatabase()
{
    m_bdd.open();
}

void Database::CloseDatabase()
{
    m_bdd.close();
}

void Database::CreateDatabase()
{
    m_bdd = QSqlDatabase::addDatabase("QSQLITE");
    m_bdd.setDatabaseName("./warehousedb.db");
    m_bdd.open();
    QSqlQuery query(m_bdd);

   query.exec("CREATE TABLE IF NOT EXISTS `utilisateur` ("
              "idUtilisateur INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
              "`login`	TEXT NOT NULL,"
              "`motDePasseUtilisateur`TEXT NOT NULL,"
              "'droitUtilisateur' INTEGER NOT NULL"
              ");");

    query.exec("CREATE TABLE IF NOT EXISTS `article` ("
               "idArticle INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "codeArticle TEXT NOT NULL,"
               "designationArticle TEXT NOT NULL,"
               "poidsArticle REAL NOT NULL,"
               "emplacementArticle TEXT NOT NULL,"
               "idEmballage INTEGER,"
               "FOREIGN KEY(`idEmballage`) REFERENCES `emballage`(`idEmballage`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `emballage` ("
               "idEmballage INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "typeEmballage TEXT NOT NULL,"
               "hauteurEmballage INT NOT NULL,"
               "largeurEmballage INT NOT NULL,"
               "longueurEmballage INT NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `fournisseur` ("
               "idFournisseur INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "nomFournisseur TEXT NOT NULL"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `consulter` ("
               "idConsulter INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "qteStock TEXT NOT NULL,"
               "idUtilisateur INTEGER NOT NULL,"
               "idArticle INTEGER NOT NULL,"
               "FOREIGN KEY(`idUtilisateur`) REFERENCES `utilisateur`(`idUtilisateur`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`idArticle`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `livrer` ("
               "idLivrer INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "qteLivree INTEGER NOT NULL, "
               "numeroLivraison TEXT NOT NULL, "
               "dateLivraison TEXT NOT NULL, "
               "idArticle INTEGER NOT NULL, "
               "idFournisseur INTEGER NOT NULL, "
               "FOREIGN KEY(`idFournisseur`) REFERENCES `fournisseur`(`idFournisseur`),"
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`idArticle`)"
               ");");

    query.exec("CREATE TABLE IF NOT EXISTS `expedition` ("
               "idExpedition INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "qteExpedition INTEGER NOT NULL, "
               "numeroExpedition TEXT NOT NULL, "
               "idArticle INTEGER NOT NULL, "
               "FOREIGN KEY(`idArticle`) REFERENCES `article`(`idArticle`)"
               ");");

    CreationAdministrateur();
}

void Database::CreationAdministrateur()
{
    QSqlQuery query(m_bdd);
    query.exec("SELECT COUNT(login) FROM utilisateur WHERE login='administrateur'");

    query.next();

    int presenceDansLaBdd = query.value(0).toInt();

    if(presenceDansLaBdd == 0)
     {
        query.exec("INSERT INTO utilisateur(login, motDePasseUtilisateur, droitUtilisateur) "
                   " VALUES ('ad', 'ad', 2)");
     }
}

void Database::InsertProduit(Article &produitAInserDansLaBdd)
{
    std::cout << "MODE DEBUG : Dans insertproduit" << std::endl;
    QSqlQuery query(m_bdd);
    query.prepare("INSERT INTO article (codeArticle, designationArticle, poidsArticle, emplacementArticle, idEmballage)"
                  "VALUES(:codeArticle, :designationArticle, :poisArticle, :emplacementArticle, :idEmballage);");
    query.bindValue(":codeArticle", produitAInserDansLaBdd.GetCodeArticle());
    query.bindValue(":designationArticle", produitAInserDansLaBdd.GetDesignationArticle());
    query.bindValue(":poisArticle", produitAInserDansLaBdd.GetPoidsArticle());
    query.bindValue(":emplacementArticle", produitAInserDansLaBdd.GetEmplacementArticle());
    query.bindValue(":idEmballage", produitAInserDansLaBdd.GetEmballageArticle());
    query.exec();

    InsertStockAZeroApresInsertProduit();
}

void Database::InsertStockAZeroApresInsertProduit()
{
    std::cout << "MODE DEBUG : Dans inserer un stock a zero apres l'inssert d'un produit" << std::endl;

    QSqlQuery query(m_bdd);
    query.exec("SELECT seq "
               "FROM sqlite_sequence "
               "WHERE name = 'article';");

    query.next();

    QString dernierIdArticle = query.value(0).toString().toUpper();

    query.prepare("INSERT INTO consulter (qteStock, idUtilisateur, idArticle) "
                  "VALUES (0, 1 , :dernierIdArticle);");
    query.bindValue(":dernierIdArticle", dernierIdArticle);
    query.exec();
}

void Database::UpdateProduit(Article &produit)
{
    std::cout << "MODE DEBUG : Dans Update un produit" << std::endl;

    QSqlQuery query(m_bdd);

    query.prepare("UPDATE article "
                  "SET designationArticle=:designationArticle,"
                  "poidsArticle=:poidsArticle,"
                  "emplacementArticle=:emplacementArticle "
                  "WHERE codeArticle=:codeArticle;");

    query.bindValue(":designationArticle", produit.GetDesignationArticle());
    query.bindValue(":poidsArticle", produit.GetPoidsArticle());
    query.bindValue(":emplacementArticle", produit.GetEmplacementArticle());
    query.bindValue(":codeArticle", produit.GetCodeArticle());
    query.exec();
}

Article * Database::AfficheUnProduit(QString codeArticle)
{
    QSqlQuery query(m_bdd);
    query.prepare("SELECT codeArticle, designationArticle, poidsArticle, emplacementArticle, idEmballage "
                  "FROM article "
                  "WHERE codeArticle = :codeArticle;");
    query.bindValue(":codeArticle", codeArticle);
    query.exec();

    do
    {
        if(query.next())
        {
            Article * articleAffiche = new Article();
            articleAffiche->SetCodeArticle(query.value(0).toString());
            articleAffiche->SetDesignationArticle(query.value(1).toString());
            articleAffiche->SetPoidsArticle(query.value(2).toInt());
            articleAffiche->SetEmplacementArticle(query.value(3).toString());
            articleAffiche->SetEmballageArticle(query.value(4).toString());
            return articleAffiche;
        }
    }while (query.next());

    return new Article();

}

Utilisateur * Database::GetDroitUtilisateur(Utilisateur * nouvelUtilisateur)
{
    std::cout << "MODE DEBUG : Droit utilisateur dans database.CPP" << std::endl;

    QSqlQuery query(m_bdd);

    query.prepare("SELECT login, droitUtilisateur "
                  "FROM utilisateur "
                  "WHERE login = :loginEntreParUtilisateur "
                  "AND motDePasseUtilisateur = :motDePasseUtilisateur; ");
    query.bindValue(":loginEntreParUtilisateur", nouvelUtilisateur->GetLogin());
    query.bindValue(":motDePasseUtilisateur", nouvelUtilisateur->GetMotDePasse());
    query.exec();

    do
    {
        if(query.next())
        {
            Utilisateur * user = new Utilisateur();
            user->SetLogin(query.value(0).toString());
            user->SetDroit(query.value(1).toString().toInt());
            return user;
        }
    }while(query.next());

    return new Utilisateur();
}

void Database::AjoutUtilisateur(Utilisateur &user)
{
    std::cout << "MODE DEBUG : Dans ajout utilisateur" << std::endl;

    /* //Hach du mot de passe
    QString chaine=user.GetMotDePasse();
    QByteArray motDePasseHache = QCryptographicHash::hash(chaine.toUtf8(), QCryptographicHash::Sha1);
    */

    QSqlQuery query(m_bdd);
    query.prepare("INSERT INTO utilisateur (login, motDePasseUtilisateur, droitUtilisateur)"
                  "VALUES(:login, :motDePasseUtilisateur, :droit);");
    query.bindValue(":login", user.GetLogin());
    query.bindValue(":motDePasseUtilisateur", user.GetMotDePasse());
    query.bindValue(":droit", user.GetDroit());

    query.exec();
}

int Database::RecupererIdArticle(QString codeArticle)
{
    std::cout << "MODE DEBUG : Dans Recuperer ID article database.CPP" << std::endl;

    QSqlQuery query(m_bdd);
    query.prepare("SELECT idArticle FROM article WHERE codeArticle=:codeArticle");
    query.bindValue(":codeArticle", codeArticle);
    query.exec();

    query.next();
    int idArticle = query.value(0).toInt();

    return idArticle;
}

int Database::RecupererIdFournisseur(QString nomFournisseur)
{
    std::cout << "MODE DEBUG : Dans Recuperer ID Fournisseur database.CPP" << std::endl;

    QSqlQuery query(m_bdd);
    query.prepare("SELECT idFournisseur FROM fournisseur WHERE nomFournisseur=:nomFournisseur");
    query.bindValue(":nomFournisseur", nomFournisseur);
    query.exec();

    query.next();
    int idFournisseur = query.value(0).toInt();

    return idFournisseur;
}

void Database::AjoutEmballage(Emballage&nouvelEmballage)
{
    std::cout << "MODE DEBUG : Dans ajouter nouvel emballage database.CPP" << std::endl;

    QSqlQuery query(m_bdd);
    query.prepare("INSERT INTO emballage (typeEmballage, hauteurEmballage, largeurEmballage, longueurEmballage)"
                  "VALUES(:typeEmballage, :hauteurEmballage, :largeurEmballage, :longueurEmballage);");
    query.bindValue(":typeEmballage", nouvelEmballage.GetTypeEmballage());
    query.bindValue(":hauteurEmballage", nouvelEmballage.GetHauteurEmballage());
    query.bindValue(":largeurEmballage", nouvelEmballage.GetLargeurEmballage());
    query.bindValue(":longueurEmballage", nouvelEmballage.GetLongueurEmballage());

    query.exec();
}

bool Database::ArticlePresentDansLaBddAvecId(QString codeArticle)
{
    std::cout << "MODE DEBUG : Dans Verification si article present dans la BDD database.CPP" << std::endl;

    QSqlQuery query(m_bdd);
    query.prepare("SELECT idArticle "
                  "FROM article "
                  "WHERE codeArticle=:codeArticle;");
    query.bindValue(":codeArticle", codeArticle);
    query.exec();

    query.next();

    int presenceDansLaBdd = query.value(0).toInt();

    if(presenceDansLaBdd == 0)
     {
        return false;
     }
     else
     {
        return true;
     }
}

bool Database::ArticlePresentDansLaBddAvecLeCodeArticle(QString codeArticle)
{
    std::cout << "MODE DEBUG : Dans Verification si article present dans la BDD database.CPP" << std::endl;

    QSqlQuery query(m_bdd);
    query.prepare("SELECT COUNT(idArticle) as 'nb' "
                  "FROM article "
                  "WHERE codeArticle=:codeArticle;");
    query.bindValue(":codeArticle", codeArticle.toUpper());
    query.exec();
    query.next();

    int presenceDansLaBdd = query.value(0).toInt();

    if(presenceDansLaBdd == 0)
     {
        return true;
     }
     else
     {
        return false;
     }
}

void Database::AjoutFournisseur(Fournisseur & nouvelFournisseur)
{
    std::cout << "MODE DEBUG : Dans ajouter nouveau fournisseur database.CPP" << std::endl;

    QSqlQuery query(m_bdd);
    query.prepare("INSERT INTO fournisseur (nomFournisseur)"
                  "VALUES(:nomFournisseur);");
    query.bindValue(":nomFournisseur", nouvelFournisseur.GetNomFournisseur());

    query.exec();
}

void Database::ReceptionLivraison(Livraison & nouvelleLivraionsDansBdd)
{
    std::cout << "MODE DEBUG : Dans reception commande database.CPP" << std::endl;

    QSqlQuery query(m_bdd);
    query.prepare("INSERT INTO livrer (qteLivree, numeroLivraison, dateLivraison, idArticle, idFournisseur)"
                  "VALUES(:qteLivree, :numeroLivraison, :dateLivraison, :idArticle, :idFournisseur);");
    query.bindValue(":qteLivree", nouvelleLivraionsDansBdd.GetQteLivree());
    query.bindValue(":numeroLivraison", nouvelleLivraionsDansBdd.GetNumeroLivraison());
    query.bindValue(":dateLivraison", nouvelleLivraionsDansBdd.GetDateLivraison());
    query.bindValue(":idArticle", nouvelleLivraionsDansBdd.GetIdArticle());
    query.bindValue(":idFournisseur", nouvelleLivraionsDansBdd.GetIdFournisseur());

    query.exec();
}

bool Database::FournisseurPresentDansLaBdd(QString nomFournisseur)
{
    std::cout << "MODE DEBUG : Dans Verification si fournisseur est present dans la BDD database.CPP" << std::endl;

    QSqlQuery query(m_bdd);
    query.prepare("SELECT nomFournisseur "
                  "FROM fournisseur "
                  "WHERE nomFournisseur=:nomFournisseur;");
    query.bindValue(":nomFournisseur", nomFournisseur.toUpper());
    query.exec();

    query.next();

    QString presenceDansLaBdd = query.value(0).toString().toUpper();

    if(presenceDansLaBdd.toUpper() == nomFournisseur.toUpper())
     {
        return false;
     }
     else
     {

        return true;
     }
}

int Database::QantiteTotal(int idArticle)
{
    QSqlQuery query(m_bdd);

    query.prepare("WITH E AS (SELECT expedition.idArticle,SUM(expedition.qteExpedition) AS EXPEDIE FROM expedition GROUP BY expedition.idArticle), "
                  "L AS (SELECT livrer.idArticle,SUM(livrer.qteLivree) AS LIVRE FROM LIVRER GROUP BY livrer.idArticle) "
                  "SELECT COALESCE(L.Livre,0) - COALESCE(E.EXPEDIE,0) "
                  "FROM article "
                  "LEFT JOIN L ON article.idArticle = L.idArticle "
                  "LEFT JOIN E ON article.idArticle = E.idArticle "
                  "WHERE article.idArticle = :idArticle;");
    query.bindValue(":idArticle", idArticle);
    query.exec();

    int quantiteTotal;

    while(query.next())
    {
        quantiteTotal = query.value(0).toInt();
    }

    return quantiteTotal;
}

bool Database::PresenceUtilisateur(QString login)
{
    QSqlQuery query(m_bdd);

    query.prepare("SELECT COUNT(login) FROM utilisateur WHERE login = :login;");
    query.bindValue(":login", login);
    query.exec();
    query.next();

    int presenceDansLaBdd = query.value(0).toInt();

    if(presenceDansLaBdd == 0)
     {
        return true;
     }
    else
    {
        return false;
    }

}

void Database::ListeDesUtilisateurs(QSqlQueryModel *modal)
{
    QSqlQuery query(m_bdd);

    query.prepare("SELECT "
                  "login "
                  "FROM utilisateur "
                  );
    query.exec();
    modal->setQuery(query);
}

void Database::ModificationDroitUtilisateur(int nouveauDroitUtilisateur, QString login)
{
    QSqlQuery query(m_bdd);

    query.prepare("UPDATE utilisateur "
                  "SET droitUtilisateur=:nouveauDroit "
                  "WHERE login = :login");
    query.bindValue(":nouveauDroit",nouveauDroitUtilisateur);
    query.bindValue(":login",login);
    query.exec();
}

void Database::RechercheProduit(QSqlQueryModel *modal, QString codeArticle)
{
    QSqlQuery query(m_bdd);
    query.prepare("WITH E AS (SELECT expedition.idArticle,SUM(expedition.qteExpedition) AS EXPEDIE FROM expedition GROUP BY expedition.idArticle), "
                  "L AS (SELECT livrer.idArticle,SUM(livrer.qteLivree) AS LIVRE FROM LIVRER GROUP BY livrer.idArticle) "
                  "SELECT  COALESCE(L.Livre,0) - COALESCE(E.EXPEDIE,0) AS 'Qte Phy Totale', "
                  "L.Livre AS 'Qte Livrée', "
                  "E.Expedie AS 'Qte Exp', "
                  "article.codeArticle as Référence, "
                  "article.designationArticle as Libelle, "
                  "article.poidsArticle as Poids "
                  "FROM article "
                  "LEFT JOIN L ON article.idArticle = L.idArticle "
                  "LEFT JOIN E ON article.idArticle = E.idArticle "
                  "WHERE codeArticle LIKE :codeArticle");
    query.bindValue(":codeArticle", '%'+ codeArticle + '%');
    query.exec();
    modal->setQuery(query);
}

void Database::RechercheProduitLibelle(QSqlQueryModel *modal, QString libelleArticle)
{
    QSqlQuery query(m_bdd);
    query.prepare("WITH E AS (SELECT expedition.idArticle,SUM(expedition.qteExpedition) AS EXPEDIE FROM expedition GROUP BY expedition.idArticle), "
                  "L AS (SELECT livrer.idArticle,SUM(livrer.qteLivree) AS LIVRE FROM LIVRER GROUP BY livrer.idArticle) "
                  "SELECT  COALESCE(L.Livre,0) - COALESCE(E.EXPEDIE,0) AS 'Qte Phy Totale', "
                  "L.Livre AS 'Qte Livrée', "
                  "E.Expedie AS 'Qte Exp', "
                  "article.codeArticle as Référence, "
                  "article.designationArticle as Libelle, "
                  "article.poidsArticle as Poids "
                  "FROM article "
                  "LEFT JOIN L ON article.idArticle = L.idArticle "
                  "LEFT JOIN E ON article.idArticle = E.idArticle "
                  "WHERE designationArticle LIKE :designationArticle");
    query.bindValue(":designationArticle", '%'+ libelleArticle + '%');
    query.exec();
    modal->setQuery(query);
}

void Database::VuStockModal(QSqlQueryModel *modal)
{
    QSqlQuery query(m_bdd);

    query.prepare("WITH E AS (SELECT expedition.idArticle,SUM(expedition.qteExpedition) AS EXPEDIE FROM expedition GROUP BY expedition.idArticle), "
                  "L AS (SELECT livrer.idArticle,SUM(livrer.qteLivree) AS LIVRE FROM LIVRER GROUP BY livrer.idArticle) "
                  "SELECT  COALESCE(L.Livre,0) - COALESCE(E.EXPEDIE,0) AS 'Qte Phy Totale', "
                  "L.Livre AS 'Qte Livrée', "
                  "E.Expedie AS 'Qte Exp', "
                  "article.codeArticle as 'Code article', "
                  "article.designationArticle as Libelle, "
                  "article.poidsArticle as Poids "
                  "FROM article "
                  "LEFT JOIN L ON article.idArticle = L.idArticle "
                  "LEFT JOIN E ON article.idArticle = E.idArticle");
    query.exec();
    modal->setQuery(query);
}

void Database::NouvelleExpedition(int quantiteExpedition, QString numeroExpedition, int idArticle)
{
    QSqlQuery query(m_bdd);

    query.prepare("INSERT INTO expedition"
                  "(qteExpedition, numeroExpedition, idArticle) "
                  "VALUES (:quantiteExpedition, :numeroExpedition, :codeArticleExpedition)");
    query.bindValue(":quantiteExpedition", quantiteExpedition);
    query.bindValue(":numeroExpedition", numeroExpedition);
    query.bindValue(":codeArticleExpedition", idArticle);
    query.exec();
}

void Database::ListeDesArticlesEnBdd(QSqlQueryModel *modal)
{
    QSqlQuery query(m_bdd);

    query.prepare("SELECT "
                  "codeArticle "
                  "FROM article "
                  );
    query.exec();
    modal->setQuery(query);
}

void Database::ListeDesFournisseursEnBdd(QSqlQueryModel *modal)
{
    QSqlQuery query(m_bdd);

    query.prepare("SELECT "
                  "nomFournisseur "
                  "FROM fournisseur "
                  );
    query.exec();
    modal->setQuery(query);
}
