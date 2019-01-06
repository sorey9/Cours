#include<iostream>
#include<string>

using namespace std;

class Joueur
{
private:
    string nom;

public:
    Joueur();
    Joueur(string);
    ~Joueur();
    int proposeNumero();
    
    string getNom();
    
    void setNom(string);
};