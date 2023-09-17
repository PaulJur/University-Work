#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,nul,vGalia,rez,ngalia;
    cin>>a>>b>>nul;

    ngalia=a-nul;
    vGalia=b*2*ngalia;

    if(vGalia>b*nul)
        cout<<" VIENETAI ";
    if(vGalia<b*nul)
        cout<<" NULIAI ";
    if(vGalia==b*nul)
        cout<<" NIEKAS ";

}
void rezultatai()
{
    string rez;

    string rez1("NULIAI");
    string rez2("VIENETAI");
    string rez3 ("NUIEKAS");

    cout<<"rez1="<<rez1<<endl
        <<"rez2="<<rez2<<endl
        <<"rez3="<<rez3<<endl;

}
