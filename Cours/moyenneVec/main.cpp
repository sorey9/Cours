#include"moyenneVec.h"
#include<iostream>
#include<vector>

using namespace std;

int main()
{
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