#include"moyenne.h"
#include<iostream>

using namespace std;

int main()
{
    cout<<"-----Tableau-----"<<endl;

    cout<<endl;

    cout<<" "<<"Programme qui calcule ta moyenne à l'aide d'une fonction qui comporte un tableau et un entier en argument"<<endl; 

    cout<<endl;

    int nbnotes=0;
    int notes[nbnotes];   

    cout<<" "<<"Combien as-tu de notes ? ";
    cin>>nbnotes;

    for(int i=0;i<nbnotes;++i)
    {
        cout<<" "<<"Notes : ";
        cin>>notes[i];  
        moyenneTab(notes,nbnotes);     
    }

    cout<<" "<<"Ma moyenne est de : "<<"["<<moyenneTab(notes,nbnotes)<<"]"<<endl;

    return 0;
}