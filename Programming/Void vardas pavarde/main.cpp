#include <iostream>
#include <string>

using namespace std;


void vpaVaiz(string vardas,string pavarde, string amzius);


int main()
{
    string vardas,pavarde,amzius;
    cout<<"Irasykite savo varda,pavarde ir amziu"<<endl;
    cin>>vardas>>pavarde>>amzius;
    vpaVaiz(vardas,pavarde,amzius);

    return 0;
}
void vpaVaiz(string vardas,string pavarde,string amzius){
    cout<<vardas<<" "<<pavarde<<" "<<amzius<<endl;
}
