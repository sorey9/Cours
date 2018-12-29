#include"motAleatoire.h"
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std; 

string melangerLettres(string mot)
{
    string melange;
    int position=0;
    
    srand(time(NULL));
    
    //Tant qu'on n'a pas extrait toutes les lettres du mot
    while(mot.size() != 0)
    {
        //On choisir un numéro de lettre au hasard dans le mot
        position = rand()%mot.size();
        //On ajoute la lettre dans le mot mélangé
        melange += mot[position];
        //On retire cette lettre du mot mystère
        //Pour ne pas la prendre une deuxième fois
        mot.erase(position, 1);
    }

    return melange;
}