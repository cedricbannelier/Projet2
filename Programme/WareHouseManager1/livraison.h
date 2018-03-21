#ifndef LIVRAISON_H
#define LIVRAISON_H

#include <QString>

class Livraison
{
public:
    Livraison();
    Livraison(int qteLivree, QString numeroLivraison, int dateLivraison, int idArticle, int idFournisseur);

    int GetQteLivree();
    QString GetNumeroLivraison();
    int GetDateLivraison();
    int GetIdArticle();
    int GetIdFournisseur();

private:

    int qteLivree;
    QString numeroLivraison;
    int dateLivraison;
    int idArticle;
    int idFournisseur;

};

#endif // LIVRAISON_H
