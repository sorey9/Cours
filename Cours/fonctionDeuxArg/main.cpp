#include"dessineRectangle.h"
#include<iostream>

using namespace std;

int main()
{
    cout<<"Fonction avec deux arguments"<<endl;
    int longueur(5) ,largeur(5);
    cout<<" "<<"La longueur du rectangle : ";
    //cin>>longueur;
    cout<<" "<<"Largeur du rectangle : ";
    //cin>>largeur;
    dessineRectangle(longueur,largeur);
    
    return 0;
}