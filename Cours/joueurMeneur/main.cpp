#include<iostream>
#include"meneur.h"
#include"joueur.h"

using namespace std;

int main()
{
    Joueur J("100");
    Meneur M;
    int nbEssai=0;
    int a=0;
    int rep;    

    do
    {
        a = J.proposeNumero();
        rep=M.repond(a);
        nbEssai++;
    }
    while(rep!=0 &&nbEssai<3);
        cout<<"nombre d'essai"<<nbEssai<<endl;
    
    return 0;
}