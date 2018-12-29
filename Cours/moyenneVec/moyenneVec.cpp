#include"moyenneVec.h"
#include<vector>
#include<iostream>

using namespace std;

float moyenneVec(vector<int> vec)
{
    float moyenneVec;
    for(uint i=0;i<vec.size();++i)
    {
        moyenneVec +=vec[i];
    }

    moyenneVec /= vec.size();

    return moyenneVec;
}