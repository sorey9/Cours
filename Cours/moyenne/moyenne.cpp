#include"moyenne.h"
#include<iostream>

using namespace std;

float moyenneTab(int tableau[],int tailleTableau)   //Fonction avec un tableau en argument 
{
    float moyenne=0;
    for(int i=0;i<tailleTableau;++i)
    {
        moyenne += tableau[i];
    }
    
    moyenne /= tailleTableau;

    return moyenne;
}