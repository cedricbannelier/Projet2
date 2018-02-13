#ifndef ARTICLE_H
#define ARTICLE_H


class Article
{
    public:
        Article();
        Article(int codeArticle, int poids);
        virtual ~Article();

        int getCodeArticle();
        int getPoids();

    protected:


    private:
        int codeArticle;
        int poids;

};

#endif // ARTICLE_H
