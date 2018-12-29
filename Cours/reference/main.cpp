#include<iostream>

using namespace std;

int main()
{
    cout<<"-----Déclaration de varaible avec et sans réference-----"<<endl;
    cout<<endl;

    string nomUtilisateur("Damien Auguste"); //Variable qui contient le nom de l'utilisateur
    string &maReference(nomUtilisateur);    //Reference sur la variable 'nomUtilisateur'

    cout<<" "<<"Vous vous appelez "<<nomUtilisateur<<"(via la varaible nomUtilisateur)"<<endl;
    cout<<" "<<"Vous vous appelez "<<maReference<<"(via la reference de nomUtilisateur)"<<endl;
}