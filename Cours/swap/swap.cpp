#include"swap.h"
#include<iostream>

using namespace std;


void swap(int &a,int &b)
{
    int temp(a);    //On sauvegarde la valeur de 'a'
    a=b;            //On remplace la valeur de 'a' par celle de 'b'
    b=temp;         //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b' 
}