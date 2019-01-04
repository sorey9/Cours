#include"dessineRectangle.h"
#include<iostream>

using namespace std;

int main()
{
    cout<<" "<<"-----Fonction avec deux arguments-----"<<endl;

    cout<<endl;

    cout<<" "<<"- Programme qui demande la longeur et la largeur"<<endl;
    cout<<" "<<"- Et qui affiche la longeur et la largeur saisie avec des '*'"<<endl;

    cout<<endl;

    int longueur,largeur;

    cout<<" "<<"La longueur du rectangle : ";
    cin>>longueur;

    cout<<endl;

    cout<<" "<<"Largeur du rectangle : ";
    cin>>largeur;

    cout<<endl;
    
    dessineRectangle(longueur,largeur); //appel de la fontion dessineRectangle
    
    return 0;
}