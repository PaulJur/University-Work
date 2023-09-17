#include <iostream>

using namespace std;

int main()
{
    int k,b,m,a,x1,x2,r1,r2;
    cin>>k>>b>>m>>a>>x1>>x2;
    for (int i=x1;i<=x2;i++){
        r1=k*i+b;
        r2=m*i+a;
        cout<<i<<<<" "<<r1<<" "<<r2;
        if(r1==r2)cout<<" "<"kerta"<<endl;
         else cout<<"  ****"<<endl;

    }






    return 0;
}
