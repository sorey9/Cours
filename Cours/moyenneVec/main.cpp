#include"moyenneVec.h"
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    cout<<"-----Vector-----"<<endl;

    cout<<endl;

    cout<<" "<<"Programme qui calcule ta moyenne à l'aide d'une fonction qui comporte un vector en argument"<<endl;
    
    cout<<endl;

    int nombrenotes=1;
    vector<int>note;
    int N=1;
   
    cout<<" "<<"Combien as-tu de notes ? ";
    cin>>nombrenotes;

    for(int i=0;i<nombrenotes;++i)
    {
        cout<<" "<<"Notes : ";
        cin>>N;
        note.push_back(N);
    }
       
    cout<<" "<<"Ma moyenne est de : "<<"["<<moyenneVec(note)<<"]"<<endl;

    return 0;
}