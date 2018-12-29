#include<iostream>

using namespace std;

int main()
{
    cout<<"Fonction avec deux arguments et passé par réference"<<endl;

    int a1(2);
    int b1(5);
    cout<<" "<<"a vaut "<<a1<<" et b vaut "<<b1<<endl;
    
    swap(a1,b1);
    cout<<" "<<"a vaut "<<a1<<" et b vaut "<<b1<<endl;

    return 0;
}