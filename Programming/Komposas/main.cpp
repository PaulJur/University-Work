#include <iostream>

using namespace std;

int main()
{
    int drod,nrod,l,g,p,drod1,nrod1,h;
    cin>>drod>>nrod>>drod1>>nrod1;


    l=360;
    h=180;
    g=l%drod+nrod;
    p=drod1-nrod1%h;

    cout<<g<<" "<< p;

















    return 0;
}
