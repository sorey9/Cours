#include"motAleatoire.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
    cout<<"-----MOT MYSTERE-----"<<endl;

    cout<<endl;

    cout<<" "<<"Principe du jeu : "<<endl;
    cout<<" "<<"1./ Le joueur 1 saisit un mot au clavier"<<endl;
    cout<<" "<<"2./ L'ordinateur mélange les lettres du mot"<<endl;
    cout<<" "<<"3./ Le joueur 2 essaie de deviner le mot"<<endl;
    cout<<" "<<"PS: Tu n'as que 3 essaie pour trouver le mot mystère :)"<<endl;

    cout<<endl;

    //1./ Demander de saisir un mot
    string motMystere, saisiUser, motMelanger;
    int coup=0;

    cout<<"Choisi le mot mystère : ";
    cin>>motMystere;

    cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;

    //2./ L'ordinateur mélange le mot 

    motMelanger = melangerLettres(motMystere);

    //3./ On demande a l'utilisateur de trouve le mot mystère
    
    do
    {   
        cout<<"Quel est ce mot ? "<<motMelanger<<endl;
        cout<<"Trouve le mot mystère (En 3 coup) :";
        cin>>saisiUser;

        cout<<endl;

        if(motMystere == saisiUser)
            cout<<"Bravo tu as trouve le mot mystère"<<endl;

        coup++;

        if(coup == 1)
            cout<<"Mot incorrect !! Il te reste [2] essaie"<<endl;
        else if(coup == 2)
            cout<<"Mot incorrect !! Il te reste [1] essaie"<<endl;
        else
        {
            cout<<"Dommage tu n'a plus de coup"<<endl;
            cout<<"Voici le mot à trouver : "<<motMystere<<endl;
        }

        cout<<endl;            
    }
    while(saisiUser != motMystere && coup < 3);
}