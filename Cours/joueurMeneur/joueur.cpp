#include"joueur.h"
#include<iostream>

using namespace std;

Joueur::Joueur()
{
    this ->nom="";
}

Joueur::Joueur(string a)
{
    this -> nom=a;
}

Joueur::~Joueur()
{

}

string Joueur::getNom()
{
    return this -> nom;
}

void Joueur::setNom(string a)
{
    this->nom=a;
}

int Joueur::proposeNumero()
{
    int n=0;
    do
    {
        cout<<"Saisir un nb entre 1 et 100"<<endl;
        cin>>n;
    }
    while(n>0 && n>100);
    return n;
}