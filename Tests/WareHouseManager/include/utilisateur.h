#ifndef UTILISATEUR_H
#define UTILISATEUR_H


class Utilisateur
{
    public:
        Utilisateur();
        Utilisateur(int droit);
        virtual ~Utilisateur();

    protected:

    private:
        int droit;
};

#endif // UTILISATEUR_H
