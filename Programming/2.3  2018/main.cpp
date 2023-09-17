#include <iostream>

using namespace std;

// 8 2 5
// is viso issiusta 8 kariai
// vienoto kario galia x2;
// 5 kiek sudaro nuliu.
int main()
{
    int a,b,nul,vGalia;
    cin>>a>>b>>nul;

    vGalia=(a-nul)*4;
    cout<<vGalia<<" ";

    if(vGalia>nul*b){
        cout<<"VIENETAI";
    } else if (vGalia=nul*b){
        cout<<"NIEKAS";
    } else {
        cout<<"NULIAI";
    }












    return 0;
}
