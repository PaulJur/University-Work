#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int skaicius;
    int suma=0;
    int didziausias=0;
    int maziausias=INT_MAX;
    int sandauga=1;


 for(int i=0;i<n;i++){
    cin>>skaicius;
    suma=suma+skaicius;
    sandauga=sandauga*skaicius;
    if(maziausias>skaicius) maziausias =skaicius;
    if(didziausias<skaicius) didziausias=skaicius;
    cout<<"suma : "<<suma<<endl;<<"sandauga: "<<sandauga<<endl<<"maximumas: "<<didziausias<<endl<<"maziausia: "<<maziausias;
 }





    return 0;
}
