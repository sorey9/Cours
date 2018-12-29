#include"moyenne.h"
#include<iostream>

using namespace std;

int main()
{
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