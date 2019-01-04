#include"ajouteDeux.h"
#include<iostream>

using namespace std;

int main()
{
cout<<"-----Appel d'une fonction-----"<<endl;
    cout<<endl;

    int a(2);
    int b(2);

    cout<<" "<<"Fonction avec un argument"<<endl;

    cout<<endl;

    cout<<" "<<"Valeur de a : "<<a<<endl;
    cout<<" "<<"Valeur de b : "<<b<<endl;

    a=ajouteDeux(a);   //Appel de la fonction ajouteDeux
    b=ajouteDeux(b);

    cout<<endl;
    
    cout<<" "<<"Valeur de a et b après l'appel de la fonction"<<endl;

    cout<<endl;

    cout<<" "<<"Valeur de a : "<<a<<endl;
    cout<<" "<<"Valeur de b : "<<b<<endl;
}