#include<iostream>
#include"meneur.h"
#include<ctime>
#include<cstdlib>

using namespace std;

Meneur::Meneur()
{
    choisirNumero();
}

Meneur::~Meneur()
{

}

void Meneur::setNumero(int a)
{
    this ->numero=a;
}

void Meneur::choisirNumero()
{
    srand(time(NULL));
    this ->numero=rand()%99-1;
}

int Meneur::repond(int a)
{
    if(a==numero)
        return 0;
    else if(a<numero)
        return 1;
    else
        return 2;
}